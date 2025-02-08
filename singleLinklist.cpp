#include<iostream>
using namespace std;
#include<forward_list>
//singlle linklist and forward list 
int main(){
forward_list<int>f1;
f1.push_front(1);
f1.push_front(2);
f1.push_front(3);
f1.push_front(4);
f1.push_front(5);

int d;
cout<<"Enter number you want to delete";
cin>>d;
f1.remove(d);

for(auto p:f1){
    cout<<p<<" ";
}
/*
for(auto p:f1){
    cout<<p<<" ";
}


// for(auto it=f1.begin();it!=f1.end();it++){
// cout<<*it<<"\t";
// }

f1.pop_front();
cout<<"\nAfter Delete\n";
for(auto p:f1){
    cout<<p<<" ";
}
f1.push_front(10);
cout<<"\nAfter Insert\n";
for(auto p:f1){
    cout<<p<<" ";
    }

*/


}