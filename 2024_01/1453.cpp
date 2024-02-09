#include <iostream>
using namespace std;

int main()
{
    int count = 0, customer, num, a[101] = {0};
    cin >> customer;

    for (int i = 0; i < customer; i++)
    {
        cin >> num;
        if (a[num] > 0)
            count++;
        a[num]++;
    }
    cout << count << '\n';
}