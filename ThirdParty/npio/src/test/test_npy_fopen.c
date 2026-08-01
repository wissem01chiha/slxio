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

void test_npy_fopen_ok(void)
{
    char cwd[NPIO_BUF_SIZE];
    char npyfilepath[512];

    TEST_ASSERT_NOT_NULL_MESSAGE(getcwd(cwd, sizeof(cwd)), "getcwd() failed");
    snprintf(npyfilepath, sizeof(npyfilepath), "%s/bool_2x2.npy", cwd);

    npio_status_t status = NPIO_EUNKNOWN;
    npy_file_t   *file   = npy_fopen(npyfilepath, &status);

    TEST_ASSERT_NOT_NULL(file);
    TEST_ASSERT_EQUAL_INT(NPIO_OK, status);

    npy_file_delete(file);
}

int main(void)
{
    UNITY_BEGIN();
    RUN_TEST(test_npy_fopen_ok);
    return UNITY_END();
}
