#include<iostream>
using namespace std;
#define MAXSIZE 10
int stack[MAXSIZE], top = -1;
void push();
void pop();
void display();
void menu();
int main(){
    menu();
}
void menu(){
    int choice;
    do{
        cout<<"__________________Stack Menu_________________"<<endl;
        cout<<"1. Push\n2. Pop\n3. Display\n4. Exit"<<endl;
        cout<<"Enter the choice : ";
        cin>>choice;
        switch (choice){
        case (1):
            push();
        break;
        case (2):
            pop();
        break;
        case (3):
            display();
        break;
        case (4):
            cout<<"Press any key to exit"<<endl;
        break;
        default:
            cout<<"Invalid Choice"<<endl;
            cout<<"Exiting......"<<endl;
            return;
        break;
        }
    }
    while(choice <4 );
}
void push(){
    if (top == MAXSIZE){
    cout<<"Overflow!!"<<endl;
    }
    else{
        cout<<"Enter the element : ";
        top++;
        cin>>stack[top];
        cout<<"top = "<<top<<endl;
    }
}
void pop(){
    if (top == -1){
        cout<<"Underflow!!"<<endl;
    }
    else{
        cout<<"Popped Element is : "<<stack[top]<<endl;
        top--;
        cout<<"top = "<<top<<endl;
    }
}
void display(){
    if(top >= 0){
        cout<<"Stack elements are : "<<endl;
        for(int i=top;i>=0;i--){
            cout<<stack[i]<<endl;
        }
        cout<<"top = "<<top<<endl;
    }
    else{
        cout<<"Underflow!!"<<endl;
    }
}
