#include <iostream>
#include <cmath>
#include <ctime>
#include <cstdlib>
#include <iomanip>
using namespace std;

/* 
Variant № 4
Student of group: 110
Name: Horbuntsov Dmytro Dmytrovych
*/

int main()
{
	//Task №1
	int F, y = 0, x = 0;
	F = 2 + y;
	F = pow((2 + y), 2);
	F = y + 5;
	F = sin(y + 5);
	F = pow((sin(y + 5)), (1 / 7));
	F = pow((2 + y), 2) + pow((sin(y + 5)), (1 / 7));
	F = sqrt(pow((2 + y), 2) + pow((sin(y + 5)), (1 / 7)));
	F = x + 1;
	F = log(x + 1);
	F = pow(y, 3);
	F = (log(x + 1) - pow(y, 3));
	F = (sqrt(pow((2 + y), 2) + pow((sin(y + 5)), (1 / 7)))) / (log(x + 1) - pow(y, 3));

	cout << "Task1:" << endl
		 << F << endl<<endl;


	//Task №2
	int N = rand() % 1000 + 1;
	string print;
	cout << "Task2:" << endl
		 << N;

	print = ((N % 3 == 0) && (N % 9 != 0)) ? "If1 Done!" : "";
	if (N % 4 == 0){
		N /= 5;
		N /= 24;
	}
	cout << N << endl << endl;

	
	//Task3
	int sum = 0;
	for (int i = -99; i < 100; i++) {
		if (i % 2 != 0 && i < 0) {
			sum += abs(i);
		}
	}
	cout <<"Task3"<<endl
		 << sum<<endl<<endl;


	//Task4
	cout << "Task4" << endl;
	int arr[10] = { 5,3,1,6,1,61,45,63,3,1 }; int max, ind;
	max = arr[0];
	cout << "Done array: " << endl;
	for (int i = 0; i < 10; i++) {
		cout << arr[i] << " ";
	}
	cout << "\n";

	for (int i = 0; i < 10; i++) {
		if (arr[i] > max)max = arr[i];
	}

	for (int i = 0; i < 10; i++) {
		if (arr[i] == max) max = i;
	}

	ind = arr[0];
	arr[0] = arr[max];
	arr[max] = ind;
	cout << "Done array: " << endl;
	for (int i = 0; i < 10; i++) {
		cout<< arr[i] << " ";
	}
}