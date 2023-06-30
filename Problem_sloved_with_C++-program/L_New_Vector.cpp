/*Given two arrays A and B of size N. Print a new array C that holds the concatenation of array B followed by array A.

Note: Solve this problem using function.

Input
First line will contain a number N (1≤N≤103).

Second line will contain N numbers (1≤Ai≤105) array A elements.

Third line will contain N numbers (1≤Bi≤105) array B elements.

Output
Print array C elements separated by space.

Example
inputCopy
2
1 2
3 4
outputCopy
3 4 1 2 */

#include <bits/stdc++.h>
using namespace std;

vector<int> add(const vector<int> &a, const vector<int> &b)
{
    vector<int> c;

    c.reserve(a.size() + b.size());

    // for (int i = a.size() - 1; i >= 0; i--)
    // {
    //     c.push_back(a[i]);
    // }

    // for (int i = a.size() - 1; i >= 0; i--)
    // {
    //     c.push_back(b[1]);
    // }

    for (int num : a)
    {
        c.push_back(num);
    }

    for (int num : b)
    {
        c.push_back(num);
    }

    return c;
};

int main()
{
    int n;
    cin >> n;

    vector<int> a(n);
    vector<int> b(n);

    // for (int i = 0; i < n; i++)
    // {
    //     int x;
    //     cin >> x;
    //     a.push_back(x);
    // }

    // for (int i = 0; i < n; i++)
    // {
    //     int y;
    //     cin >> y;
    //     b.push_back(y);
    // }

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }

    reverse(a.begin(), a.end());
    reverse(b.begin(), b.end());

    vector<int> c = add(a, b);

    // for (int i = 0; i < c.size(); i++)
    // {
    //     cout << c[i] << " ";
    // }

    for (int i = c.size() - 1; i >= 0; i--)
    {
        cout << c[i] << " ";
    }

    return 0;
}