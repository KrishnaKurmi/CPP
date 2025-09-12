#include<iostream>
#include<unordered_map>
using namespace std;

int main(){
    unordered_map<string, int>frequency;
    string text,word="";
    text = "hello coding world hello world hello i'm coding";
    for(auto ch : text){
        if(ch == ' '){
            if(!word.empty()){
                frequency[word]++;
                word = "";
            }
        }
        else{
            word += ch;
        }
    }
    if(!word.empty()){
        frequency[word]++;
    }
    cout<<"The Words and their frequency is : "<<endl;
    for(auto pair : frequency){
        cout<<pair.first<<" -> "<<pair.second<<endl;
    }
}
