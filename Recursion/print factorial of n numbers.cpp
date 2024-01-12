//print factorial of n numbers

#include<bits/stdc++.h>
#include<vector>
using namespace std;


inline int factorial(int n ){
  if(n==0)return 1;
  if(n==1)return 1;
  return n * factorial(n-1);
}

int main(){
   
    int n;
    cout<<"Enter value for n : ";
    cin>>n;
    cout<<factorial( n );
}
