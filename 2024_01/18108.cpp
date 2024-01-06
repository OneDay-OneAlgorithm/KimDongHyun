#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int y = 0;
    cin >> y;
    if (y >= 1000 && y <= 3000)
    {
        cout << y - 543;
    }
    return 0;
}