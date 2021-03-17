
// Bubble_sort.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
    int n, a[50], aux, ok;
    cout << "Introduceti dimensiunea vectorului:";
    cin >> n;
    cout << "Introduceti elementele vectorului:" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "a[" << i << "]=";
        cin >> a[i];
    }
    ok = 0;
    while (!ok)
    {
        ok = 1;
        for (int i = 0; i < n - 1; i++)
        {
            if (a[i] > a[i + 1])
            {
                aux = a[i];
                a[i] = a[i + 1];
                a[i + 1] = aux;
                ok = 0;
            }
        }
    }
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
    return 0;
}


