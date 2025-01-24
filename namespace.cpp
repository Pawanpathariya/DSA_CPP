//namespace 
#include<iostream>
using namespace std;

namespace cybrom{

    void show(){
        cout<<"\nshow()";
    }

    void good(){
        cout<<"\ngood()";
    }
}
using namespace cybrom;
int main(){
show();
good();
}