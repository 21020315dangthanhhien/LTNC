#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n], b[n + 1];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n + 1; i++)
        cin >> b[i];

    sort(a, a + n);
    sort(b, b + n + 1);

    int res = b[0];
    for (int i = 0; i < n + 1; i++)
        if (a[i] != b[i])
        {
            res = b[i];
            break;
        }

    cout << res << endl;
    return 0;
}