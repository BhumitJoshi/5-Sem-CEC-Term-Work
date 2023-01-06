#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> nums(n);
    // input array must be sorted 
    for (auto &it : nums)
        cin >> it;
    int l = 0, r = n-1;
    while(l <= r){
        int mid = (l+r)/2;
        if(nums[mid] == k)
            break;
        if(nums[mid] < k)
            l = mid+1;
        else 
            r = mid-1;
    }   
    cout << l << endl;
}
