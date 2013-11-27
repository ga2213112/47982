/* 
 * File:   main.cpp
 * Author: Guillermo Acuna
 *
 * Created on November 25, 2013, 12:10 AM
 */

//Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//Global Constants: none

//Function Prototypes
void avgEat(int [][7]);
void lohiEat(int [][7]);

//Execution begins here
int main(int argc, char** argv) {
    
    //Declare Variables
    int monkDat[3][7];//user input, pound of food eaten for three monkeys in one week
    
    //prompt for input
    cout<<"Hello user.\n";
    cout<<"Input pounds of food eaten by monkey every day of the week.\n";
    
    for (unsigned short count1=0;count1<3;count1++){//handles the rows
       for (unsigned short count2=0;count2<7;count2++){//handles the column
           cout<<"Monkey "<<count1+1<<", Day "<<count2+1<<": ";
           cin>>monkDat[count1][count2];
       } 
    }
    
    //Calculate and display important data
    avgEat(monkDat);
    lohiEat(monkDat);
    
    cout<<"Thank you user, and good bye.\n";

    return 0;
}

void avgEat(int data[][7]){
    //declare variables
    float avgFood;//average pounds of food eaten by all monkeys
    unsigned int totFood=0, num=0;//total pounds of food eaten, and counter
    
    //Calculate average
    for (unsigned short count1=0;count1<3;count1++){//handles the rows
       for (unsigned short count2=0;count2<7;count2++){//handles the column
           totFood+=data[count1][count2];
           num++;
       } 
    }
    
    avgFood=totFood*1.0/num;
    
    //Display Results
    cout<<std::fixed;
    cout<<"The average pounds of food eaten by the monkeys is: "<<std::setprecision(2)
        <<avgFood<<endl;
}

void lohiEat(int data[][7]){
    //declare variables
    int loAmt=data[0][0],hiAmt=0;//lowest/highest amounts of food eaten by any monkey
    
    //find highest and lowest amounts
    for (unsigned short count1=0;count1<3;count1++){//handles the rows
       for (unsigned short count2=0;count2<7;count2++){//handles the column
           if (loAmt>data[count1][count2])loAmt=data[count1][count2];
           if (hiAmt<data[count1][count2])hiAmt=data[count1][count2];
       } 
    }
    
    //Display the results
    cout<<"The most amount of food eaten was "<<hiAmt<<" pounds.\n";
    cout<<"The least amount of food eaten was "<<loAmt<<" pounds.\n";
    
}