#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N;
    double arr[1001];
    double sum = 0;

    cin >> N;

    // 배열 인덱스를 0부터 시작하도록 수정
    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + N);

    for (int i = 0; i < N; i++)
    {
        sum += (arr[i] / arr[N - 1]) * 100;
    }
    cout << sum / N;
}