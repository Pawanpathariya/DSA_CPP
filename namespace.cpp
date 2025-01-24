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

void show(){
    cout<<name;
}
};


//     class bplstream{
//    public:
//    void bhopal(){
//     cout<<"\n Bhopal ";
//    }

//     }bplcout;


    // namespace newcity{
    //     void student(){
    //         cout<<"\n student ";
    //     }
    // }
}
using namespace cybrom;
// using namespace cybrom::newcity;
int main(){
// show();
// good();
//student();
//bplcout.bhopal();

cybrom:: course<string> obj;
obj.input("Pawan");
obj.show();


}