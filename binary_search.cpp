#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <vector>
using namespace std;

int binary_s(vector<int> a, int low, int high, int key)
{
    while (low < high)
    {
        int mid = (low + high) / 2;
        if (key == a[mid])
        {
            return 1;
        }

        if (key > a[mid])
        {
            low = mid + 1;
        }
        else
        {
            high = mid;
        }
    }
    return -1;
}

int main()
{
    int n, p;
    vector<int> a;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> p;
        a.push_back(p);
    }
    cout << "The elements selected are" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
    cout << "Enter the key to be found" << endl;
    cin >> p;
    int key = binary_s(a, 0, n - 1, p);
    if (key == -1)
    {
        cout << "Element wasnt found!" << endl;
    }
    else
    {
        cout << "Element found" << endl;
    }
}