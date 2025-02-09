#include <iostream>
using namespace std;

int main(){
    int x,y;
    cout<<"Enter the two number :- ";
    cin>>x>>y;
    if (x<y)
    {
       cout<<x<<" is less than "<<y;
    }
    else if (x==y)
    {
        cout<<x<<" is equal to "<<y;
    }
    else
    {
        cout<<y<<" is less than "<<x;
    }
    return 0;
}
