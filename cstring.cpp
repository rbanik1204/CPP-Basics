#include<iostream>
#include<cstring>
// #include<cstd
using namespace std;
int main(void){
    char *ch = (char*)malloc(10*sizeof(char));
    cin.getline(ch,10);
    cout<<ch;
    return 0;
}