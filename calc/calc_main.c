#include <stdio.h>
#include "calc.h"

int main(void){
    int a = 4, b = 5;
    
    printf("더하기 결과: %d\n", Sum(a, b));
    printf("뺴기 결과: %d\n", Sub(a, b));
    printf("곱하기 결과: %d\n", Mul(a, b));
    printf("나누기 결과: %d\n", Div(a, b));

    printf("반지름 r인 원의 넓이: %.3f\n", circ_area(a));
    printf("반지름 r인 원의 원주율: %.3f\n", circ_circ(a));

    return 0;
}