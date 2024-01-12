//print linearly from n to 1

#include<bits/stdc++.h>
#include<vector>
using namespace std;

void fn( int count , int n){
    if(n<count)
    return ;
    cout<<n<<endl;
    n--;
    fn(count,n);
}

int main(){
    int count = 1;
    int n;
    cout<<"Enter value for n : ";
    cin>>n;
    fn(count , n);
}
