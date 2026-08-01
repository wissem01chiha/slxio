// SPDX-FileCopyrightText: 2026 Wissem Chiha <chihawissem08@gmail.com>
// SPDX-License-Identifier: BSD-2-Clause

#include "tex.h"
#include <stdio.h>
#include <check.h>

START_TEST(test_section_write)
{
  tex_error_t  err = TEX_ENONE;
  tex_section *sec = section_create(&err);
  ck_assert_ptr_nonnull(sec);
  ck_assert_int_eq(err, TEX_ENONE);

  sec->title = tex_strdup("section1");

  tex_content *cnt = content_create(&err);
  content_add(cnt, "Zorim eptrum falix nodera, quistal venor daplum.");
  section_add_content(sec, cnt);

  tex_section *subsec = section_create(&err);
  subsec->level       = Subsection;
  subsec->title       = tex_strdup("subsection1.1");

  tex_content *subcnt = content_create(&err);
  content_add(subcnt, "Fexor mitralo sunep, dravix coltur anem.");
  section_add_content(subsec, subcnt);

  sec->subsection = subsec;

  const size_t buffer_size = 1400;
  char         buffer[1400];

  int n = section_write(sec, buffer, buffer_size, &err);
  ck_assert_int_gt(n, 0);
  ck_assert_int_eq(err, TEX_ENONE);
  printf("%s\n", buffer);

  section_delete(sec);
}
END_TEST

Suite *tex_suite(void)
{
  Suite *s       = suite_create("test-document-section");
  TCase *tc_core = tcase_create("core");
  tcase_add_test(tc_core, test_section_write);
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