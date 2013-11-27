/* 
 * File:   main.cpp
 * Author: Memo
 *
 * Created on November 27, 2013, 9:28 AM
 */

//Libraries
#include <iostream>
using namespace std;

//Global Constants: none

//Function Prototypes
bool numChek(int [],int,bool);//Verifies account number

//Execution begins here
int main(int argc, char** argv) {

    //Declare Variables
    int corNum[18]={5658845,4520125,7895122,8777541,8451277,1302850
                    ,8080152,4562555,5552012,5050552,7825877,1250255
                     ,1005231,6545231,3852085,7576651,7881200,4581002};
    int userNum;
    bool numVeri=false;//used to check and verify number
    
    //Prompt for input
    cout<<"Hello! Please enter your charge account number, then press enter.\n";
    cout<<"Account Number: ";
    cin>>userNum;
    
    //Verify Account Number
    numVeri=numChek(corNum,userNum,numVeri);
    
    //Display Result
    if(numVeri){
        cout<<"Number is valid. Welcome!!\n";
    }
    else cout<<"Number is invalid!! Please leave!\n";
    
    return 0;
}

bool numChek(int cN[],int uN,bool veri){
    short count=0;
    
    while (count<18 && !veri){
        if(uN==cN[count]){
            veri=true;
            break;
        }
        count++;
    }
    
    return veri;
}