#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int K, N, M;

    cin >> K >> N >> M;

    if (K * N - M > 0)
    {
        cout << K * N - M << '\n';
    }
    else
        cout << 0 << '\n';
}
