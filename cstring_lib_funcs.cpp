#include<iostream>
#include<cstring>
// #include<cstd
using namespace std;
int main(void){
    char *ch = (char*)malloc(10*sizeof(char));//ch stored in stack and whole char []
    cin.getline(ch,10,',');//dynamically manages the memory of the std::string object.(member function)
    //cin.getline(char_array, size); This is a member function of input stream objects (like cin) used to read a stream of characters into a C-style character array (C string)
    cout<<ch;
    //All the Cstring library functions are applicable
    return 0;
}