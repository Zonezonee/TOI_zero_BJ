#include <stdio.h>

int main(){
    int a;
    char op;
    scanf("%d %c", &a, &op);
    int b = 0;
    //เอาหลักหน่วยของ a มาเป็นหลัก 10 ของ b
    b = b + a%10*10;
    //เอาหลักสิบของ a มาเป็นหลักหน่วย ของ b
    b = b + a/10;
    printf("%d %c %d = ", a, op, b);
    if(op == '+') printf("%d", a+b);
    else printf("%d", a*b);
}