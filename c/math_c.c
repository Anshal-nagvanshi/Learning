#include <stdio.h>
#include <math.h>

int main(){
    double A = sqrt(9); //gives ssquare root 
    double B = pow(2, 4); //giver power and its format is 2 to the power 4
    int C = round(3.122); //round off to less number 
    int D = ceil(3.14) ; //round off to upper number
    int F = floor(3.99); //only write the whole number
    double G = fabs(-100); //make it a absolute number like -100 is converted to 100
    double H = log(3); // take the log
    double I = sin (45); // sin value
    double J = cos (45); // cos value 
    double K = tan (45); // tan value
    printf("%lf \n", A);
    printf("%lf \n", B);
    printf("%d \n", C);
    printf("%d \n", D);
    printf("%d \n", F);
    printf("%lf \n", G);
    printf("%lf \n", H);
    printf("%lf \n", I);
    printf("%lf \n", J);
    printf("%lf \n", K);
    return 0;
}