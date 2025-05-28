#include <stdio.h>

int main(){
    char s[10];
    scanf("%s", s);
    // s[i] คือ ตัวอักษรตัวที่ i+1 ของ s
    // เพราะ การนับในคอมจะเริ่มด้วย 0
    if(s[2] == '1' && s[3] == '6') printf("yes");
    else printf("no");
}