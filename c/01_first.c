#include<stdio.h>

int main(){
    // comment
    /*mullti
    line
    comment*/
    // printf("My name is anshal\n"); // \n=newline \t=tab space
    // printf("I study in iilm university\n");
    // printf("\"i like pizza\", - anshal\n");
    // printf("\\i like pizza\\, - anshal");
    int x = 24;
    int age = 20;
    float gpa = 2.05; // float only store upto 6-7 digit if you want to store more use "double" and its print code is %lf an to store more you have  to write let you have 15 digit %0.15lf
    char grade = 'C';
    double pie = 3.2156472535;
    char name[] = "anshal";
    printf("number %d\n", x); //for int value use %d
    printf("I am %d years old\n", age);
    printf("%f\n", gpa); // for float value use %f
    printf("My grade is %c\n", grade); // for charactor use %c
    printf("My name is %s\n", name); //for string or char [] use %s
    printf("%0.15lf", pie);
    return 0;
}
