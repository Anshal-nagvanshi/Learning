#include <stdio.h>
#include <stdbool.h>

int main(){
    //&&=and ||=or !=not
    float temp = 100;
    // if (temp >= 0 && temp <= 30)
    // {
    //     printf("The weather is good");
    // }
    // else if (temp > 90)
    // {
    //     printf("the weather is catestropic");
    // }
    
    // else{
    //     printf("the weather is bad");
    // }
    if (temp>=25 || temp <= -10)
    {
        printf("The weather is bad");
    }
    else
    {
        printf("weather is good");
    }
    return 0;
}