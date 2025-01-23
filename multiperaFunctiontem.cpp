#include<iostream>
using namespace std;
template<typename c1,typename c2>
c1 sum(c1 a,c2 b){
    return a+b;
}

int main(){
    cout<<"sum is "<<sum(7.5,8);
}