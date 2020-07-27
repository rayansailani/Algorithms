#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <vector>
using namespace std;

int main()
{
    int n, p;
    vector<int> a;
    cin >> n;
    for (int i = 0; i < n; i++)
    {

        a.push_back(rand());
    }
    cout << "The elements selected are" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
    cout << "Enter the key to be found" << endl;
    cin >> p;
    a.push_back(p);
    for (int i = 0; i <= n; i++)
    {
        if (a[i] == p)
        {
            p = i;
        }
    }
    if (p == n)
    {
        cout << "Element wasnt found!" << endl;
    }
    else
    {
        cout << "Element found at " << p << " position " << endl;
    }
}