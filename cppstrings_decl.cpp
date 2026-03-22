#include<iostream>
#include<string.h>
using namespace std;
int main(void){
    //--------------------------Declarations-----------------------------******
    //Type 1
    string s1 = "Hello World";
    cout<<"Type 1: "+s1<<endl;
    //Type 2
    string s2 = ("Hello");
    cout<<"Type 2: "+s2<<endl;
    //Type 3
    string s3 = {"World"};
    cout<<"Type 3: "+s3<<endl;
    //Type 4
    string s4("How are you");
    cout<<"Type 4: "+s4<<endl;
    //Type 5 ---Duplication------------------------------
    string s5{s4};
    cout<<"Type 5: "+s5+" -->Duplicated"<<endl;
    //Type 6 -------iterating same character--------------
    string s6(5,'A');
    cout<<"Type 6: "+s6<<endl;
    //Type 7 -----------subtring using index--------------
    string s7{s5,3};  //base_string<char> template as well as it accepts C style string literals
    cout<<"Type 7: "+s7+" --> INDEXED substring"<<endl;
    //Type 8 -----------USING LENGTH----------------------
    string s8 = {"C type String Literal",5};
    cout<<"Type 8: "+s8<<endl;
    //'+' concatenation only works between string n string OR string n C style string literal
    return 0;
}