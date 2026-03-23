#include<iostream>
#include<string>
using namespace std;
int main(void){
    string alphabets {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
    string keys {"ZYXWVUTSRQPONMLKJIHGFEDCBAzyxwvutsrqponmlkjihgfedcba"};
    string message,encrypted {""},decrypted {""};

    cout<<"Enter your message:";
    getline(cin, message);
    cout<<"encrypting ..."<<endl;
    cout<<"Encrypted message:";
    string :: iterator it;
    int index;
    for(auto it=message.begin();it!=message.end();){
        index = alphabets.find(*it);
        if(index != string::npos)
            encrypted+=keys[index];
        else
            encrypted+=*it;
        it++;
    }
    cout<<encrypted;
    return 0;
}