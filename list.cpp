#include<iostream>
using namespace std;
#include<list>
int main(){
    //in list insert and delete happend from both side front and back
    list<int>l1;
    l1.push_back(10);
    l1.push_back(20);
    l1.push_back(30);
    l1.push_front(5);
    l1.pop_back();
    l1.pop_front();
    for(auto p:l1){
        cout<<p<<" ";
    }
}