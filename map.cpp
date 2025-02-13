//1)it is a associative container , 2)it uses pair value that is key and value ,3)it display the data in sorted order 
//4)it uses self balance binary search tree concept 5)key is always unique but value can be duplicate.
//it has 3 type 1)Ordered map 2)Unordered map 3)Multimap

#include<iostream>
#include<map>
using namespace std;
int main(){
    map<int,string> m;
    m.insert({2,"Sumit"});
    m.insert({1,"Pawan"});
    m.insert({3,"Rahul"});
for(auto p:m){
    cout<<p.first<<" "<<p.second<<"\n";
}
}