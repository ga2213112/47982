/* 
 * File:   main.cpp
 * Author: Guillermo Acuna
 *
 * Created on November 25, 2013, 9:33 PM
 */

//Libraries
#include <iostream>
#include <fstream>
using namespace std;

//Global Constants: none

//Function Prototypes
void hiloNum(int [],int);
void totavgN(int [],int);

//Execution begins here
int main(int argc, char** argv) {

    //Declare Variables
    int amt=25;
    int input[amt],count=0;
    ifstream fileIn;
    
    //open file
    fileIn.open ("Data.dat");
    
    //fill array
    while (count<amt&&fileIn>>input[count]){
        count++;
    }
    
    //close file
    fileIn.close();
    
    //Find highest/lowest values and display results
    hiloNum(input,count);
    
    //Find total and average, display results
    totavgN(input,count);
    
    
    return 0;
}

void hiloNum(int array[],int num){
    //declare variables
    int high=0,low=array[0];
    
    //find highest and lowest value
    for(int count=0;count<num;count++){
        if(high<array[count])high=array[count];
        if(low>array[count])low=array[count];
    }
    
    //display results
    cout<<"The highest value in this file is "<<high<<endl;
    cout<<"The lowest value in this file is "<<low<<endl;
}

void totavgN(int array [],int num){
    //declare variables
    int total=0,avg;
    
    //calculate total and average
    for(int count=0;count<num;count++){
        total+=array[count];
    }
    
    avg=total*1.0/num;
    
    //display results
    cout<<"The total of this array is "<<total<<endl;
    cout<<"The average value of this array is "<<avg<<endl;
    
}