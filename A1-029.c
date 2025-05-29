#include <stdio.h>

int main(){
    char a, b, c;
    scanf("%c%c%c", &a, &b, &c);
    int cnt = 0;
    if(a == 'a' || a == 'e' || a == 'i' || a == 'o' || a == 'u'){
        cnt = cnt + 1;
    }
    if(b == 'a' || b == 'e' || b == 'i' || b == 'o' || b == 'u'){
        cnt = cnt + 1;
    }
    if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'){
        cnt = cnt + 1;
    }
    printf("%d", cnt);
}