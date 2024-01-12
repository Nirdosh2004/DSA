//print linearly from 1 to n

#include<bits/stdc++.h>
#include<vector>
using namespace std;

void fn( int count , int n){
    if(count==n+1)
    return ;
    cout<<count<<endl;
    count++;
    fn(count,n);
}

int main(){
    int count = 1;
    int n;
    cout<<"Enter value for n : ";
    cin>>n;
    fn(count , n);
}
