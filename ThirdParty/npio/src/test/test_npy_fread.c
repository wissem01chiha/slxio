#include "npio.h"
#include "unity.h"

#ifndef _WIN32
#    include <unistd.h>
#else
#    include <direct.h>
#endif

void setUp(void)
{
}
void tearDown(void)
{
}

void test_npy_fread_ok(void)
{
    char cwd[NPIO_BUF_SIZE];
    char npyfilepath[512];

    TEST_ASSERT_NOT_NULL_MESSAGE(getcwd(cwd, sizeof(cwd)), "getcwd() failed");
    snprintf(npyfilepath, sizeof(npyfilepath), "%s/float32_4x4.npy", cwd);

    npio_status_t fopen_status = NPIO_EUNKNOWN;
    npy_file_t   *file         = npy_fopen(npyfilepath, &fopen_status);

    TEST_ASSERT_NOT_NULL(file);
    TEST_ASSERT_EQUAL_INT(NPIO_OK, fopen_status);

    npio_status_t fread_status = npy_fread(file);
    TEST_ASSERT_EQUAL_INT(NPIO_OK, fread_status);

    npy_file_delete(file);
}

void test_npy_fread_parse_ok(void)
{
    char cwd[NPIO_BUF_SIZE];
    char npyfilepath[512];

    TEST_ASSERT_NOT_NULL_MESSAGE(getcwd(cwd, sizeof(cwd)), "getcwd() failed");
    snprintf(npyfilepath, sizeof(npyfilepath), "%s/float32_4x4.npy", cwd);

    npio_status_t fopen_status = NPIO_EUNKNOWN;
    npy_file_t   *file         = npy_fopen(npyfilepath, &fopen_status);

    npy_fread(file);
    TEST_ASSERT_NOT_NULL(file->fp);
    TEST_ASSERT_EQUAL_INT(1, file->version_major);
    TEST_ASSERT_EQUAL_INT(0, file->version_minor);
    TEST_ASSERT_EQUAL_INT(0, file->fortran_order);
    TEST_ASSERT_EQUAL_size_t(2, file->ndim);
    TEST_ASSERT_EQUAL_size_t(118, file->header_len);
    TEST_ASSERT_EQUAL_size_t(4, file->shape[0]);
    TEST_ASSERT_EQUAL_size_t(4, file->shape[1]);
    TEST_ASSERT_EQUAL_STRING("<f4", file->dtype);

    npy_file_delete(file);
}

int main(void)
{
    UNITY_BEGIN();
    RUN_TEST(test_npy_fread_ok);
    RUN_TEST(test_npy_fread_parse_ok);
    return UNITY_END();
}
