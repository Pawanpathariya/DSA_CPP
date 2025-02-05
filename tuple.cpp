#include<iostream>
#include<tuple>
using namespace std;
int main(){
    //we can create multiple colomn with help of tuple
    tuple<int,string,int> t(1,"pawan",21);

    t=make_tuple(2,"sumit",21);
    cout<<get<0>(t)<<" ";
    cout<<get<1>(t)<<" ";
    cout<<get<2>(t)<<" ";
}