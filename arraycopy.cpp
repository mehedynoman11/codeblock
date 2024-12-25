#include <iostream>
using namespace std;
int main()
{
    int N, M;
    cin >> N;
    int *a = new int[N];
    for (int i = 0; i < N; i++)
    {
        cin >> a[i];
    }
    cin >> M;
    int *b = new int[M];

    for (int i = 0; i < N; i++)
    {
        b[i] = a[i];
    }
    delete[] a;


    for (int i = 0; i < M; i++)
    {
        cin >> b[i];
    }

    for (int i = 0; i < M; i++)
    {
        cout << b[i] << " ";
    }

    delete[] b;

    return 0;
}