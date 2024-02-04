
#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int K, D, A;
    char slash;

    cin >> K >> slash >> D >> slash >> A;

    if (K + A < D || D == 0)
        cout << "hasu" << '\n';
    else
        cout << "gosu" << '\n';
}
