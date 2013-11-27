/* 
 * File:   main.cpp
 * Author: Guillermo Acuna
 *
 * Created on November 24, 2013, 10:34 PM
 */

//Libraries
#include <iostream>
#include <string>
using namespace std;

//Global Constants: none

//Function prototypes
void totSales(int [],unsigned short);
void hiloSal(string [],int [],unsigned short);

//Execution Begins Here
int main(int argc, char** argv) {

    //Declare Variables
    unsigned short amt=5;//number of elements for the arrays
    string salNme[5]={"Mild","Medium","Sweet","Hot","Zesty"};//Salsa Names
    int salSold[amt];//user input, amount of salsas sold of each
    
    //Prompt user for input
    cout<<"Please enter amount of jars sold for each salsa.\n";
    
    for (short count1=0;count1<amt;count1++){
        cout<<"Amount sold of "<<salNme[count1]<<" sauce this month: ";
        cin>>salSold[count1];
    }
    
    //Display the input
    cout<<"Name                     Jars Sold\n";
    cout<<"_________________________________________\n";
    for (short count2=0;count2<amt;count2++){
    cout<<salNme[count2]<<"                      "<<salSold[count2]<<endl;
    }
    
    // calculate/display total sales, and highest/lowest sellers
    totSales(salSold,amt);
    hiloSal(salNme,salSold,amt);
    
    cout<<"Thank you user, and good bye.\n";
    
    return 0;
}

void totSales(int sSales[],unsigned short amt){
    //Declare Variables
    unsigned int total=0;//total salsa sales
    
    //calculate total salsa jar sales
    for(short count=0;count<amt;count++){
        total+=sSales[count];
    }
    
    //display result
    cout<<"The total amount of salsa jars sold is: "<<total<<endl;
}

void hiloSal(string Nme[],int sSales[],unsigned short amt){
    //Declare Variables
    int hisold=0,losold=sSales[0];//highest/lowest amount sold
    
    //Find highest/lowest values
    for (short count1=0;count1<amt;count1++){
        if (hisold<sSales[count1])hisold=sSales[count1];
        if (losold>sSales[count1])losold=sSales[count1];
    }
    
    //Display results
    for (short count2=0;count2<amt;count2++){
        if (hisold==sSales[count2])cout<<Nme[count2]<<" is a high seller this month!\n";
    }
    
    for (short count3=0;count3<amt;count3++){
        if (losold==sSales[count3])cout<<Nme[count3]<<" is a low seller this month!\n";
    }    
}