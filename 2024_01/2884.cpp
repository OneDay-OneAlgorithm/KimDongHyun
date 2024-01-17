
#include <iostream>
using namespace std;

int main()
{
    int H, M;

    cin >> H >> M;

    // M이 45 이상일 떄
    if (M >= 45)
    {
        cout << H << " " << M - 45;
    }
    // M이 45 이하일 때
    else
    {
        // H가 0일 떄
        if (H == 0)
        {
            H = 23;
            M = M + 15;
            cout << H << " " << M;
        }
        // H가 0이 아닐 때
        else
        {
            H = H - 1;
            M = M + 15;
            cout << H << " " << M;
        }
    }
}
