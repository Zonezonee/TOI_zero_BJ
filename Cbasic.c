#include <stdio.h>

int main() {
    // Basic Data Types
    int age = 20;            // Integer type
    //int can only store number between around -2*10^9 and 2*10^9
    //if the number is bigger or smaller than that you should use long long instead
    long long bigNum = 1234567890123LL; // Long long integer
    char grade = 'A';        // Character type
    float height = 5.9;     // Floating point type (single precision)
    double weight = 70.5;    // Double precision floating point
    
    //string
    char string[505] = "abc";
    printf("string: %s\n",string);
    scanf("%s\n", string);
    printf("%c\n", string[0]); // print a

    // Printing variables
    printf("TESTING\n");

    // Printing variables
    printf("Age: %d\n", age);
    printf("Grade: %c\n", grade);
    printf("Height: %f\n", height);
    printf("Weight: %lf\n", weight);
    printf("Big Number: %lld\n", bigNum);
    
    // Operators
    int a = 10, b = 3;
    printf("a + b = %d\n", a + b); // Addition
    printf("a - b = %d\n", a - b); // Subtraction
    printf("a * b = %d\n", a * b); // Multiplication
    printf("a / b = %d\n", a / b); // Division (integer)
    printf("a %% b = %d\n", a % b); // Modulus (remainder)
    
    // Taking input from user
    int userNum;
    printf("Enter a number: ");
    scanf("%d", &userNum); // Read integer from user
    printf("You entered: %d\n", userNum);

    // If-Else Statement
    /*
    if(เงื่อนไข){
        โค้ดที่จะทำเมื่อเงื่อนไขเป็นจริง
    } else{
        โค้ดที่จะทำเมื่อเงื่อนไขเป็นเท็จ
    }
    */
    if (age >= 18) {
        printf("You are an adult.\n");
    } else {
        printf("You are not an adult.\n");
    }

    // While Loop: Print numbers 1 to 5
    /*
    while(เงื่อนไข){
        โค้ดที่ทำเมื่อเงื่อนไขเป็นจริง
    }
    เมื่อทำเสร็จจะกลับไปเช็คเงื่อนไขอีกครั้ง จนกว่าเงื่อไขจะเป็นเท้จ
    */
    int i = 1;
    while (i <= 5) {
        printf("%d ", i);
        i++;
    }

    // For Loop: Print numbers 1 to 5
    for (int i = 1; i <= 5; i++) {
        printf("%d ", i);
    }
    printf("\n");

    printf("\n");
}