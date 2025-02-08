#include<iostream>
using namespace std;
#include<forward_list>
int main(){
forward_list<int>f1;
f1.push_front(1);
f1.push_front(2);
f1.push_front(3);
f1.push_front(4);
f1.push_front(1);
f1.push_front(2);
for(auto p:f1){
    cout<<p<<" ";
}

cout<<"\nUnique\n";
f1.sort();
f1.unique();
for(auto p:f1){
    cout<<p<<" ";
}
}