#include <iostream>
#include <math.h>
using namespace std;

int main() {
	float x1,y1,x2,y2,x3,y3,a,b,c,p;
	cout<<"This program output perimeter triangle using"
	"\nthe formula for the distance between two points on  a plane. "<<endl;
	cout<<"Input: x,y"<<endl;
	cin>>x1>>y1;
	cout<<"Input: x1,y1"<<endl;
	cin>>x2>>y2;
	cout<<"Input: x2,y2"<<endl;
	cin>>x3>>y3;
	a=sqrt(pow((x2-x1),2)+pow((y2-y1),2));
	b=sqrt(pow((x3-x2),2)+pow((y3-y2),2));
	c=sqrt(pow((x3-x1),2)+pow((y3-y1),2));
	p=a+b+c;
	cout<<"Perimetr is:"<<p<<endl;
	return 0;
}
