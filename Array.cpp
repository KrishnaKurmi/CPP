#include<iostream>
using namespace std;

int main(){
    int arr[5];
    int num = 1;
    cout<<"Enter array elements : "<<endl;
    for(int i=0;i<5;i++){
        cout<<num++<<" element : ";
        cin>>arr[i];
    }
    cout<<"The array elements are : ";
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
}
