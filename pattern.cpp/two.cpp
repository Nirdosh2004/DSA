// *
// * *
// * * * 
// * * * *
// * * * * *


#include<iostream>
using namespace std;

inline void print(int n){

    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}

int main(){

    int n;
    cout<<"Enter value : ";
    cin>>n;
    print(n);
    return 0;
}