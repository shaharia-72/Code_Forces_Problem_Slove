#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, crime = 0, police = 0;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        if (arr[i] < 0)
        {
            if (police >= -arr[i])
            {
                police += arr[i];
            }
            else
            {
                crime++;
            }
        }
        else if (arr[i] > 0)
        {
            police += arr[i];
        }
    }

    cout << crime << endl;

    return 0;
}
