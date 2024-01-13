// count the occerence of letters in string by using iterator in map 

#include<bits/stdc++.h>
#include<vector>
using namespace std;


int main(){
    int size;
    cout<<"Enter size of array : ";
    cin>>size;
    
    int arr[size];
    cout<<"Enter elements of array : \n";
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    
    map<int,int> mpp; //first data Type is for which number and second is for frequency of the number 
    for(int i=0;i<size;i++){
        mpp[arr[i]]++;
    }
    
    //using iterator
    for(auto it : mpp){
        cout<<it.first<<"  ->  "<<it.second<<endl;
    }
    
  
    
    
    return 0;
}
