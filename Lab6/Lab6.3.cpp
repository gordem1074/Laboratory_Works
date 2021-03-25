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
    int a, b, c, n, m;

    cout << "Input limits of array (n and m):" << endl;
    cin >> n >> m;
    cout << "Input limits of array (a and b, a<b):" << endl;
    cin >> a >> b;
    cout << "Input var c (a<c<b):" << endl;
    cin >> c;
    cout << endl;

    cout << "Your A array is: " << endl;
    int** arrayA = new int* [n];
    for (int i = 0; i < n; i++) {
        arrayA[i] = new int[m];
        for (int j = 0; j < m; j++) {
            arrayA[i][j] = rand() % (b - a) + a;
            cout << arrayA[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;

    double middleMain=0, middleSec=0;
    for (int i = 0; i < n; i++){
        middleMain += arrayA[i][i];
        middleSec += arrayA[i][n - i - 1];
    }
    middleMain /= n;
    middleSec /= n;
    cout << "Your middle variable in main diagonal:" << middleMain << endl;
    cout << "Your middle variable in secondary diagonal:" << middleSec << endl;
    cout << endl;

    cout << "Your B array is: " << endl;
    int** arrayB = new int* [n];
    for (int i = 0; i < n; i++) {
        arrayB[i] = new int[m];
        for (int j = 0; j < m; j++) {
            arrayB[i][j] = rand() % (b - a) + a;
            cout << arrayB[i][j] << " ";
        }
        cout << endl;
    }
    cout << "Your swapped B array is: " << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            ((arrayB)[i][j] < c) ? arrayB[i][j] = 0 : arrayB[i][j] = 1;
            cout << arrayB[i][j] << " ";
        }
        cout << endl;
    }

    cout << endl;
}
