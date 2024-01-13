// count the occerence of letters in string by using map

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
    
    while(size--){
        int number;
        cout<<"Enter number :";
        cin>>number;
        //printing 
        cout<<"The occerence of '"<<number<<"'is -> "<<mpp[number]<<endl;
    }
    
    
    
    return 0;
}
