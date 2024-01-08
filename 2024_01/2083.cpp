#include <iostream>
using namespace std;

string name;
int age;
int height;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    while (true)
    {
        cin >> name >> age >> height;
        if (name == "#" && age == 0 && height == 0)
            break;
        if (age > 17 || height >= 80)
        {
            cout << name << " Senior" << '\n';
        }
        else
            cout << name << " Junior" << '\n';
    }
}