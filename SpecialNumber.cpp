#include<iostream>
using namespace std;
int isSpecial(int num){
    int product=1, digit, sum=0;
    while(num!=0){
        digit=num%10;
        product*=digit;
        sum+=digit;
        num/=10;
    }
    return sum+product;
}
int main(){
    int num,result;
    cout<<"Enter a Number : ";
    cin>>num;
    if(num==isSpecial(num))
        cout<<num<<" is a Special Number."<<endl;
    else
        cout<<num<<" is not a Special Number."<<endl;
    return 0;
}
