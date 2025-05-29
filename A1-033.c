#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int i = 1;
    int cnt = 0;
    while(i <= n){
        char c;
        scanf("%c", &c);
        if(c == 'A' || c == 'I' || c == 'U' || c == 'E' || c == 'O'){
            cnt = cnt + 1;
        }
        i++;
    }
    printf("%d", cnt);
}