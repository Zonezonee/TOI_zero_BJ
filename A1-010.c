#include <stdio.h>

int main(){
    int a;
    char c;
    scanf("%d %c", &a, &c);
    if(a < 18 || c == 's' || c == 'S') printf("20\n");
    else printf("50\n");
}