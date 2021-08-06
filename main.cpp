#include <iostream>
#include <string>
#include "Employee.h"
using namespace std;
void Options1(int);
void Printer(int,int);

Employee h[]={Employee("Susan Meyers",47899,"Acounting","Vice President"),Employee("Mark Jones",39119,"IT","Programmer"),Employee("Joy Rogers",81774,"Manufacturing","Engineer")};

int main() {
  int opt;
  cout<<"\nPlease enter 1 to see/update 1st employee\n2 for the second one\n3 for the third one\n6-To print all data\nany other key to end program";
  cin>>opt;
  while((opt==1)||(opt==2)||(opt==3)||(opt==6)){
    if(opt==6){
      Printer(opt,0);
    }
    else{
      Options1(opt);
    }
    cout<<"\nPlease enter 1 to see/update 1st employee\n2 for the second one\n3 for the third one\n6-To print all data\nany other key to end program";
    cin>>opt;
    
    
  }
  cout<<"\n\nEnd of program";
  
}//end of main

void Options1(int opt){
  int opt2;
  cout<<"\nHere are the following options\n1-Print Employee data\n2-Change employee name\n3-Change employee ID Number\n4-Change employee department\n5-Change employee position\n0- To go back to employee selection";
  cin>>opt2;
  while((opt2>=1)&&(opt2<=6)){
    Printer(opt, opt2);
    cin>>opt2;
  }
}

void Printer(int options1,int options2){
  switch(options2){
    case 1:
    cout<<"\nName-"<<h[options1-1].Getname()<<"\nID number-"<<h[options1-1].GetId()<<"\nDepartment-"<<h[options1-1].getDepartment()<<"\nPostion-"<<h[options1-1].getPosition()<<endl;
    break;
    case 2:
    h[options1-1].Upname();
    break;
    case 3:
    h[options1-1].UpID();
    break;
    case 4:
    h[options1-1].Updep();
    break;
    case 5:
    h[options1-1].UpPos();
    break;
  }//end of switch
  if(options1==6){
    for(int i=0;i<3;i++){
      cout<<"\n"<<h[i].Getname()<<"\t\t"<<h[i].GetId()<<"\t\t"<<h[i].getDepartment()<<"\t\t"<<h[i].getPosition()<<endl;
    }
  }


}