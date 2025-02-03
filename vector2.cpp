#include<iostream>
using namespace std;
#include <vector>
#include <iterator>
int main(){
vector<int>v;
int sizes,n;
cout<<"Enter size of vector \n";
cin>>sizes;
for(int i=0;i<sizes;i++){
    cout<<"Enter elements of vector at index "<<i<<"\n";
    cin>>n;
    v.push_back(n);
}
cout<<"Result : \n";
for(auto p:v){
    cout<<p<<" ";
}


vector<int>::iterator it=v.begin();
v.erase(it);
cout<<"\nResult after delete : \n";
for(auto p:v){
    cout<<p<<" ";
}
v.erase(it+1);
cout<<"\nResult after delete : \n";
for(auto p:v){
    cout<<p<<" ";
}



cout<<"\nResult after insert : \n";
v.insert(it+1,20);
for(auto p:v){
    cout<<p<<" ";
}


}