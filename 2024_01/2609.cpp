#include <iostream>
using namespace std;

// 최대공약수 구하는 부분
int gcd(int a, int b)
{
    if (b == 0)
        return a;
    else
        return gcd(b, a % b);
}

// 최소공배수 구하는 부분
int lcm(int a, int b)
{
    return a * b / gcd(a, b);
}

// main함수 실행 부분
int main()
{
    int num1, num2;
    cin >> num1 >> num2;
    cout << gcd(num1, num2) << '\n';
    cout << lcm(num1, num2) << '\n';
}