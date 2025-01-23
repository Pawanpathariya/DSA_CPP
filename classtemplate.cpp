//class template with constructor
// #include<iostream>
// using namespace std;
// template<typename cybrom>
// class course{
//     cybrom name;
//   public:
//    course(cybrom n){
//       name=n;
//   }

// cybrom show(){
//     return name;
// }
// };
// int main(){
// course <string>obj("Pawan");
// cout<<obj.show();
// }


//class template without constructor

#include<iostream>
using namespace std;
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
int main(){
course <string> obj;
obj.input("Pawan");
cout << obj.show();
}
