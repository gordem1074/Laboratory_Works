<<<<<<< HEAD
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
    const int N = 11;
    const int M = 11;
    int a, b, n, m;
    
    cout << "Input limits of array(n and m, n < " << N << ", m < " << M << "):" << endl;
    cin >> n >> m;
    cout << "Input limits of array(a and b, a<b):" << endl;
    cin >> a >> b;
    if (n > N | m > M)
    {
        cout << "NotUnderstandable";
        cin >> n;
        abort;
    }

    cout << "Your N array is: " << endl;
    int arrayN[N][M];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++)
        {
            arrayN[i][j] = rand() % (b - a) + a;
            cout << arrayN[i][j] << " ";
        }  
        cout << endl;
    }
    cout << endl;

    cout << "Your M array is: " << endl;
    int arrayM[N][M];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++)
        {
            arrayM[i][j] = rand() % (b - a) + a;
            cout << arrayM[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;

    cout << "Your MN array is: " << endl;
    int arrayMN[N][M];
    for (int i = 0; i <n; i++) {
        for (int j = 0; j < m; j++)
        {
            arrayMN[i][j] = arrayN[i][j] + arrayM[i][j];
            cout << arrayMN[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
=======
﻿#include <iostream>
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
    const int N = 11;
    const int M = 11;
    int a, b, n, m;
    
    cout << "Input limits of array(n and m, n < " << N << ", m < " << M << "):" << endl;
    cin >> n >> m;
    cout << "Input limits of array(a and b, a<b):" << endl;
    cin >> a >> b;
    if (n > N | m > M)
    {
        cout << "NotUnderstandable";
        cin >> n;
        abort;
    }

    cout << "Your N array is: " << endl;
    int arrayN[N][M];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++)
        {
            arrayN[i][j] = rand() % (b - a) + a;
            cout << arrayN[i][j] << " ";
        }  
        cout << endl;
    }
    cout << endl;

    cout << "Your M array is: " << endl;
    int arrayM[N][M];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++)
        {
            arrayM[i][j] = rand() % (b - a) + a;
            cout << arrayM[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;

    cout << "Your MN array is: " << endl;
    int arrayMN[N][M];
    for (int i = 0; i <n; i++) {
        for (int j = 0; j < m; j++)
        {
            arrayMN[i][j] = arrayN[i][j] + arrayM[i][j];
            cout << arrayMN[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
=======
﻿#include <iostream>
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
    const int N = 11;
    const int M = 11;
    int a, b, n, m;
    
    cout << "Input limits of array(n and m, n < " << N << ", m < " << M << "):" << endl;
    cin >> n >> m;
    cout << "Input limits of array(a and b, a<b):" << endl;
    cin >> a >> b;
    if (n > N | m > M)
    {
        cout << "NotUnderstandable";
        cin >> n;
        abort;
    }

    cout << "Your N array is: " << endl;
    int arrayN[N][M];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++)
        {
            arrayN[i][j] = rand() % (b - a) + a;
            cout << arrayN[i][j] << " ";
        }  
        cout << endl;
    }
    cout << endl;

    cout << "Your M array is: " << endl;
    int arrayM[N][M];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++)
        {
            arrayM[i][j] = rand() % (b - a) + a;
            cout << arrayM[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;

    cout << "Your MN array is: " << endl;
    int arrayMN[N][M];
    for (int i = 0; i <n; i++) {
        for (int j = 0; j < m; j++)
        {
            arrayMN[i][j] = arrayN[i][j] + arrayM[i][j];
            cout << arrayMN[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
>>>>>>> 8da49e2904c059084d8e68c42a9580f48d9dba7b
}