#include <iostream>
using namespace std;

int main()
{
    int maxCount = 0, maxScore = 0;

    for (int i = 1; i <= 5; i++)
    {
        int sum = 0;
        for (int j = 1; j <= 4; j++)
        {
            int score = 0;
            cin >> score;
            sum += score;
        }
        if (sum > maxScore)
        {
            maxCount = i;
            maxScore = sum;
        }
    }
    cout << maxCount << ' ' << maxScore;
}