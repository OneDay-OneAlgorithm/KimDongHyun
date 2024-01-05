#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int A, B, V;
    int days = 0;
    int current_heights = 0;

    cin >> A >> B >> V;

    days = (V - B - 1) / (A - B) + 1;

    // (V-B-1): 마지막 날 낮! 정상에 도달하기 전까지 남은 거리.
    // (A-B): 하루 동안 실제로 오른 높이를 의미한다.
    // 둘을 나누어 나무 정상에 거의 도달하는 데 필요한 일수를 계산한다.
    cout << days << '\n';
}
