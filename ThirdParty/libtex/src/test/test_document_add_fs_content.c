// SPDX-FileCopyrightText: 2026 Wissem Chiha <chihawissem08@gmail.com>
// SPDX-License-Identifier: BSD-2-Clause

#include "tex.h"
#include <stdio.h>
#include <check.h>

START_TEST(test_document_add_fs_content)
{
  tex_error_t   err = TEX_ENONE;
  tex_document *doc = document_create(&err);

  ck_assert_ptr_nonnull(doc);
  ck_assert_int_eq(err, TEX_ENONE);

  const char *filename = "test_document_add_fs_content.txt";
  const char *expected = "hello, libtex world";

  FILE *f = fopen(filename, "w");
  ck_assert_ptr_nonnull(f);
  fputs(expected, f);
  fclose(f);

  tex_error_t res = document_add_fs_content(doc, filename);

  ck_assert_int_eq(res, TEX_ENONE);

  tex_element *eles = doc->elements;
  ck_assert_ptr_nonnull(eles);
  ck_assert_int_eq(eles->type, TEX_ELE_CONTENT);
  ck_assert_ptr_nonnull(eles->data);
  tex_content *cnt = eles->data;
  ck_assert_str_eq(cnt->data, "hello, libtex world");

  remove(filename);
  ck_assert_int_eq(document_delete(doc), TEX_ENONE);
}
END_TEST

START_TEST(test_document_add_fs_content_write)
{
  tex_error_t   err = TEX_ENONE;
  tex_document *doc = document_create(&err);

  ck_assert_ptr_nonnull(doc);
  ck_assert_int_eq(err, TEX_ENONE);

  const char *filename = "test_document_add_fs_content.txt";
  FILE       *f        = fopen(filename, "w");
  ck_assert_ptr_nonnull(f);
  fputs("hello, libtex world", f);
  fclose(f);

  tex_error_t res = document_add_fs_content(doc, filename);
  ck_assert_int_eq(res, TEX_ENONE);

  document_set_title(doc, "test-document-title");

  const char *write_filename = "test_document_add_fs_content_write.tex";
  int         write_err      = document_fs_write(doc, write_filename);

  ck_assert_int_eq(write_err, TEX_ENONE);

  FILE *wf = fopen(write_filename, "r");
  ck_assert_ptr_nonnull(f);

  if (wf != NULL)
  {
    fclose(wf);
  }

  document_delete(doc);
}
END_TEST

Suite *tex_suite(void)
{
  Suite *s       = suite_create("test-document");
  TCase *tc_core = tcase_create("core");
  tcase_add_test(tc_core, test_document_add_fs_content);
  tcase_add_test(tc_core, test_document_add_fs_content_write);
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