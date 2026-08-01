// SPDX-FileCopyrightText: 2026 Wissem Chiha <chihawissem08@gmail.com>
// SPDX-License-Identifier: BSD-2-Clause

#include "tex.h"
#include <stdio.h>
#include <check.h>
#include <stdlib.h>

START_TEST(test_content_create_delete)
{
  tex_error_t  err = TEX_ENONE;
  tex_content *c   = content_create(&err);
  ck_assert_ptr_nonnull(c);
  ck_assert_int_eq(err, TEX_ENONE);

  tex_error_t derr = content_delete(c);
  ck_assert_int_eq(derr, TEX_ENONE);
}
END_TEST

START_TEST(test_content_add)
{
  tex_error_t  err = TEX_ENONE;
  tex_content *c   = content_create(&err);
  ck_assert_int_eq(err, TEX_ENONE);

  tex_error_t aerr = content_add(c, "Hello World");
  ck_assert_int_eq(aerr, TEX_ENONE);
  ck_assert_str_eq(c->data, "Hello World");

  content_delete(c);
}
END_TEST

START_TEST(test_content_to_string)
{
  tex_error_t  err = TEX_ENONE;
  tex_content *c   = content_create(&err);
  content_add(c, "Lorem ipsum");

  char *s = content_to_string(c, &err);
  ck_assert_ptr_nonnull(s);
  ck_assert_str_eq(s, "Lorem ipsum");
  ck_assert_int_eq(err, TEX_ENONE);

  free(s);
  content_delete(c);
}
END_TEST

START_TEST(test_content_fs_add)
{
  tex_error_t  err = TEX_ENONE;
  tex_content *c   = content_create(&err);
  ck_assert_int_eq(err, TEX_ENONE);

  char *text = "hello, libtex world, this is a dummy text";
  FILE *f    = fopen("content_fs_add_test.txt", "w");
  ck_assert_ptr_nonnull(f);
  fputs(text, f);
  fclose(f);

  tex_error_t aerr = content_fs_add(c, "content_fs_add_test.txt");
  ck_assert_int_eq(aerr, TEX_ENONE);
  ck_assert_str_eq(c->data, "hello, libtex world, this is a dummy text");

  remove("content_fs_add_test.txt");
  content_delete(c);
}
END_TEST

START_TEST(test_content_format_string)
{
  const char *input  = "100%_value & cost$ #item {data} ~ ^ \\";
  const char *expect = "100\\%\\_value \\& cost\\$ \\#item \\{data\\} "
                       "\\textasciitilde \\textasciicircum \\textbackslash";

  const char *output = content_format_string(input);
  ck_assert_ptr_nonnull(output);
  ck_assert_str_eq(output, expect);
  printf("%s\n", output);
  free((void *) output);
}
END_TEST

START_TEST(test_content_write)
{
  tex_error_t  err = TEX_ENONE;
  tex_content *c   = content_create(&err);
  content_add(c, "UnitTest");

  char buffer[128];
  int  written = content_write(c, buffer, sizeof(buffer), &err);
  ck_assert_int_gt(written, 0);
  ck_assert_str_eq(buffer, "UnitTest\n");
  ck_assert_int_eq(err, TEX_ENONE);

  content_delete(c);
}
END_TEST

Suite *content_suite(void)
{
  Suite *s       = suite_create("tex_content");
  TCase *tc_core = tcase_create("Core");

  tcase_add_test(tc_core, test_content_create_delete);
  tcase_add_test(tc_core, test_content_add);
  tcase_add_test(tc_core, test_content_fs_add);
  tcase_add_test(tc_core, test_content_to_string);
  tcase_add_test(tc_core, test_content_format_string);
  tcase_add_test(tc_core, test_content_write);

  suite_add_tcase(s, tc_core);
  return s;
}

int main(void)
{
  int      number_failed;
  Suite   *s  = content_suite();
  SRunner *sr = srunner_create(s);

  srunner_run_all(sr, CK_NORMAL);
  number_failed = srunner_ntests_failed(sr);
  srunner_free(sr);

  return (number_failed == 0) ? 0 : 1;
}
