//find second largest element in an array 

#include<bits/stdc++.h>
#include<vector>
using namespace std;

inline void sorting(int arr[] , int n){
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i] > arr[j]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

inline int findSecondLargestElement(int arr[] , int n){
    
    int max = 0;
    for(int i=n-2;i>=0;i--){
        if(arr[i] < arr[n-1] && arr[i] != arr[n-1]){
            max = arr[i];
            break;
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
   sorting(arr , n);
   for(int i=0;i<n;i++){
       cout<<arr[i]<<"  ";
   }cout<<endl;
    int ans = findSecondLargestElement(arr , n);
    cout<<"Second largest element is : "<<ans;
    
    return 0;
}
