#include <iostream>
#include <algorithm>
#include <functional>

using namespace std;

int main()
{
    string str;
    cin >> str;

    sort(str.begin(), str.end(), greater<char>());
    cout << str;
}