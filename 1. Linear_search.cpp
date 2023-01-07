#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> nums(n);
    for (auto &it : nums)
        cin >> it;
    int i = 0;
    for (; i < n; i++)
    {
        if (nums[i] == k)
            break;
    }
    cout << i << endl;
}
