#include <stdio.h>
int main(){
    int money;
    scanf("%d",&money);
    int c10,c5,c2,c1;
    c10 = money/10;
    money = money - (c10*10);
    c5 = money/5;
    money = money - (c5*5);
    c2 = money/2;
    money = money - (c2*2);
    c1 = money;
    printf("10 = %d\n", c10);
    printf("5 = %d\n", c5);
    printf("2 = %d\n", c2);
    printf("1 = %d\n", c1);

}