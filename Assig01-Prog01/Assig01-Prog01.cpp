//Huan Chen Assignment01-Program01
#include<iostream>
#include<string>
using namespace std;

int i, highest, lowest;
int numbers[10];
void getInfo(){
    cout<<"This program will ask you to enter ten values, then it will determine the largest and smallest of the values you entered. "<<endl;
for(i=1; i<=10; i++){
    cout<<"Enter an integer value: ";
    cin>>numbers[i];
    
}
}

int main(){
    getInfo();
    highest=numbers[1];
    for(i=1; i<=10; i++){
        if(numbers[i]>highest)
            highest=numbers[i];
    }
    
    lowest=numbers[1];
    for(i=1; i<=10; i++){
        if(numbers[i]<lowest)
            lowest=numbers[i];
    }
    
    cout<<"The highest value entered is: "<<highest<<endl;
    cout<<"The lowest value entered is: "<<lowest<<endl;
}

//Program #1
//Write a program that lets the user enter 10 values into an array. The program should then display the largest and smallest values stored in the array.
//• Values should be stored in an array
//• Do not find the highest and lowest as the user enters data, instead find the highest and
//lowest values after all 10 values are entered by the user.
//• Consider using a function to get the input from the user (to make your main function
//easier to read) Sample Output:
//This program will ask you to
//enter ten values, then it will determine the largest and smallest of the values you entered.
//Enter an integer value: 1
//Enter an integer value: 2
//Enter an integer value: 3
//Enter an integer value: 4
//Enter an integer value: 5
//Enter an integer value: 6
//Enter an integer value: 7
//Enter an integer value: 8
//Enter an integer value: 9
//Enter an integer value: 10
//The largest value entered is 10 The smallest value entered is 1 Press any key to continue . . .
