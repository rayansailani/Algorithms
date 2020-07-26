#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <vector>
using namespace std;

int main()
{
    int n;
    vector<int> a;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        a.push_back(rand());
    }
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
    int s, p;
    for (int i = 0; i < n; i++)
    {
        int v = a[i];
        int j = i - 1;
        while (j >= 0 && a[j] > v)
        {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = v;
    }
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}