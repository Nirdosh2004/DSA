#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter size of array : "<<endl;
    cin>>n;

    int arr[n];
    cout<<"Enter elements of array : "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Elements of array : \n";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<"    ";
    }
    cout<<endl;


    return 0;
}