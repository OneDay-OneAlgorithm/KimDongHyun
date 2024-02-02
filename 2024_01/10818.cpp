#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int n = 0;
    int arr[1000001];

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    sort(arr, arr + n);

    cout << arr[0] << " " << arr[n - 1];
    return 0;
}