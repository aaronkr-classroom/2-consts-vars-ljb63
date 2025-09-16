#include <stdio.h>

int main(void){
    int won;
    won = 10000000;
    printf("은행에 %d원이 있습니다. \n", won);

    //쉼표 추가
    const char* easy_won = "10,000,000";
    printf("은행에 %s원이 있습니다.\n", easy_won);

    printf("+500,000원 수금\n");
    easy_won = "10,500,000";
    printf("수금해서 %s원이 있습니다.\n", easy_won);

    //bitcoin
    float bc = 12000000.123456789;
    printf("bitcoin 지갑: %.5fbitcoin\n", bc);

    bc = bc + 0.34567;
    printf("현재 bitcoin 지갑: %.5fbitcoin\n", bc);

    return 0;
}