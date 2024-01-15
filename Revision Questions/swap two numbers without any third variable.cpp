//swap two numbers without any third variable

#include<bits/stdc++.h>
#include<vector>
using namespace std;

int main(){
    int x,y;
    cout<<"Enter value for x :";
    cin>>x;
    cout<<"Enter value for y : ";
    cin>>y;
    
    //concept
    x = x+y;
    y=x-y;
    x=x-y;
    
    
    cout<<"Value of x : "<<x<<endl;
    cout<<"value of y : "<<y;
    
    return 0;
}
