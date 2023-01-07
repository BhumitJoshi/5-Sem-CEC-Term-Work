#include <bits/stdc++.h>
using namespace std;

void merge(vector<int> &a, int beg, int mid, int end)    
{    
    int i, j, k;  
    int n1 = mid - beg + 1;    
    int n2 = end - mid;    
      
    int LeftArray[n1], RightArray[n2]; 

    for (int i = 0; i < n1; i++)    
        LeftArray[i] = a[beg + i];   

    for (int j = 0; j < n2; j++)    
        RightArray[j] = a[mid + 1 + j];    
      
    i = j = 0; 
    k = beg;
      
    while (i < n1 && j < n2)    
    {    
        if(LeftArray[i] <= RightArray[j])    
            a[k] = LeftArray[i++];    
        else    
            a[k] = RightArray[j++];    
        k++;    
    }    
    while (i<n1)    
        a[k++] = LeftArray[i++];    
      
    while (j<n2)    
        a[k++] = RightArray[j++];    
}    

void mergeSort(vector<int>& a, int beg, int end)  
{  
    if (beg < end)   
    {  
        int mid = (beg + end) / 2;  
        mergeSort(a, beg, mid);  
        mergeSort(a, mid + 1, end);  
        merge(a, beg, mid, end);  
    }  
}  
   
int main()  
{  
    int n;
    cin>>n;
    vector<int> a(n);
    for(auto &it : a)
        cin>>it;
    mergeSort(a, 0, n - 1);  
    for(auto it : a){
        cout<<it<<" ";
    }
    return 0;  
} 