//print name 5 times

#include<bits/stdc++.h>
#include<vector>
using namespace std;

void fn( int count){
    if(count==5)
    return ;
    cout<<"Nirdosh Kushwaha"<<endl;
    count++;
    fn(count);
}

int main(){
    int count = 0;
    fn(count);
}
