#include <stdio.h>
#include "calc.h"

int main() {
   
    double principal = 1000000.0; 
    double rate = 0.10;           
    double n_compounds = 12.0;    
    double time_years = 40.0;    

    double future_value;

    future_value = calculate_future_value(principal, rate, n_compounds, time_years);

    printf("초기 투자금 1,000,000원을 연이율 10%%, 월 복리로 40년간 투자했을 때,\n");
    printf("최종 금액은 약 %.0f원이 됩니다.\n", future_value);

    return 0; 
}