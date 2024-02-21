#include <iostream>
using namespace std;

int main()
{
    int L, P, V;

    int i = 1;
    while (1)
    {
        cin >> L >> P >> V;
        if (L == 0 && P == 0 && V == 0)
            break;

        int day = 0;

        day = (V / P) * L;

        if (V % P <= L)
            day += V % P;
        else
            day += L;

        cout << "Case " << i << ": " << day << endl;

        i++;
    }
    return 0;
}
