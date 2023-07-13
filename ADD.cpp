#include <bits/stdc++.h>
using namespace std;
vector <int> a(101);
bool check(int k, int l, int r)
{
    int mid;
    while (l <= r)
    {
        mid = (l + r) / 2;
        if (a[mid] == k) return 1;
        else if (a[mid] > k) r = mid - 1;
        else l = mid + 1;
    }
    return 0;
}
int main()
{
    int t;
    cin >> t;
    for (int o = 1; o <= t; o++)
    {
        int n;
        bool ktra = false;
        cin >> n;
        for (int i = 1; i <= n; i++)
            cin >> a[i];
        sort(a.begin() + 1, a.begin() + 1 + n);
        for (int i = 1; i < n; i++)
        {
            for (int j = i + 1; j <= n; j++)
                if ((a[i] >= 0 && a[j] >=0))
                {
                    if (check(a[i] + a[j], j + 1, n))
                    {
                        cout << "YES";
                        ktra = true;
                        break;
                    }
                }
                else if (a[i] <= 0 && a[j] <= 0)
                    {
                        if (check(a[i] + a[j], 1, i - 1))
                        {
                            cout << "YES";
                            ktra = true;
                            break;
                        }
                    }


                else
                {
                    if (check(a[i] + a[j], i + 1, j - 1))
                    {
                        cout << "YES";
                        ktra = true;
                        break;
                    }
                }
            if (ktra) break;
        }
        if (ktra == false) cout << "NO";
        cout << endl;
    }
    return 0;
}
