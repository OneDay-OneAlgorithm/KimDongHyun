#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int Y, M, O;
    cin >> Y >> M;

    O = M - Y;
    cout << M + O << '\n';
}