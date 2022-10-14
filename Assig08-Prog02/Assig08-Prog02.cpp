//Huan Chen Assignment08-Program02
#include<iostream>
#include<iomanip>
#include<string>
using namespace std;
int i, size;
double numbers[12];
double total, avg, highest, lowest;

void getNumbers(){
    for(i=0; i<12; i++){
        cout<<"Enter the rainfall (in inches) for month #" << (i+1) <<": ";
        cin>>numbers[i];
        if(numbers[i]<0){
            cout<<"Error, inches of snowfall cannot be less than 0, Re-enter:"<<endl;
            cin>>numbers[i];
        }
    }
}

double getTotal(double array[], int size){
    for(i=0; i<12; i++){
    total += numbers[i];
}
    return total;
}

double getAvg(double array[], int size){
    for(i=0; i<12; i++){
        avg = total/size;
}
    return avg;
}

double getHighest(double array[], int size){
    highest = numbers[0];
    for(i=0; i<12; i++){
        if(numbers[i]>highest)
     highest=numbers[i];
    }
    return highest;
}

double getLowest(double array[], int size){
    lowest = numbers[0];
    for(i=0; i<12; i++){
        if(numbers[i]<lowest)
            lowest=numbers[i];
}
    return lowest;
}

int main(){
    getNumbers();
  cout<<"The total of the rainfall for the year is: "<< fixed<<setprecision(2)<< getTotal(numbers,12) <<"inches."<<endl;
    cout<<"The average of the rainfall for the year is: "<< fixed<<setprecision(2)<<getAvg(numbers, 12)<<"inches."<<endl;
    cout<<"The highest amount of rainfall was "<<fixed<<setprecision(2)<< getHighest(numbers, 12)<<" inches."<<endl;
    cout<<"The lowest amount of rainfall was "<<fixed<<setprecision(2)<< getLowest(numbers, 12)<<" inches."<<endl;
}

//Program #2
//Write a program that lets the user enter the total rainfall for each of 12 months into an array of doubles. The program should calculate and display the total rainfall for the year, the average monthly rainfall, and the months with the highest and lowest amounts. Do not accept negative numbers for monthly rainfall figures.
//• Use an array of doubles
//• Display values to 2 decimal places
//• Input validation not required (but make sure you accept doubles)
//• Do not do calculations for the ending analysis until all of the data has been entered.
//• Use functions to perform the various analysis on the array
//o Pass the array, and its size as parameters
//o Return the calculated result
//o This will help make your program modular, and easier to read.
//o Use the following names: getTotal, getAverage, getLargest, getSmallest
//Sample Output:
//Enter the rainfall (in inches) for month #1: 1
//Enter the rainfall (in inches) for month #2: 2
//Enter the rainfall (in inches) for month #3: 3
//Enter the rainfall (in inches) for month #4: 1
//Enter the rainfall (in inches) for month #5: 2
//Enter the rainfall (in inches) for month #6: 3
//Enter the rainfall (in inches) for month #7: 1
//Enter the rainfall (in inches) for month #8: 2
//Enter the rainfall (in inches) for month #9: 3
//Enter the rainfall (in inches) for month #10: 1
//Enter the rainfall (in inches) for month #11: 2
//Enter the rainfall (in inches) for month #12: 3
//The total rainfall for the year is 24.00 inches.
//The average rainfall for the year is 2.00 inches.
//The largest amount of rainfall was 3.00 inches.
//The smallest amount of rainfall was 1.00 inches.
//Press any key to continue . . .
