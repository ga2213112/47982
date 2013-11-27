/* 
 * File:   main.cpp
 * Author: Guillermo Acuna
 *
 * Created on November 24, 2013, 8:42 PM
 */

//Libraries
#include <iostream>
using namespace std;

//Global Constants: none

//Function Prototypes
int fndLrg(int []);
int fndSml(int []);

//execution begins here
int main(int argc, char** argv) {

    //Declare variables
    int usernum[10];//array for user input
    int larg,smal;//used for largest and smallest value
    
    //Greetings an prompt for input
    cout<<"Hello user, please enter 10 number, and press enter after "
        <<"each entry.\n";
    for (short count=0;count<10;count++){//used for user input into array
        cin>>usernum[count];
    }
    
    //find largest and smallest values
    larg=fndLrg(usernum);
    smal=fndSml(usernum);
    
    //Output the results
    cout<<"The largest value that was input is "<<larg<<endl;
    cout<<"The smallest number that was input is "<<smal<<endl;
    
    return 0;
}

int fndLrg(int num[]){
    //declare variables
    int lrg=0;//largest value
    
    for (short count=0;count<10;count++){
        if (lrg<num[count])lrg=num[count];
    }
    return lrg;
}

int fndSml(int num[]){
    //declare variables
    int sml=num[0];//smallest value
    
    for (short count=0;count<10;count++){
        if (sml>num[count])sml=num[count];
    }
    return sml;
}