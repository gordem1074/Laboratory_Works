#include <iostream>
#include <cmath>
using namespace std;

int main() {
	float sum, month, result, profit;
	cout << " Deposit Calculator"  << endl;
	cout << "Input sum in \"$\" and month:"  << endl;
	cin >> sum >> month;
	
	result = sum *(pow( (1 + 5.0/100 ), month/12) );
	profit = (result - sum)/month;
	
	cout 
	<< "The profit from the deposit for the month: "<< profit << "$" << endl
	<< "Entire term of the deposit: " << month << " month" << endl
	<< "Your balance: " << result << "$" << endl;
	
	return result;
}
