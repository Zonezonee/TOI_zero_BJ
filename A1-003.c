#include <stdio.h>

int main(){
    int a; //a = 10
    int b; //b = 10
    int c; //c = 8
    scanf("%d %d %d", &a, &b, &c);
    // && เครื่องหมาย และ , || เครื่องหมาย หรือ
    if(a >= b && a >= c){
        printf("%d", a);
    }else{
        if(b >= a && b >= c){
            printf("%d", b);
        }else{
            printf("%d", c);
        }
    }

}