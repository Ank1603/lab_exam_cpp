	/*Q.No 1
	Employee Management System
	File handling has been effectively used for each feature of this project
	Operation
	1. Add Employee Information
	1. Search Employee Information
	1. Delete Employee Data
	2. Search Employee Record.*/
#include<iostream>
#include<fstream>
using namespace std;
class Employee_Managmnent
{
private:
string str,file;

public:
void createfile(){
cout<<"\nEnter file name ";
getline(cin,file);

ofstream onfile;
onfile.open(file+".txt",ios::app);
cout<<"\nEnter data ";
while(true){
getline(cin,str);
if(str=="exit"){
break;
}
onfile<<str<<endl;
}
cout<<"\nFile named "<<file <<" Created successfully! ";
onfile.close();
}

void readfile(){
ifstream infile;
infile.open(file+".txt");
while(getline(infile,str)){
cout<<"\n"<<str;

}
infile.close();
}

void Delete(){
if(remove((file+".txt").c_str())==0)
cout<<"\nFile deleted sucessfully !";
else{
cout<<"\nNot deleted ";
}
}

};

int main()
{
Employee_Managmnent f;

f.createfile();
f.readfile();
f.Delete();
f.readfile();
return 0;

}