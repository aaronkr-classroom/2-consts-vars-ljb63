#include <stdio.h>
#include <math.h>    //M_PI 상수

#define _USE_MATH_DEFINES

int Sum(int a, int b) {return a + b;}
int Sub(int a, int b) {return a - b;}
int Mul(int a, int b) {return a * b;}
int Div(int a, int b) {  //b는 0이면 안됨
    if ( b == 0 ){
        printf("Error: Divide by 0\n");
        return 0;
    }
    return a / b;
}

double circ_area(double r){
    return M_PI * r * r;
}  //넓이
double circ_circ(double r){
    return 2 * M_PI * r;
}  //둘레