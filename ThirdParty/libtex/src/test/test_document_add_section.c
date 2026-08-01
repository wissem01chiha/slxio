// SPDX-FileCopyrightText: 2026 Wissem Chiha <chihawissem08@gmail.com>
// SPDX-License-Identifier: BSD-2-Clause

#include "tex.h"
#include <stdio.h>
#include <check.h>

START_TEST(test_document_add_section)
{
  tex_error_t  err = TEX_ENONE;
  tex_section *sec = section_create(&err);
  ck_assert_ptr_nonnull(sec);
  ck_assert_int_eq(err, TEX_ENONE);

  sec->title = "section1";

  tex_document *doc = document_create(&err);
  ck_assert_ptr_nonnull(doc);
  ck_assert_ptr_null(doc->elements);
  ck_assert_int_eq(err, TEX_ENONE);

  tex_error_t erra = document_add_section(doc, sec);
  ck_assert_int_eq(erra, TEX_ENONE);

  tex_section *sec_2 = section_create(&err);
  sec_2->title       = "section2";

  tex_error_t err2 = document_add_section(doc, sec_2);
  ck_assert_int_eq(err2, TEX_ENONE);

  // check over elements, document now contain
  tex_element *eles = doc->elements;
  ck_assert_ptr_nonnull(eles);
  ck_assert_int_eq(eles->type, TEX_ELE_SECTION);

  tex_section *elesec = eles->data;
  ck_assert_ptr_nonnull(elesec);
  ck_assert_str_eq(elesec->title, "section1");

  tex_element *eles2 = eles->next;
  ck_assert_ptr_nonnull(eles2);
  ck_assert_int_eq(eles2->type, TEX_ELE_SECTION);

  tex_section *elesec2 = eles2->data;
  ck_assert_ptr_nonnull(elesec2);
  ck_assert_str_eq(elesec2->title, "section2");

  // document owns now the section , no need to free it using
  // section_delet(sec), it will cause heap corruption for double freeing
  // with errc  0xC0000374 on windows
  document_delete(doc);
}
END_TEST

Suite *tex_suite(void)
{
  Suite *s       = suite_create("test-document-section");
  TCase *tc_core = tcase_create("core");
  tcase_add_test(tc_core, test_document_add_section);
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