#include <bits/stdc++.h>
using namespace std;

int partition (vector<int>& a, int start, int end)  
{  
    int pivot = a[end]; 
    int i = (start - 1);  
  
    for (int j = start; j <= end - 1; j++)  
    {  
        if (a[j] < pivot)  
        {  
            i++; 
            int t = a[i];  
            a[i] = a[j];  
            a[j] = t;  
        }  
    }  
    int t = a[i+1];  
    a[i+1] = a[end];  
    a[end] = t;  
    return (i + 1);  
}  
  

void quick(vector<int> & a, int start, int end) 
{  
    if (start < end)  
    {  
        int p = partition(a, start, end);  
        quick(a, start, p - 1);  
        quick(a, p + 1, end);  
    }  
}  

int main()  
{  
    int n;
    cin>>n;
    vector<int> a(n);
    for(auto &it : a)
        cin>>it;
    quick(a, 0, n - 1);  
    for(auto it : a){
        cout<<it<<" ";
    }
    return 0;  
    return 0;  
}  