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
    getline(cin,s2,',');// getline(cin,base_string <char>,char delim) Here delim is char ','
    //getline reads entire line including tabs and spaces . '\n' is the only string terminator 
    //Type 3 -------------mixing cin & getline----------
    string s3;
    int x;
    cin>>x;
    //std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    cin.ignore();//Flush leftover '\n' from the input buffer
    cin>>s3;
    cout<<"Type 3: "+s3+" -> Mixed with cin & getline";
    //Type 4 ------------------Characterwise input using get()--> member function of std::istream class
    string s4;
    char ch;
    while(cin.get(ch) && ch != '\n'){
        s4.push_back(ch);
    }
    cout<<s4;
    return 0;
}