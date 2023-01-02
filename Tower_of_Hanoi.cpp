
#include <bits/stdc++.h>
using namespace std;

void toh(int n, char a, char b, char c){
    if(n == 0)
        return;
    toh(n-1, a, c, b);
    cout<<"Move disk "<<n<<" from "<<a<<" to "<<c<<endl;
    toh(n - 1, c, b, a);
}

int main(){
    int n;
    cin>>n;
    toh(n, 'A', 'C', 'B');
}