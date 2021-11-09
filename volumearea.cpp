#include <iostream>
using namespace std;
int main()
{
	string name;
	cout<<"enter user name";
	cin>>name;
	float radius,height;
	float area,volume;
	cout<<"enter radius of cylinder";
	cin>>radius;
 
	cout<<"input the height of cylinder";
	cin>>height;
	area=2*3.141592*radius*height+2*3.141592*radius*radius;
	cout<<"area of the cylinder"<<area;
	cin>>area;
	
	volume=3.141592*radius*radius*height;
	cout<<"volume of cylinder"<<volume;
	cin>>volume;
	return 0;
	
	
	
}
