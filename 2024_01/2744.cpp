#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    string word;
    cin >> word;

    for (int i = 0; i < word.length(); i++)
    {
        if (word[i] >= 65 && word[i] <= 90)
        {
            word[i] += 32;
        }
        else
        {
            word[i] -= 32;
        }
    }
    cout << word;
}
