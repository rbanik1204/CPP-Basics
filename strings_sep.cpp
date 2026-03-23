#include<iostream>
#include<utility>
#include<string>
using namespace std;
int main(void){
    string s;
    pair <int,int> pos(0,0);
    cout<<"Type Your Full name(without spaces):";
    getline(cin,s);
    // cin.ignore();//flush '\n' from input buffer
    pos.first = s.find("Ratul");
    pos.second = s.find("Banik");
    //insert(pos," ") can also be used to insert space between lname and fname
    cout<<"space separated Name: "+s.substr(pos.first,5)+" "+s.substr(pos.second,5)<<endl;
    return 0;
}