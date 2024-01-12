//check a string is palindrome or not 

#include<bits/stdc++.h>
#include<vector>
using namespace std;

inline bool isPalindrome(int l , string s){
    if(l>=s.size()/2)
    return true;
    if(s[l] != s[s.size()-l-1])
    return false;
    return isPalindrome(l+1 , s);
}

int main(){
    string  s;
    cout<<"Enter name : ";
    cin>>s;
    if(isPalindrome(0 ,s)==1){
        cout<<"True";
    }
    else {
        cout<<"False";
    }
    return 0;
    
}
