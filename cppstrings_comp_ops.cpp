#include<iostream>
#include<string>
using namespace std;
int main(void){
    string s1 = {"Hello"};
    string s2 = ("World");
    //--------------Comparison Operators(Based on ASCII comparison)----------------------
    cout<<"Equality operator: "<<(s1==s2);
    cout<<"Less than: "<<(s1<s2);
    cout<<"Greater than: "<<(s1>s2);
    cout<<"Less equalto: "<< (s1<=s2);
    cout<<"Greater equalto:"<< (s1>=s2);
}