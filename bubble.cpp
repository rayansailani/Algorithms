#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main()
{
    int n, a[10];
    clock_t t;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        a[i] = rand();
    }
    cout << "The selected random array is :" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
    t = clock();
    for (int i = 0; i < n - 2; i++)
    {
        for (int j = 0; j < n - 2 - i; j++)
        {
            if (a[j] > a[j + 1])
            {
                int t = a[j];
                a[j] = a[j + 1];
                a[j + 1] = t;
            }
        }
    }
    t = clock() - t;
    cout << "The sorted array is: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << "time taken: " << ((float)t) / CLOCKS_PER_SEC << "seconds" << endl;
    cout << endl;
}