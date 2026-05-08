#include <xlsxwriter.h>
#include <math.h>
#include <stdio.h>

int main() {
    // Create workbook
    lxw_workbook *workbook = workbook_new("/tmp/test.xlsx");
    if (!workbook) return 1;

    // Add worksheet
    lxw_worksheet *worksheet = workbook_add_worksheet(workbook, NULL);
    if (!worksheet) {
        workbook_close(workbook);
        return 1;
    }

    // Add chart
    lxw_chart *chart = workbook_add_chart(workbook, LXW_CHART_LINE);
    if (!chart) {
        workbook_close(workbook);
        return 1;
    }

    // Add data series
    chart_add_series(chart, NULL, "=Sheet1!$A$1:$A$5");

    // Insert chart with infinite x_scale - triggers infinite loop
    lxw_chart_options chart_opts = {0};
    chart_opts.x_scale = INFINITY;  // This causes the bug
    chart_opts.y_scale = 1.0;

    worksheet_insert_chart_opt(worksheet, 0, 0, chart, &chart_opts);

    // This call hangs indefinitely
    printf("Calling workbook_close...\n");
    workbook_close(workbook);  // Program hangs here
    printf("Should never reach here\n");

    return 0;
}

