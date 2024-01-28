#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    int num[1000000];
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> num[i];
    }
    sort(num, num + n);

    for (int i = 0; i < n; i++)
    {
        cout << num[i] << '\n';
    }
    return 0;
}