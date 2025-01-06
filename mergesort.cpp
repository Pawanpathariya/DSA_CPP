#include<iostream>
using namespace std;


int main() {
    int arr[]={10,7,8,9,1,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<"Before sorting "<<endl;
    for (int i=0;i<n;i++){
    cout<<arr[i]<< " ";
    }


    cout<<"\nAfter sorting "<<endl;
    for (int i=0;i<n;i++){
    cout<<arr[i]<< " ";
    }
}