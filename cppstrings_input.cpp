#include<iostream>
#include<string>
using namespace std;
int main(void){
    //Type 1   ----------Using std::cin -------------
    string s1;
    cin>>s1;//Takes input till first whitespace,tab,newline
    cout<<"Type 1: "+s1<<endl;
    //cin manages a Dynamic Buffer (heap)
    //Type 2  -----------Using std::getline-----------
    string s2;
    getline(cin,s2,',');// getline(cin,base_string <char>,char delim) Here delim is char ','
    //getline reads entire line including tabs and spaces . '\n' is the only string terminator 
    cout<<"Type 2: "+s2<<endl;
    //Type 3 -------------mixing cin & getline----------
    string s3;
    int x;
    cin>>x;
    //std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    cin.ignore();//Flush leftover '\n' from the input buffer
    cin>>s3;
    cout<<"Type 3: "<<x<<+' '<<s3+" -> Mixed with cin & getline"<<endl;
    //Type 4 ------------------Characterwise input using get()--> member function of std::istream class
    string s4;
    char ch;
    cin.ignore();//There was a terminator '\n' within input buffer
    while(cin.get(ch) && ch != '\n'){
        s4.push_back(ch);
    }
    cout<<"Type 4: "+s4<<endl;
    return 0;
}