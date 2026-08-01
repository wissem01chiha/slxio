// SPDX-FileCopyrightText: 2026 Wissem Chiha <chihawissem08@gmail.com>
// SPDX-License-Identifier: BSD-2-Clause

#include "tex.h"
#include <stdio.h>
#include <check.h>

START_TEST(test_section_create)
{
  tex_error_t  err = TEX_ENONE;
  tex_section *sec = section_create(&err);

  ck_assert_ptr_nonnull(sec);
  ck_assert_int_eq(err, TEX_ENONE);

  section_delete(sec);
}
END_TEST

START_TEST(test_section_add_content)
{
  tex_error_t  err = TEX_ENONE;
  tex_section *sec = section_create(&err);
  ck_assert_ptr_nonnull(sec);

  tex_content *cnt = content_create(&err);
  ck_assert_int_eq(err, TEX_ENONE);
  ck_assert_int_eq(content_add(cnt, "Lorem ipsum dolor sit amet"), TEX_ENONE);

  tex_error_t errac = section_add_content(sec, cnt);
  ck_assert_int_eq(errac, TEX_ENONE);

  tex_content *scnt = content_create(&err);
  ck_assert_int_eq(err, TEX_ENONE);
  ck_assert_int_eq(content_add(scnt, ", consectetur adipiscing elit."),
                   TEX_ENONE);

  tex_error_t erracs = section_add_content(sec, scnt);
  ck_assert_int_eq(erracs, TEX_ENONE);

  tex_content *allcnt = section_get_content(sec);
  char        *str    = content_to_string(allcnt, &err);
  ck_assert_int_eq(err, TEX_ENONE);

  ck_assert_str_eq(str,
                   "Lorem ipsum dolor sit amet, consectetur adipiscing elit.");

  section_delete(sec);
}
END_TEST

Suite *tex_suite(void)
{
  Suite *s       = suite_create("test-section");
  TCase *tc_core = tcase_create("core");
  tcase_add_test(tc_core, test_section_create);
  tcase_add_test(tc_core, test_section_add_content);
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