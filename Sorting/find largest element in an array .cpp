//find largest element in an array 
// TC = O(n)

#include<bits/stdc++.h>
#include<vector>
using namespace std;

inline int findLargestElement(int arr[] , int n){
    int max = arr[0];
    for(int i=1;i<n;i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }
    return max;
}

int main(){
    
    int n;
    cout<<"Enter size of array : ";
    cin>>n;
    
    int arr[n];
    cout<<"Enter elements of array :\n ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    int ans = findLargestElement(arr , n);
    cout<<"largest element is : "<<ans;
    
    return 0;
}
