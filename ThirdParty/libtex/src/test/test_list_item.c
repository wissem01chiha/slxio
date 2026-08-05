// SPDX-FileCopyrightText: 2026 Wissem Chiha <chihawissem08@gmail.com>
// SPDX-License-Identifier: BSD-2-Clause

#include "tex.h"
#include <stdio.h>
#include <check.h>
#include <stdlib.h>

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

START_TEST(test_tex_list_item_write)
{
  tex_error_t    err = TEX_ENONE;
  tex_list_item *itm = list_item_create(&err);

  // adding some text to the item
  tex_content *cont = content_create(&err);
  ck_assert_int_eq(content_add(cont, "hey this is the first list item !"),
                   TEX_ENONE);
  ck_assert_int_eq(list_item_add_content(itm, cont), TEX_ENONE);

  const size_t buffer_size = 1400;
  char         buffer[1400];

  int n = list_item_write(itm, buffer, buffer_size, &err);
  ck_assert_int_gt(n, 0);
  ck_assert_int_eq(err, TEX_ENONE);

  printf("%s\n", buffer);
  ck_assert_str_eq(buffer, "\\item hey this is the first list item !\n");

  list_item_delete(itm);
}
END_TEST

START_TEST(test_list_item_add_content)
{
  tex_error_t    err = TEX_ENONE;
  tex_list_item *itm = list_item_create(&err);
  ck_assert_int_eq(err, TEX_ENONE);

  tex_content *cnt = content_create(&err);
  ck_assert_int_eq(err, TEX_ENONE);

  // add some text to the cnt object
  ck_assert_int_eq(content_add(cnt, "this is our first list item fill text "),
                   TEX_ENONE);

  ck_assert_int_eq(list_item_add_content(itm, cnt), TEX_ENONE);

  // elemets should be not null now
  ck_assert_ptr_nonnull(itm->elements);
  tex_element *ele = itm->elements;
  ck_assert_int_eq(ele->type, TEX_ELE_CONTENT);

  tex_content *ct = ele->data;
  ck_assert_str_eq(ct->data, "this is our first list item fill text ");

  // try appending an other content
  tex_content *cnt2 = content_create(&err);
  ck_assert_int_eq(content_add(cnt2, "this is our second list item fill text "),
                   TEX_ENONE);

  ck_assert_int_eq(list_item_add_content(itm, cnt2), TEX_ENONE);

  tex_element *ele2  = itm->elements;
  tex_element *ele2c = ele2->next;
  ck_assert_ptr_nonnull(ele2c);
  ck_assert_int_eq(ele2c->type, TEX_ELE_CONTENT);

  tex_content *ct2 = ele2c->data;
  ck_assert_str_eq(ct2->data, "this is our second list item fill text ");

  ck_assert_int_eq(list_item_delete(itm), TEX_ENONE);
}
END_TEST

Suite *list_suite(void)
{
  Suite *s       = suite_create("tex_content");
  TCase *tc_core = tcase_create("Core");

  tcase_add_test(tc_core, test_list_item_create_delete);
  tcase_add_test(tc_core, test_list_item_add_content);
  tcase_add_test(tc_core, test_tex_list_item_write);

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
