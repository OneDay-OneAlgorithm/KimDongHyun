#include <iostream>
using namespace std;

int main()
{
    int a = 0;
    int b = 0;
    int answer = 0;

    for (int i = 1; i <= 5; i++)
    {
        cin >> a;
        b += a * a;
    }
    answer = b % 10;
    cout << answer << '\n';
}