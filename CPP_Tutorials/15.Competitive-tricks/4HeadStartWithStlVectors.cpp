#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int m, n;
        cin >> n >> m;
        vector<pair<ll, int>> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i].first;
            arr[i].second = i % m;
        }
        sort(arr.begin(), arr.end());
        int count = m;
        vector<int> cnt(m, 0); // for eg here in test case 2 is given
        // so size of 2 vector will be formed and 0 is filled initially in it.
        int right = 0;
        ll min_value = INT32_MAX;

        cout << "Sorted Array " << endl;
        for (auto i : arr)
        {
            cout << i.first << " " << i.second << endl;
        }
        static int j = 0;
        static int k = 0;
        for (int left = 0; left < n - 1; left++)
        {
            while (right < n && count > 0)
            {
                count -= cnt[arr[right].second] == 0; //  cnt[arr[right].second] == 0 if this condition satsisfied then only decrease the value of count by 1.
                cnt[arr[right].second]++;             // if we get then we increase it value by 1.
                right++;
                j++; // we should incease the right pointer weather we got element ir not.
            }

            cout << j << " The value of J  before Just entering the loop " << endl;
            for (auto i : cnt)
            {
                cout << i << " ";
            }
            cout << endl;

            if (count == 0)
            {
                ll res = arr[right - 1].first - arr[left].first;
                min_value = min(min_value, res);
                k++;
            }
            cout << min_value << endl;

            if (cnt[arr[left].second] > 0)
            {
                cnt[arr[left].second]--; // this ball is there so now remove that
            }

            count += cnt[arr[left].second] == 0;
            cout << k << " The value of k  befor End of the loop " << endl;
            for (auto i : cnt)
            {
                cout << i << " ";
            }
            cout << endl;
        }
        cout << min_value << endl;
    }

    return 0;
}
