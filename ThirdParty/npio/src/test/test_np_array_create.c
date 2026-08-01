#include "npio.h"
#include "unity.h"

void setUp(void)
{
}

void tearDown(void)
{
}

void test_np_array_create_valid_array(void)
{
    // 3D array with shape (10,20,30)
    npio_size_t dims_arr[]    = {10, 20, 30};
    npio_size_t ndim          = 3;
    npio_size_t word_size     = 1;
    npio_bool_t fortran_order = false;

    np_array_t *arr = np_array_create(dims_arr, ndim, word_size, fortran_order);

    UNITY_TEST_ASSERT_NOT_NULL(arr, __LINE__, "array should not be NULL for valid input");
    UNITY_TEST_ASSERT_EQUAL_UINT32(10, arr->shape.shape[0], __LINE__, "first dimension mismatch");
    UNITY_TEST_ASSERT_EQUAL_UINT32(20, arr->shape.shape[1], __LINE__, "second dimension mismatch");
    UNITY_TEST_ASSERT_EQUAL_UINT32(30, arr->shape.shape[2], __LINE__, "third dimension mismatch");
    UNITY_TEST_ASSERT_EQUAL_UINT32(word_size, arr->word_size, __LINE__, "word size mismatch");
    UNITY_TEST_ASSERT_EQUAL_INT(false, arr->fortran_order, __LINE__, "fortran order mismatch");

    np_array_delete(arr);
}

void test_np_array_create_null_dims(void)
{
    np_array_t *arr = np_array_create(NULL, 2, 1, false);
    UNITY_TEST_ASSERT_NULL(arr, __LINE__, "array should be NULL when dims is NULL");

    np_array_delete(arr);
}

void test_np_array_create_zero_ndim(void)
{
    npio_size_t dims_arr[] = {10, 20};
    np_array_t *arr        = np_array_create(dims_arr, 0, 1, false);
    UNITY_TEST_ASSERT_NULL(arr, __LINE__, "array should be NULL when ndim is 0");

    np_array_delete(arr);
}

void test_np_array_create_invalid_dimension(void)
{
    npio_size_t dims_arr[] = {10, 0};
    np_array_t *arr        = np_array_create(dims_arr, 2, 1, false);
    UNITY_TEST_ASSERT_NULL(arr, __LINE__, "array should be NULL when any dimension is 0");

    np_array_delete(arr);
}

void test_np_array_delete_null(void)
{
    np_array_delete(NULL);
    UNITY_TEST_ASSERT_EQUAL_INT(1, 1, __LINE__, "destroying NULL should be safe");
}

int main(void)
{
    UNITY_BEGIN();
    RUN_TEST(test_np_array_create_valid_array);
    RUN_TEST(test_np_array_create_null_dims);
    RUN_TEST(test_np_array_create_zero_ndim);
    RUN_TEST(test_np_array_create_invalid_dimension);
    RUN_TEST(test_np_array_delete_null);
    return UNITY_END();
}
