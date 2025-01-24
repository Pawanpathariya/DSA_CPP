#include<iostream>
using namespace std;

namespace cybrom{
template<typename cybrom>
class course{
    cybrom name;
  public:
   void input(cybrom n){
      name=n;
  }

void show(){
    cout<<name;
}
};
}
using namespace cybrom;
int main(){
course<string> obj;
obj.input("Pawan");
obj.show();


}