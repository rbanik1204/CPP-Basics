#include<iostream>
#include<string>
using namespace std;
int main(void){
    //Type 1   ----------Using std::cin -------------
    string s1;
    cin>>s1;//Takes input till first whitespace,tab,newline
    //cin manages a Dynamic Buffer (heap)
    //Type 2  -----------Using std::getline-----------
    string s2;
    getline(cin,s2,',');// getline(cin,base_string <char>,char delim)
    //getline reads entire line including tabs and spaces . '\n' is the only string terminator 
    //Type 3 -------------mixing cin & getline---------
    string s3;
    int x;
    return 0;
}