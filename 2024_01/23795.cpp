#include <iostream>
using namespace std;

int n = 0;

int main()
{
    int sum = 0;

    while (true)
    {
        cin >> n;
        if (n == -1)
            break;
        sum += n;
    }
    cout << sum << '\n';
}