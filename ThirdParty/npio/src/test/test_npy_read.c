#include "npio.h"
#include "unity.h"

#ifndef _WIN32
#    include <unistd.h>
#else
#    include <direct.h>
#endif

static npy_file_t   *file  = NULL;
static np_array_t   *array = NULL;
static npio_status_t status;

void setUp(void)
{
    char cwd[NPIO_BUF_SIZE];
    char npyfilepath[512];

    TEST_ASSERT_NOT_NULL_MESSAGE(getcwd(cwd, sizeof(cwd)), "getcwd() failed");
    snprintf(npyfilepath, sizeof(npyfilepath), "%s/float32_4x4.npy", cwd);

    npio_status_t fopen_status = NPIO_EUNKNOWN;
    file                       = npy_fopen(npyfilepath, &fopen_status);
    TEST_ASSERT_NOT_NULL_MESSAGE(file, "npy_fopen() returned NULL");
    TEST_ASSERT_EQUAL_MESSAGE(NPIO_OK, fopen_status, "npy_fopen() failed");

    status = npy_fread(file);
    TEST_ASSERT_EQUAL_INT(NPIO_OK, status);

    array = npy_read(file, &status);
    TEST_ASSERT_NOT_NULL_MESSAGE(array, "npy_read() returned NULL");
    TEST_ASSERT_EQUAL_INT(NPIO_OK, status);
}

void tearDown(void)
{
    npy_file_delete(file);
    file = NULL;
    np_array_delete(array);
}

void test_npy_read_ok(void)
{
    TEST_ASSERT_EQUAL_INT(2, array->shape.ndim);
    TEST_ASSERT_EQUAL_INT(4, array->shape.shape[0]);
    TEST_ASSERT_EQUAL_INT(4, array->shape.shape[1]);
    TEST_ASSERT_EQUAL_INT(16, array->num_vals);
    TEST_ASSERT_EQUAL_INT(4, array->word_size);
}

int main(void)
{
    UNITY_BEGIN();
    RUN_TEST(test_npy_read_ok);
    return UNITY_END();
}
