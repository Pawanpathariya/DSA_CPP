#include<iostream>
using namespace std;
#include <array>
int main(){

    array<int ,6>b{11,2,3,1,5,6};
//     cout<<"size="<<b.size()<<" \n";
//     for(int i=0;i<b.size();i++){
//         cout<<b[i]<<"\t";
//     }

// cout<<endl;
//     for(int j=0;j<9;j++){
//         cout<<b.at(j)<<"\t";
//     }

array<string,3>str{"gh","hi","hh"};
for(auto p:b){
    cout<<p<<"\t";
}

cout<<"\n";
for(auto p:str){
    cout<<p<<"\t";
}


}