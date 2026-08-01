// SPDX-FileCopyrightText: 2026 Wissem Chiha <chihawissem08@gmail.com>
// SPDX-License-Identifier: BSD-2-Clause

#include "tex.h"
#include <stdio.h>
#include <check.h>

START_TEST(test_figure_create)
{
  tex_error_t err = TEX_ENONE;
  tex_figure *fig = figure_create(&err);
  ck_assert_ptr_nonnull(fig);
  ck_assert_int_eq(err, TEX_ENONE);
  ck_assert_int_eq(figure_delete(fig), TEX_ENONE);
}
END_TEST

START_TEST(test_figure_fs_create)
{
  tex_error_t err = TEX_ENONE;
#ifdef _WIN32
  tex_figure *fig = figure_fs_create(".\\test\\fixture\\map_01.png", &err);
#else
  tex_figure *fig = figure_fs_create("./test/fixture/map_01.png", &err);
#endif
  ck_assert_ptr_nonnull(fig);
  ck_assert_int_eq(err, TEX_ENONE);
#ifdef _WIN32
  ck_assert_str_eq(fig->image_path, ".\\test\\fixture\\map_01.png");
#else
  ck_assert_str_eq(fig->image_path, "./test/fixture/map_01.png");
#endif
  ck_assert_int_eq(fig->width, 1024);
  ck_assert_int_eq(fig->height, 1024);
  ck_assert_str_eq(fig->label, "map_01.png");
  figure_delete(fig);
}
END_TEST

Suite *tex_suite(void)
{
  Suite *s       = suite_create("test-figure");
  TCase *tc_core = tcase_create("core");
  tcase_add_test(tc_core, test_figure_create);
  tcase_add_test(tc_core, test_figure_fs_create);
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