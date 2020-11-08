// Лабораторна робота No 5.4
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int k, N, i;
    double S;
    cout << "k = "; cin >> k;
    cout << "N = "; cin >> N;
    S = 0;
    i = N;
    while (i <= 22)
    {
        S += (sqrt(i * i + N * N)) / i;
        i++;
    }
    cout << S << endl;

    S = 0;
    i = N;
    do {
        S += (sqrt(i * i + N * N)) / i;
        i++;
    } while (i <= 22);
    cout << S << endl;
    S = 0;
    for (i = N; i <= 22; i++)
    {
        S += (sqrt(i * i + N * N)) / i;
    }
    cout << S << endl;
    S = 0;
    for (i = 22; i >= N; i--)
    {
        S += (sqrt(i * i + N * N)) / i;
    }
    cout << S << endl;
    return 0;
}