//print sum of first n numbers

#include<bits/stdc++.h>
#include<vector>
using namespace std;

 int sum = 0; //global declaration

inline int sumOfNnumbers(int i ,int n ){
   if(n<i)
   return i ;
   sum += n;
   sumOfNnumbers(i,--n); //pre-decrement
   return sum;
}

int main(){
   
    int n;
    cout<<"Enter value for n : ";
    cin>>n;
    cout<<sumOfNnumbers(1 , n );
}
