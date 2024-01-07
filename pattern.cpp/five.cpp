// * * * * * 
// * * * * 
// * * * 
// * * 
// * 

#include<iostream>
using namespace std;
void print(int n)
{
    for(int i=1;i<=n;i++){
        for(int j=5;j>=i;j--){
            cout<<"* ";
        }
        cout<<endl;
        
    }
    
} 
int main(){
    int n;
    cout<<"Enter value of n : ";
    cin>>n;
    print(n);

    return 0;
}
