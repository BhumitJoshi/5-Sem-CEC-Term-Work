#include <bits/stdc++.h>
using namespace std;

int main()
{
  cout<<"Enter size of array :"<<endl ;
  int n;
  cin>>n ;
  
  vector<int> v(n); 
  
  cout<<"enter array elements :"<<endl;
  for(int i=0;i<n;i++ )
  {
    cin>>v[i];
  }
  
  
  for(int i=0;i<n;i++)
  {
    int k = v[i];
    int j = i-1;
    
    while(j>=0 && v[j]>k)
    {
       v[j+1]=v[j];
       j--;
    }
    v[j+1]=k;
   
  }
  
  
  cout<<"sorted array :"<<endl;
  for(auto & it: v)cout<<it<<" ";
    cout<<endl;
}