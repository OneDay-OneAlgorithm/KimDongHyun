#include <iostream>
#include <algorithm>
using namespace std;

int main()
{

    int number, num[9] = {0};
    cin >> number;
    while (number > 0)
    {
        if (number % 10 == 9)
            num[6]++;
        else
            num[number % 10]++;
        number /= 10;
    }

    if (num[6] % 2 == 0)
        num[6] /= 2;
    else
        num[6] = num[6] / 2 + 1;

    sort(num, num + 9, greater<>());

    cout << num[0];

    return 0;
}