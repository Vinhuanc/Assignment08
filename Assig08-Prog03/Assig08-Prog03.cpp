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

//Program #3
//Write a program that asks the user for the hours worked and pay rate for a predefined set of employee id numbers. After collecting this information, the program will calculate the wages for each employee and display the results in a table format. Your program will utilize 4 parallel arrays in order to achieve its goals:
//• empId: an array of long integers to hold the employee’s id number. Will be initialized with { 5658845, 4520125, 7895122, 8451277, 1302850, 7580489 }
//• hours: an array of integers to hold the number of hours worked by each employee
//• payRate: an array of real numbers to hold the pay rate for each employee
//• wages: an array of real numbers to hold the calculated wages for each employee
//Sample Outputs:
//Enter the requested information for each employee Employee #5658845
//Hours worked: 24
//Pay Rate: $12.54
//Employee #4520125
//Hours worked: 40
//Pay Rate: $13.7
//Employee #7895122
//Hours worked: 37
//Pay Rate: $16.84
//Employee #8451277
//Hours worked: 40
//Pay Rate: $17.50
//Employee #1302850
//Hours worked: 35
//Pay Rate: $22.45
//Employee #7580489
//Hours worked: 37
//Pay Rate: $17.32 ---------------------------------
//Employee Wages
//---------------------------------
//Employee #5658845 $ 300.96
//Employee #4520125 $ 548.00
//Employee #7895122 $ 623.08
//Employee #8451277 $ 700.00
//Employee #1302850 $ 785.75
//Employee #7580489 $ 640.84
//Press any key to continue . . .
