//counting number of occurence using hashArray 

#include<bits/stdc++.h>
#include<vector>
using namespace std;

int main(){
    
    //input of size of array 
    int size;
    cout<<"Enter size of array : ";
    cin>>size;
    
    //taking elements input for array 
    int arr[size];
    cout<<"Enter elements of array  : \n";
    int i=0;
    while(i<size){
        cin>>arr[i];
        i++;
    }
    
    //hash array for storing the occurence of each number if it's size<=13
    
    int hash[13] = {0};
    for(i=0;i<size;i++){
        hash[arr[i]] += 1;
    }
    
    //asking for how many numbers you want to search 
    int forHowManyNumbers;
    cout<<"Enter for how many numbers you want to seach the occurence : ";
    cin>>forHowManyNumbers;
    
    //running a  loop for the given above number 
    while(forHowManyNumbers--){
        int number;
        cout<<"Enter number to find its occurence : ";
        cin>>number;
        //printing occurence of given number
        cout<<"occurence of given "<<number<<" is -> "<<hash[number]<<endl;
        
    }
    
    return 0;
}
