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
    int ind=i;
    for(int j=i+1;j<n;j++)
    {
      if(v[j]<v[ind])
      {
        ind=j;
      }
    }
    
    if(ind!=i)swap(v[i],v[ind]);
   
  }
  
  
  cout<<"sorted array :"<<endl;
  for(auto & it: v)cout<<it<<" ";
    cout<<endl;
}