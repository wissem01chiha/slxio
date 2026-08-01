// SPDX-FileCopyrightText: 2026 Wissem Chiha <chihawissem08@gmail.com>
// SPDX-License-Identifier: BSD-2-Clause

#include "tex.h"
#include <stdio.h>
#include <check.h>

START_TEST(test_figure_write)
{
  tex_error_t err = TEX_ENONE;
#ifdef _WIN32
  tex_figure *fig = figure_fs_create(".\\test\\fixture\\map_01.png", &err);
#else
  tex_figure *fig = figure_fs_create("./test/fixture/map_01.png", &err);
#endif
  ck_assert_ptr_nonnull(fig);
  ck_assert_int_eq(err, TEX_ENONE);

  fig->caption = tex_strdup("illustration-figure");

  const size_t buffer_size = 1400;
  char         buffer[1400];

  int n = figure_write(fig, buffer, buffer_size, &err);
  ck_assert_int_gt(n, 0);
  ck_assert_int_eq(err, TEX_ENONE);
  printf("%s\n", buffer);

  figure_delete(fig);
}
END_TEST

Suite *tex_suite(void)
{
  Suite *s       = suite_create("test-figure");
  TCase *tc_core = tcase_create("core");
  tcase_add_test(tc_core, test_figure_write);
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