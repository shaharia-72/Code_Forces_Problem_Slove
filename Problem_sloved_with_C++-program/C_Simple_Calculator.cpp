#include <iostream>
using namespace std;
int main()
{
    int x, y;
    cin >> x;
    cin >> y;
    // cout<<x<<" "<<y<<endl;
    int summation, subtraction;
    summation = x + y;
    long long multiplication = (long long)x * (long long)y;
    subtraction = x - y;
    cout << x << " + " << y << " = " << summation << endl;
    cout << x << " * " << y << " = " << multiplication << endl;
    cout << x << " - " << y << " = " << subtraction << endl;
}