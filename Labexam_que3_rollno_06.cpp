/*Q.No. 3
Write a C++ program to create a class Student with data members Roll_No, Student_Name, Class. Write
member functions to accept and display Student information also display count of students. (Use Static
data member and Static member function)*/
#include<iostream>
#include<string>
using namespace std;
class student
{
	private:
		 int Roll_no,i;
		 string student_name;
		 static int totalcount;
		 
	public:
		
		 void accept_student_info(int r,string n )
		{
			Roll_no=r;
			student_name=n;
			//cout<<"\nEnter values for m: "<<m;
		}
		
		 void display_student_info()
		{
			totalcount++;
			cout<<"\nstudent Roll no is : "<<Roll_no<<" and student name is : "<< student_name;
			cout<<"\ntotal student count is : "<<totalcount;
			
		}
	
};
int student::totalcount;

 int main()
{
	student s,s1;
	int r;
	
//	cout<<"\nEnter roll no: ";
//	cin>>r;
	
	string n;
//	cout<<"\nEnter name: ";
//	cin>>n;
	
	s.accept_student_info(6,"Ankita");
	s.display_student_info();
	return 0;
}
