#include<iostream>
using namespace std;

template<typename cybrom>
cybrom sum(cybrom a, cybrom b){
    cout<<a+b;
}

int main(){
    sum(5,7);
}