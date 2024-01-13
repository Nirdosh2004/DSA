//count the occerence of letters in string 

#include<bits/stdc++.h>
#include<vector>
#include<string>
using namespace std;

int main(){
    string s;
    cout<<"Enter word : ";
    cin>>s;
    
    int hash[256] = {0}; //there is only 256 characters in ASCII values
    for(int i=0;i<s.length();i++){
        hash[s[i]]++; //formula 
    }
    
    int q;
    cout<<"For how many operation do you want to : ";
    cin>>q;
    
    while(q--){
        char c;
        cout<<"Enter character : ";
        cin>>c;
        //printing output 
        
        cout<<"the "<<c<<" occures for -> "<<hash[c]<<endl;
    }
    
    
    return 0;
}
