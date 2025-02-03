#include<iostream>
using namespace std;
#include <vector>
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
cout<<"Vector is \n";
for(auto p:v){
    cout<<p<<" ";
}
}