//inserting element at bottom of stack ;

#include<iostream>
#include<stack>
using namespace std;

void solve(stack<int> &s , int x){
    //base case 
    if(s.empty()){
        s.push(x);
        return ; 
    }
    int num = s.top();
    s.pop();
     
     //recursive call 
     solve(s,x);
     s.push(num);
}

int main(){
    
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    cout<<"Enter element to insert at bottom : ";
    int x;
    cin>>x;
    solve(s,x);
    while(!s.empty()){
        cout<<s.top()<<endl;
        s.pop();
    }
    
    return 0;
}
