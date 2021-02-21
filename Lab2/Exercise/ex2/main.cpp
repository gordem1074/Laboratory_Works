#include <iostream>
using namespace std;

int main() {
	int thh, thm,  tm;
	cout << "Convert the time interval's value"  << endl;
	cout << "Input minutes: "  << endl;
	cin >> tm;
	thm = tm % 60;
	thh = tm / 60;
	cout << tm << " minutes is "<< thh << " hours and "<< thm << " minutes " << endl;

	return tm;
}
