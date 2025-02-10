#include <iostream>
using namespace std;
#include<forward_list>
int main(){

    forward_list<int>f1{3,5,6,4,5};
    forward_list<int>f2{13,15,16,14,15};

    for(auto p:f1){
        cout<<p<<" ";
    }
    cout<<endl;
    for(auto p:f2){
        cout<<p<<" ";
    }
cout<<"\nAfter merging"<<endl;
f1.sort();
f2.sort();
f1.merge(f2);
for(auto p:f1){
    cout<<p<<" ";
}
}