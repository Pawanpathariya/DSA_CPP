#include<iostream>
using namespace std;
#include<map>
int main(){
map<string,int>m;
int n,mob;
string name;
cout<<"enter how many records you want to enter ";
cin>>n;
for(int i=0;i<n;i++){
cout<<"Enter name ";
cin>>name;
cout<<"Enter number ";
cin>>mob;

m.insert({name,mob});
}


cout<<"result \n";
for(auto p:m){
    cout<<p.first<<" "<<p.second<<endl;
}

}