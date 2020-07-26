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

    for (int i = 0; i < n - 1; i++)
    {
        int min = i;
        for (int j = i + 1; j < n; j++)
        {
            if (a[min] > a[j])
            {
                int t = a[min];
                a[min] = a[j];
                a[j] = t;
            }
        }
    }
    t = clock() - t;
    cout << "The sorted array is :" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
    cout << "time taken: " << ((float)t) / CLOCKS_PER_SEC << "seconds" << endl;
}