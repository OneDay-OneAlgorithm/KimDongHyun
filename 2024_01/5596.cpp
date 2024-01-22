#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int a, b, c, d;
    int e, f, g, h;
    int S, T;

    cin >> a >> b >> c >> d;
    cin >> e >> f >> g >> h;

    S = a + b + c + d;
    T = e + f + g + h;

    if (S > T)
    {
        cout << S;
    }
    else if (T > S)
    {
        cout << T;
    }
    else
    {
        cout << S;
    }
}
