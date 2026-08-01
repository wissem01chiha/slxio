#include "npio.h"
#include "unity.h"

void setUp(void)
{
}

void tearDown(void)
{
}

void test_npio_strerror_ok(void)
{
    static const npio_size_t bufsize = 10;
    char                     buf[10];
    int                      es = npio_strerror(NPIO_OK, buf, bufsize);
    UNITY_TEST_ASSERT_NOT_EQUAL_INT(-1, es, "", "");
    UNITY_TEST_ASSERT_EQUAL_STRING("Sucess", buf, "", "");
}

void test_npio_strerror_unkown(void)
{
    static const npio_size_t bufsize = 20;
    char                     buf[20];
    int                      es = npio_strerror(0x0064, buf, bufsize);
    UNITY_TEST_ASSERT_NOT_EQUAL_INT(-1, es, "", "");
    UNITY_TEST_ASSERT_EQUAL_STRING("Unknown error", buf, "", "");
}

void test_npio_strerror_buffer_overflow(void)
{
    static const npio_size_t bufsize = 20;
    char                     buf[20];
    int                      es = npio_strerror(NPIO_EBUF, buf, bufsize);
    UNITY_TEST_ASSERT_GREATER_THAN_INT(0, es, "", "");
    UNITY_TEST_ASSERT_EQUAL_STRING("Buffer overflow", buf, "", "");
}

int main(void)
{
    UNITY_BEGIN();
    RUN_TEST(test_npio_strerror_ok);
    RUN_TEST(test_npio_strerror_buffer_overflow);
    RUN_TEST(test_npio_strerror_unkown);
    return UNITY_END();
}
