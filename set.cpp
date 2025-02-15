//set it only store unique value and it store in sorted order
//it has 3 type 1)Ordered set 2)Unordered set 3)Multiset
#include<iostream>
using namespace std;
#include<set>
int main(){

    set<int> s;
    s.insert(5);
    s.insert(4);
    s.insert(3);
    s.insert(2);
    s.insert(1);
    s.insert(1);
    s.insert(1);

    for(auto p:s){
        cout<<p<<" ";
    }
}