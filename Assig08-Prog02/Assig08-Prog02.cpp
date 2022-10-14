//Huan Chen Assignment08-Program02
#include<iostream>
#include<iomanip>
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
