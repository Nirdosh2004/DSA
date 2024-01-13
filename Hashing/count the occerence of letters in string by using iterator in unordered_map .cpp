// count the occerence of letters in string by using iterator in unordered_map 

#include<bits/stdc++.h>
#include<vector>
using namespace std;


int main(){
  string s;
  cout<<"Enter word :";
  cin>>s;
  
  
        unordered_map<char,int> mpp; //first data Type is for   which number and second is for frequency of the number 
    for(int i=0;i<=s.length();i++){
        mpp[s[i]]++;
    }
    
  
    //using iterator
    for(auto it : mpp){
        cout<<it.first<<"  ->  "<<it.second<<endl;
    }
    
  
    
    
    return 0;
}
