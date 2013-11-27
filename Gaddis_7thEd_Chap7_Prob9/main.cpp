/* 
 * File:   main.cpp
 * Author: Guillermo Acuna
 *
 * Created on November 26, 2013, 9:11 PM
 */

//Libraries
#include <iostream>
using namespace std;

//Global Constants: none

//Function prototypes
void gradEx(char [],char [],int);//This function grades the exam

//Execution Begins Here
int main(int argc, char** argv) {

    //Declare Variables
    int amt=20;//number of questions on test
    char corAns[20]={'B','D','A','A','C','A','B','A','C','D'
                      ,'B','C','D','A','D','C','C','B','D','A'};//correct answers for test
    char userAns[amt];//user answers
    
    //Prompt for input, and fill user answer array
    cout<<"Hello user, please enter your answer for each question. Must be A, B. C, or D. "
        <<"Your answer must be input as capital letters or it will be marked false.\n";
    
    for(short count=0;count<amt;count++){
        cout<<"Enter answer for question "<<count+1<<": ";
        cin>>userAns[count];
    }
    
    //Call Grading Function
    gradEx(corAns,userAns,amt);
    
    cout<<"Than you user, and good bye.\n";
    return 0;
}

void gradEx(char corAns[],char userAns[],int amt){
    //declare variables
    short numCor=0, numInco;//number of answers correct and incorrect
    
    //Grade the test
    for(short count=0;count<amt;count++){
        if(userAns[count]==corAns[count])numCor++;
    }
    
    numInco=amt-numCor;
    
    //Display Results
    if (numCor>=15)cout<<"Congrats!! You passed the exam!\n";
    else cout<<"You failed the exam...\n";
    
    cout<<"The total correct was "<<numCor<< " and total incorrect was "<<numInco<<endl;
}