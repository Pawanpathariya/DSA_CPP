#include<iostream>
#include<map>
using namespace std;
int main(){
    //it support both duplicate and sorted data
multimap<int,string> m;
m.insert({1,"pawan"});
m.insert({3,"Naman"});
m.insert({2,"sumit"});
m.insert({3,"rahul"});
m.insert({1,"raman"});

for(auto p:m){
    cout<<p.first<<" "<<p.second<<"\n";
}
}