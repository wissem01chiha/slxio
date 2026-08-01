// SPDX-FileCopyrightText: 2026 Wissem Chiha <chihawissem08@gmail.com>
// SPDX-License-Identifier: BSD-2-Clause

#include "tex.h"
#include <stdio.h>
#include <check.h>
#include <stdlib.h>

START_TEST(test_list_create_delete)
{
  tex_error_t err = TEX_ENONE;
  tex_list   *lst = list_create(&err);
  ck_assert_ptr_nonnull(lst);
  ck_assert_int_eq(err, TEX_ENONE);

  ck_assert_int_eq(lst->type, Itemize);
  ck_assert_ptr_null(lst->items);
  ck_assert_ptr_null(lst->next);

  tex_error_t lerr = list_delete(lst);
  ck_assert_int_eq(lerr, TEX_ENONE);
}
END_TEST

START_TEST(test_list_item_create_delete)
{
  tex_error_t    err = TEX_ENONE;
  tex_list_item *itm = list_item_create(&err);
  ck_assert_ptr_nonnull(itm);
  ck_assert_int_eq(err, TEX_ENONE);
  ck_assert_ptr_null(itm->elements);
  ck_assert_ptr_null(itm->label);
  ck_assert_ptr_null(itm->next);
  tex_error_t lerr = list_item_delete(itm);
  ck_assert_int_eq(lerr, TEX_ENONE);
}
END_TEST

Suite *list_suite(void)
{
  Suite *s       = suite_create("tex_content");
  TCase *tc_core = tcase_create("Core");

  tcase_add_test(tc_core, test_list_create_delete);
  tcase_add_test(tc_core, test_list_item_create_delete);

  suite_add_tcase(s, tc_core);
  return s;
}

int main(void)
{
  int      number_failed;
  Suite   *s  = list_suite();
  SRunner *sr = srunner_create(s);

  srunner_run_all(sr, CK_NORMAL);
  number_failed = srunner_ntests_failed(sr);
  srunner_free(sr);

  return (number_failed == 0) ? 0 : 1;
}
