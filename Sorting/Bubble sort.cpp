//bubble sort
//compare alternate elements and sort them 
// TC = O(n^2)

#include<bits/stdc++.h>
#include<vector>
using namespace std;


inline void bubble_sort(int arr[] , int n){
    for(int i=n-1;i>=0;i--){
        for(int j=0;j<=i-1;j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}
    

int main(){
    
    int n;
    cout<<"Enter n : ";
    cin>>n;
    
    int arr[n];
    cout<<"Enter elements of array :\n ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    bubble_sort(arr , n);
    cout<<"Sorted array : \n";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<"  ";
    }
    
    
    return 0;
}
