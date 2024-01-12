//print numbers from 0 to 7 using recursion 

#include<bits/stdc++.h>
#include<vector>
using namespace std;

void fn( int count){
    if(count==8)
    return ;
    cout<<count<<endl;
    count++;
    fn(count);
}

int main(){
    int count = 0;
    fn(count);
}
