#include <iostream>
using namespace std;

int main()
{
    string s;
    int alpabet[26] = {0};

    cin >> s;

    for (int i = 0; i < s.length(); i++)
    {
        alpabet[s[i] - 'a']++;
    }
    // s[i]의 아스키코드 값에서 소문자 'a'의 아스키 코드 값을 빼는 연산.

    for (int i = 0; i < 26; i++)
    {
        cout << alpabet[i] << " ";
    }
}
