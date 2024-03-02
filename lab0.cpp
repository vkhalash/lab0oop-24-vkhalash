#include <iostream>
using namespace std;

int main()
{
    const int MAX = 100;
    double A[MAX], B[MAX], C[MAX];
    int nA, nB = 0, nC = 0, i, m;

    do
    {
        cout << "Input number (N <= " << MAX << ") ";
        cin >> nA;
    } while (nA <= 0 || nA > MAX);

    for (i = 0; i < nA; i++)
    {
        cout << "A[" << i << "] ";
        cin >> A[i];
    }

    do
    {
        cout << "Input index m (0 <= m < " << nA << ") ";
        cin >> m;
    } while (m < 0 || m >= nA);

    for (i = 0; i < nA; i++)
    {
        if (A[i] > A[m])
            B[nB++] = A[i];
        else
            C[nC++] = A[i];
    }

    cout << "Result " << endl;
    cout << "B ";
    for (i = 0; i < nB; i++)
        cout << B[i] << "\t";
    cout << endl;

    cout << "C ";
    for (i = 0; i < nC; i++)
        cout << C[i] << "\t";
    cout << endl;

    cout << "Exit\n";
    return 0;
}