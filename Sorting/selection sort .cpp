//selection sort 
//select minimum -> swap -> repeat
//TC  - O(n^2)


#include<bits/stdc++.h>
#include<vector>
using namespace std;


inline void selection_sort(int arr[] , int n){
for(int i = 0 ;i <n-1;i++){ //TC = n
        int mini = i;
        for(int j = i;j<n;j++){ //TC = n*(n+1)/2
            if(arr[j]<arr[mini]){
                mini = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[mini];
        arr[mini] = temp;
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
    selection_sort(arr , n);
    cout<<"Sorted array : \n";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<"  ";
    }
    
    
    return 0;
}
