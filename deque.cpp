#include<iostream>
using namespace std;
#include<queue>
int main(){
    deque<int>d;
    d.push_back(1);
    d.push_back(2);
    d.push_front(3);
    d.push_front(4);
    
    for(auto p:d){
        cout<<p<<" ";
    }
 cout<<endl;
    d.pop_back();
    d.pop_front();
    for(auto p:d){
        cout<<p<<" ";
    }

}