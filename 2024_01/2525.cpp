#include <iostream>
using namespace std;

int main()
{
    int A, B;
    cin >> A >> B;

    int C;
    cin >> C;

    B += C;      // 먼저 분을 더함
    A += B / 60; // 시간에 분을 시간으로 변환하여 더함
    B %= 60;     // 분을 60으로 나눈 나머지로 설정

    if (A >= 24)
    {
        A -= 24; // 만약 시간이 24 이상이면, 24를 빼서 0시부터 다시 시작하도록 함
    }

    cout << A << " " << B;
    return 0;
}
