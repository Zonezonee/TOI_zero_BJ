#include <stdio.h>

int main(){
    char name[505];
    char surname[505];
    //input
    scanf("%s", name);
    scanf("%s", surname);
    // \n => ขึ้นบรรทัดใหม่
    printf("Hello %s %s\n", name, surname);
    printf("%c%c%c%c\n", name[0], name[1], surname[0], surname[1]);
}   