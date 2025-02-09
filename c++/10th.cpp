#include<iostream>

using namespace std;

int main(){
    int day;
    cout<<"Enter the number of day(only till 7):-";
    cin>>day;
    if(day>0 && day<8){
        if(day==1){
            cout<<"sun";
        }
        else{
            if(day==2){
                cout<<"mon";
            }
            else{
                if(day==3){
                    cout<<"tue";
                }
                else{
                    if(day==4){
                        cout<<"wed";
                    }
                    else{
                        if(day==5){
                            cout<<"thu";
                        }
                        else{
                            if(day==6){
                                cout<<"fri";
                            }
                            else{
                                cout<<"sat";
                            }
                        }
                    }
                }
            }
        }
    }
    else{
        cout<<"invalid";
    }
    return 0;
}
