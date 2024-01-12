//print sum of first n numbers

#include<bits/stdc++.h>
#include<vector>
using namespace std;


inline int sumOfNnumbers(int n ){
  if(n==0)return 0;
  return n + sumOfNnumbers(n-1);
}

int main(){
   
    int n;
    cout<<"Enter value for n : ";
    cin>>n;
    cout<<sumOfNnumbers( n );
}
 //OR

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
