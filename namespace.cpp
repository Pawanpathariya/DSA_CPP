//namespace 
#include<iostream>
using namespace std;

namespace cybrom{

    // void show(){
    //     cout<<"\nshow()";
    // }

    // void good(){
    //     cout<<"\ngood()";
    // }

template<typename cybrom>
class course{
    cybrom name;
  public:
   void input(cybrom n){
      name=n;
  }

cybrom show(){
    return name;
}
};
    class bplstream{
   public:
   void bhopal(){
    cout<<"\n Bhopal ";
   }

    }bplcout;
}
using namespace cybrom;
int main(){
// show();
// good();

course<string> obj;
obj.input("Pawan");
cout<<obj.show();


bplcout.bhopal();
}