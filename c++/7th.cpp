#include <iostream>
using namespace std;

int main(){
float sal, pa, pd, netsal;
cout<<"Enter your basic salary:- ";
cin>>sal;
cout<<"Enter percentage of allowance:- ";
cin>>pa;
cout<<"Enter the percenage of deduction:-";
cin>>pd;
netsal=sal+sal*pa/100-sal*pd/100;
cout<<"Your net salary is:-"<<netsal;
return 0;
}
