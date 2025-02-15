#include<iostream>
#include<unordered_map>
using namespace std;
int main(){
    unordered_map<int,string> m;
    m.insert({3,"rahul"});
    m.insert({1,"pawan"});
    m.insert({2,"sumit"});
    for(auto p:m){
        cout<<p.first<<" "<<p.second<<"\n";
    }
}