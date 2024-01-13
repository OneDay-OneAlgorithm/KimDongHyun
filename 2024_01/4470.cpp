#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N;
    cin >> N;
    cin.ignore();

    for (int i = 1; i <= N; i++)
    {
        string abc;
        getline(cin, abc);
        cin.clear();
        cout << i << ". " << abc << '\n';
    }
}