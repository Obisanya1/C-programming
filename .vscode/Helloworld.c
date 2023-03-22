#include <stdio.h>
#include <stdbool.h>

int main() {

    bool e = true; //1 byte(true or false) %d-specifier

    // This is a comment
    /*
    What are you doing here sir?
    */
    printf("Daniel is a boy\n");
    printf("He's really good\n");
    printf("\'I like pizza\' - Abraham Lincoln\n");

int x; //declaration
x = 123; //initialization
int y = 321; //declaration and initialization
int p = 540;

int age = 21; //integer %d
float gpa = 2.05; //floating point number %f
char grade = 'C'; //single character %c
char name[] = "Bro"; //array of characters %s
unsigned char g = 255; //1 byte (0 to +255) %d or %c
float item1 = 5.75;
float item2 = 10.00;
float item3 = 100.99;
const float PI = 3.14159;
 int a = 5;
 int b = 2;

float z = a / (float) b;

printf("%f\n",z);
printf("Item 1: $%.2f\n",item1);
printf("Item 2: $%.2f\n", item2);
printf("Item 3: $%.2f\n", item3);
printf("His name is %d,\n", p);

printf("Hello %s", name);
printf("You are %d years old\n",age);
printf("Your average grade is %c\n",grade);
printf("Your gpa is %f\n", grade);

    return 0;
}


