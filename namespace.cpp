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


    namespace newcity{
        void student(){
            cout<<"\n student ";
        }
    }
}
using namespace cybrom;
using namespace cybrom::newcity;
int main(){
// show();
// good();
student();
course<string> obj;
obj.input("Pawan");
cout<<obj.show();


bplcout.bhopal();
}