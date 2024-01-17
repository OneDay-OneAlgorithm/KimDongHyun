#include <iostream>
using namespace std;

int main()
{
    int n, sum = 0;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        int count;
        cin >> count;
        sum += count;
    }

    sum -= (n - 1);
    cout << sum;
}