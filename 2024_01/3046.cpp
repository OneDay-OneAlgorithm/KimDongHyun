#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int R1, R2, S;

    cin >> R1 >> S;

    R2 = S * 2 - R1;
    cout << R2;
}