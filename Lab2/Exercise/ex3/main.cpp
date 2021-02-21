#include <iostream>
using namespace std;

int main() {
	int value, tmp = 0;
	cout << "Display the digits of which this number consists in reverse order"  << endl;
	cout << "Input a number"  << endl;
	cin >> value;
    while(value > 0){
        tmp = 10 * tmp + value % 10;
        value /= 10;
    }
	cout << "Your number: "  << tmp << endl;
	return value;
}
