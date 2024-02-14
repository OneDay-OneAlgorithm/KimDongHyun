#include <iostream>
#include <string>

using namespace std;
int main()
{
    string str;

    cin >> str;

    if (str.length() == 2)
    {
        cout << str[0] - '0' + str[1] - '0';
    }
    else if (str.length() == 3)
    {
        if (str[1] == '0')
        {
            cout << (str[0] - '0') * 10 + str[2] - '0';
        }
        else
        {
            cout << (str[1] - '0') * 10 + str[0] - '0';
        }
    }
    else
    {
        cout << (str[0] - '0') * 10 + (str[2] - '0') * 10 << endl;
    }
}
