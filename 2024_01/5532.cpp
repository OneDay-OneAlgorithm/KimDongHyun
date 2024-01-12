#include <iostream>
using namespace std;

int main()
{
    int A, B, C, D, L, answer1, answer2;
    cin >> L >> A >> B >> C >> D;

    answer1 = A / C;
    A = A % C;
    if (A > 0)
        answer1++;

    answer2 = B / D;
    B = B % D;
    if (B > 0)
        answer2++;

    if (answer1 >= answer2)
        cout << L - answer1;
    else
        cout << L - answer2;
}