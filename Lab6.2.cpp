#include <iostream>
#include <math.h>
#include <ctime>
#include <cstdlib>
#include <iomanip>
#include <stdio.h>
#include <malloc.h>
using namespace std;

int main()
{
    srand(time(0));
    int a, b, n, m;

    cout << "Input limits of array(n and m):" << endl;
    cin >> n >> m;
    cout << "Input limits of array(a and b, a<b):" << endl;
    cin >> a >> b;

    cout << "Your N array is: " << endl;
    int ** arrayN = new int*[n];
    for (int i = 0; i < n; i++){
        arrayN[i] = new int[m];
        for (int j = 0; j < m; j++){
            arrayN[i][j] = rand() % (b - a) + a;
            cout << arrayN[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;

    cout << "Your M array is: " << endl;
    int** arrayM = new int* [n];
    for (int i = 0; i < n; i++) {
        arrayM[i] = new int[m];
        for (int j = 0; j < m; j++) {
            arrayM[i][j] = rand() % (b - a) + a;
            cout << arrayM[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;

    cout << "Your MN array is: " << endl;
    int** arrayMN = new int* [n];
    for (int i = 0; i < n; i++) {
        arrayMN[i] = new int[m];
        for (int j = 0; j < m; j++) {
            arrayMN[i][j] = arrayN[i][j] + arrayM[i][j];
            cout << arrayMN[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
    delete[] arrayN;
    delete[] arrayM;
    delete[] arrayMN;

}