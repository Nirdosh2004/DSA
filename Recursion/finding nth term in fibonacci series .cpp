//finding nth term in fibonacci series 

#include<bits/stdc++.h>
#include<vector>
using namespace std;

inline int fibonacci(int n){
    if(n==0)
    return 0;
    if(n==1)
    return 1;
    return fibonacci(n-1)  + fibonacci(n-2);
}

int main(){ 
    int n;
    cout<<"Enter term : ";
    cin>>n;
    cout<<"Answer is : "<<fibonacci(n);
    
    return 0;
    
}
