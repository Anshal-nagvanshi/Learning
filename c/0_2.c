#include <stdio.h>
#include <string.h>

int main(){
    // int lenght, breadth;

    // printf("Entre you lenght here:-\n");
    // scanf("%d", &lenght);

    // printf("Entre you breadth here:-\n");
    // scanf("%d", &breadth);

    // printf("The area of this rectangle is :- %d", lenght*breadth);

    // const int A = 201;
    // printf("%d",A);
    // int a = 5;
    // int b = 2;

    // float z = a / (float) b;

    // printf("%f", z);
    char name [25];

    printf("Entre your name:-");
    // scanf("%s", &name);
    fgets(name, 25, stdin);
    name[strlen(name)-1] = '\0';

    printf("\nhello %s, nice to meet you!", name);

    return 0;
}