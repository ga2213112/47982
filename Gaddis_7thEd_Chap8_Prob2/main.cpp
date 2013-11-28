/* 
 * File:   main.cpp
 * Author: Guillermo Acuna
 *
 * Created on November 27, 2013, 9:03 PM
 */

//Libraries
#include <iostream>
using namespace std;

//Global Constants: none

//Function Prototypes
void chekNum(int [], int);

//Execution Begins here
int main(int argc, char** argv) {

    //Declare variables
    int lotoNum[10]={13579,26791,26792,33445,55555
                     ,62483,77777,79422,85647,93121};
    int userNum;
    
    //Prompt for input
    cout<<"Please enter number to be checked.\n";
    cin>>userNum;
    
    //check number
    chekNum(lotoNum,userNum);
    
    
    return 0;
}

void chekNum(int tick[],int num){
    short count=0;
    bool found=false;
    
    while (count<10 && !found){
        if (num==tick[count]){
            found=true;
        }
        count++;
    }
    
    if (found)cout<<"You have the winning ticket!!.\n";
    else cout<<"You did not win.\n";
}