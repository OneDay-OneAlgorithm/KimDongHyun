#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    long long S;
    cin >> S;

    long long sum = 0, num = 1;
    int count = 0;

    while (1)
    {
        sum += num;
        count++;

        if (sum > S)
        {
            count--;
            break;
        }
        num++;
    }
    cout << count;
    return 0;
}