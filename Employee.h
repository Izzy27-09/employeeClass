#include <iostream>
#include <string>
using namespace std;

class Employee{
  private:
  string name,department,position,input;
  int idNumber;
  
  //List of constructors begin
  public:
  Employee(string alpha,int beta,string gamma,string delta){
    name = alpha;
    idNumber=beta;
    department=gamma;
    position=delta;
  }
  Employee(string eplison,int zeta){
    name = eplison;
    idNumber=zeta;
    department="";
    position="";
  }

  Employee(){
    name="";
    idNumber=0;
    department="";
    position="";
  }
  //List of constructors end
  //Functions to update infromation

  //uses buffer as for some unknown reason getline cause program to enter infite loop
  void Upname(){
    string buffer;
    cout<<"\nWhat is the name of the person being enter?"<<endl;
    cin>>name;
    cin>>buffer;
    name+=" "+buffer;
  }
  void UpID(){
    cout<<"\nWhat is the ID number of the Employee?"<<endl;
    cin>>idNumber;
  }
  //uses buffer as for some unknown reason getline cause program to enter infite loop
  void Updep(){
    string buffer;
    cout<<"\nWhat is the department of the Employee?"<<endl;
    cin>>department;
    cin>>buffer;
    department+=" "+buffer;
  }
  //uses buffer as for some unknown reason getline cause program to enter infite loop
  void UpPos(){
    string buffer;
    cout<<"\nWhat is the position of the Employee?"<<endl;
    cin>>position;
    cin>>buffer;
    position+=" "+buffer;
  }

  //Acessor Functions

  string Getname(){
    return name;
  }

  int GetId(){
    return idNumber;
  }

  string getPosition(){
    return position;
  }

  string getDepartment(){
    return department;
  }

};//end of class