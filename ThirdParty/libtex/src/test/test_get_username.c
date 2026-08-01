// SPDX-FileCopyrightText: 2026 Wissem Chiha <chihawissem08@gmail.com>
// SPDX-License-Identifier: BSD-2-Clause

#include "tex.h"
#include <stdio.h>
#include <stdlib.h>
#include <check.h>

START_TEST(test_tex_get_username)
{
  tex_error_t err      = TEX_ENONE;
  const char *username = tex_get_username(&err);
  ck_assert_int_eq(err, TEX_ENONE);
  ck_assert_ptr_nonnull(username);
  ck_assert_str_ne(username, "");
}
END_TEST

Suite *tex_suite(void)
{
  Suite *s       = suite_create("test-texutil");
  TCase *tc_core = tcase_create("core");
  tcase_add_test(tc_core, test_tex_get_username);
  suite_add_tcase(s, tc_core);

  return s;
}

int main(void)
{
  int      number_failed;
  Suite   *s  = tex_suite();
  SRunner *sr = srunner_create(s);
  srunner_run_all(sr, CK_NORMAL);
  number_failed = srunner_ntests_failed(sr);
  srunner_free(sr);
  return (number_failed == 0) ? 0 : 1;
}
