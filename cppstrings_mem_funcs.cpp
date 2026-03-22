#include<iostream>
#include<string>
using namespace std;
int main(void){
    string s1 = {"Hello world"};
    string::iterator it;

    for(auto it=s1.begin();it!=s1.end();){
        cout<<*it;
        it++;
    }
    cout<<endl;
    //--------------------Modification---------------------------------
    s1 += " : Our first coding line";
    cout<<"After appending to s1: "+s1<<endl;
    //--------------------------size & capacity member functions of string class---------------------
    cout<<"size of s1: "+s1.size()<<endl;
    cout<<"maximum size of s1: "+s1.max_size()<<endl;
    cout<<"length of string s1: "+s1.length()<<endl;
    cout<<"capacity of string s1: "+s1.capacity()<<endl;
    //---------------------substr(index,length)-----------------------------------
    cout<<"Substring from index 5 : "+s1.substr(5,10)<<endl;
    //---------------------insert(index,string)-----------------------------------
    string s2 = "substring";
    cout<<s1.insert(5,s2);//Allows both cstyle and cppstrings
    //------------------------find(substring,index(optional))---------------------
    cout<<"Occurrence of \"our\" at "+s1.find("our");//gives first occurrence
    return 0;
}