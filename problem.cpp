#include <iostream>

using namespace std;

int main()
{
    int a, b, c, d, e;
    cin >> a >> b;
    c = a * b;
    d = a + b;
    e = c + d;
    if (e == 111)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
    return 0;
}