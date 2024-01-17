#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int a, b, c, d, e;

    cin >> a;
    cin >> b;
    cin >> c;
    cin >> d;
    cin >> e;

    int minburger = min(a, b);
    minburger = min(minburger, c);

    int minbeverage = min(d, e);

    int setprice = minburger + minbeverage - 50;

    cout << setprice;

    return 0;
}