#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    long long a = 0, b = 0;
    if (a <= 1000 && b <= 1000)
    {
        cin >> a >> b;

        cout << (long long)(a + b) * (a - b) << '\n';
    }
}
