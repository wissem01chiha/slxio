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

START_TEST(test_list_write)
{
  tex_error_t err = TEX_ENONE;
  tex_list   *lst = list_create(&err);

  tex_list_item *itm = list_item_create(&err);

  // adding some text to the item, here we try to add twice
  // some texts to the same list item to check elment chnaing serlisation
  // logic works fine or not , in an other test case we will test the muliitem
  // serlisation
  tex_content *cont = content_create(&err);
  content_add(cont, "hey this is the first list item !");
  list_item_add_content(itm, cont);

  tex_content *cont2 = content_create(&err);
  content_add(cont2, "hey this is the second list item !");
  list_item_add_content(itm, cont2);

  ck_assert_int_eq(list_add_item(lst, itm), TEX_ENONE);

  const size_t buffer_size = 1800;
  char         buffer[1800];

  int n = list_write(lst, buffer, buffer_size, &err);
  ck_assert_int_gt(n, 0);
  ck_assert_int_eq(err, TEX_ENONE);
  printf("%s\n",
         "==============================================================");
  printf("%s\n", buffer);
  printf("%s\n",
         "==============================================================");

  ck_assert_str_eq(buffer,
                   "\\begin{itemize}\n\\item hey this is the first list item "
                   "!\nhey this is the second list item !\n\\end{itemize}\n");

  list_delete(lst);
}
END_TEST

Suite *list_suite(void)
{
  Suite *s       = suite_create("tex_content");
  TCase *tc_core = tcase_create("Core");

  tcase_add_test(tc_core, test_list_create_delete);
  tcase_add_test(tc_core, test_list_write);

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
