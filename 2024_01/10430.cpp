#include <iostream>
using namespace std;

int main()
{
    int A, B, C;
    cin >> A >> B >> C;

    if (A >= 2 && B >= 2 && C <= 10000)
    {
        cout << (A + B) % C << '\n';
        cout << ((A % C) + (B % C)) % C << '\n';
        cout << (A * B) % C << '\n';
        cout << ((A % C) * (B % C)) % C << '\n';
    }
}
