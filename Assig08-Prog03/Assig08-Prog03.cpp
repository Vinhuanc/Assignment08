//Huan Chen Assignment08-Program03
#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
long empId[6]={ 5658845, 4520125, 7895122, 8451277, 1302850, 7580489 };
int hours[6], i;
double payRate[6], wages[6];

void getNumbers(){
    cout<<"Enter the requested information for each employee."<<endl;
    for(int i=0; i<6; i++){
        cout<<"Employee #"<<empId[i]<<endl;
        cout<<"Hours worked: ";
        cin>>hours[i];
        cout<<"Pay rate: $";
        cin>>payRate[i];
        wages[i] = hours[i] * payRate[i];
    }
}

int main(){
    getNumbers();
    cout<<"--------------------"<<endl;
    cout<<"Employee Wages"<<endl;
    cout<<"--------------------"<<endl;
    for(int i=0; i<6; i++){
        cout<<"Employee #"<<empId[i]<<"\t"<<"$ "<<fixed<<setprecision(2)<<wages[i]<<endl;
  
    }
}
