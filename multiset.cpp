#include<iostream>
using namespace std;
#include<set>
int main(){

    multiset<int> s;
    s.insert(5);
    s.insert(4);
    s.insert(1);
    s.insert(3);
    s.insert(2);
    s.insert(1);


    for(auto p:s){
        cout<<p<<" ";
    }
}