//reverse an array using recursion 

#include<bits/stdc++.h>
#include<vector>
using namespace std;

inline void reverse(int l , int arr[] , int r){
    if(l>=r/2)
    return ;
    swap(arr[l] , arr[r-l-1]);  //using swap fn 
    reverse(l+1 , arr , r);
}

int main(){
    int size;
    cout<<"Enter size of array : ";
    cin>>size;
    int arr[size];
    cout<<"Enter elements of array : \n";
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    reverse(0 , arr , size);
    
    cout<<"reversed elements of array : \n";
    for(int i=0;i<size;i++){
        cout<<arr[i]<<"  ";
    }
    
    return 0;
}
