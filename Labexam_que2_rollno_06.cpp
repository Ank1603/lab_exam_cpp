/*Q.No. 2
Write a program to print the area of two rectangles having sides (4,5) and (5,8) respectively by creating a
class named 'Rectangle' with a function named 'Area' which returns the area. Length*/
#include<iostream>

using namespace std;
class Rectangle
{
	private:
		int a,b,area,length;	
	public:
		void Area(int x,int y)
		{
			a=x;
			b=y;
			area=x*y;
			length=a+b;
			cout<<"\nArea of rectangle is: "<<area<<"\n";
			cout<<"\nlength is : "<<length;
		}
	
};
int main()
{
	Rectangle r1,r2;
	r1.Area(4,5);
	r2.Area(5,8);
	return 0;
}

