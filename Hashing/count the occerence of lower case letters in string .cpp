//count the occerence of lower case letters in string 

#include<bits/stdc++.h>
#include<vector>
#include<string>
using namespace std;

int main(){
    string s;
    cout<<"Enter word : ";
    cin>>s;
    
    int hash[26] = {0};
    for(int i=0;i<s.length();i++){
        hash[s[i]-'a']++; //formula 
    }
    
    int q;
    cout<<"For how many operation do you want to : ";
    cin>>q;
    
    while(q--){
        char c;
        cout<<"Enter character : ";
        cin>>c;
        //printing output 
        
        cout<<"the "<<c<<" occures for -> "<<hash[c-'a']<<endl;
    }
    
    
    return 0;
}
