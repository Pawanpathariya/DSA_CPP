#include<iostream>
using namespace std;

void insrt(int arr[],int n){
    for(int i=1;i<n;i++){
        int key=i;
        while ((key>0 && arr[key-1]>arr[key]))
        {
            int temp=arr[key-1];
            arr[key-1]=arr[key];
            arr[key]=temp;
            key--;
        }
    }
}
int main(){
int arr[]={3,1,4,2,6};
cout<<"Before sorting"<<endl;
for(int i=0;i<5;i++){
cout<<arr[i]<<" ";
}
insrt(arr,5);
cout<<"\nAfter sorting"<<endl;
for(int i=0;i<5;i++){
cout<<arr[i]<<" ";
}


}