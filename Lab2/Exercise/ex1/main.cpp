#include <iostream>
#include <math.h>
using namespace std;

int main() {
	float S, P, r, h;
	P = 3.14f;
	cout << "Calculating the volume of the cone"  << endl;
	cout << "Input r and h: "  << endl;
	cin >> r >> h;	//input a variable
	S = (P*pow(r,2)*h)/3;
	cout << "Volume:"<< S <<  endl;
	return S;
}
