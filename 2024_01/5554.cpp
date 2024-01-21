#include <iostream>
using namespace std;

int main()
{
    int a, b, c, d;
    int total;
    int hour, minute;

    cin >> a >> b >> c >> d;

    total = a + b + c + d;

    hour = total / 60;
    minute = total % 60;

    cout << hour << '\n';
    cout << minute << '\n';

    return 0;
}
