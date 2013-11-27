/* 
 * File:   main.cpp
 * Author: Guillermo Acuna
 *
 * Created on November 24, 2013, 9:35 PM
 */

//Libraries
#include <iostream>
#include <string>
using namespace std;

//Global Constants: none

//Function Prototypes
void avgtotR(float []);
void hlAmt(float []);

//
int main(int argc, char** argv) {
    
    //Declare variables
    float rainfal[12];//array holding rainfall for every month
    
    //Greetings and prompt for input
    cout<<"!!!!Germcorp Rainfall Analyzer!!!!\n";
    cout<<"Hello user, please enter the amount of rainfall(in inches) for every month.\n";
    
    for (short count=0;count<12;count++){
        cout<<"Rainfall for month "<<count+1<<": ";
        cin>>rainfal[count];
    }
    
    //Find desired information
    avgtotR(rainfal);
    hlAmt(rainfal);
    
    cout<<"Thank you user, and good bye.\n";

    return 0;
}

void avgtotR(float rain[]){
    //declare variables
    float totRain=0,avgRain;//total rainfall, and average rainfall
    
    for(short count=0;count<12;count++){//Calculates total rainfall of year
       totRain+=rain[count]; 
    }
    
    avgRain=totRain/12;//Calculates average rainfall of year
    
    //Display Results
    cout<<"The total rainfall this year was: "<<totRain<<" inches.\n";
    cout<<"The average rainfall this year was: "<<avgRain<<" inches.\n";
}

void hlAmt(float rain[]){
    //declare variables
    float lowRain=rain[0],highRain=0;//lowest rainfall, and highest rainfall
    string month[12]={"Jan","Feb","March","April","May","June","July"
                       ,"Aug","Sept","Oct","Nov","Dec"};
    
    //find the lowest rainfall
    for(short count1=0;count1<12;count1++){
       if(lowRain>rain[count1])lowRain=rain[count1]; 
    }
    
    //find the highest rainfall
    for(short count2=0;count2<12;count2++){
        if(highRain<rain[count2])highRain=rain[count2];
    }
    
    //display results
    for(short count3=0;count3<12;count3++){
        if (lowRain==rain[count3]){
            cout<<"The lowest rainfall was on "<<month[count3]<<" and it rained "
                <<lowRain<<" inches.\n";
            break;
        }
    }
    
    for(short count4=0;count4<12;count4++){
        if (highRain==rain[count4]){
            cout<<"The highest rainfall was on "<<month[count4]<<" and it rained "
                <<highRain<<" inches.\n";
            break;
        }
    }
}