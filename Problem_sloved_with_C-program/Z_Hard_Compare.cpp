/*Given 4 numbers A,B,C
 and D
. If AB
 > CD
 print "YES" otherwise, print "NO".

Input
Only one line containing 4 numbers A,B,C
 and D
 (1≤A,C≤107)
 , (1≤B,D≤1012)
Output
Print "YES" or "NO" according to the problem above.

Examples
inputCopy
3 2 5 4
outputCopy
NO
inputCopy
5 2 4 2
outputCopy
YES
inputCopy
5 2 5 2
outputCopy
NO
Note
First Example :

32
 = 9 and 54
 = 625 then 9 < 625 so the answer is NO.

Second Example :

52
 = 25 and 42
 = 16 then 25 > 16 so the answer is YES.

Third Example :

52
 = 25 and 52
 = 25 then 25 = 25 so the answer is NO.*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    double a, b, c, d;
    cin >> a >> b >> c >> d;

    if ((b * log(a)) > (d * log(c)))
        cout << "YES";
    else
        cout << "NO";

    return 0;
}