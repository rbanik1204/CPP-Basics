#include<iostream>
using namespace std;
int main(void){
    int _a = 0;//sizeof(_a) = 4
    unsigned short int a= 10;//sizeof(a) = 2 bytes
    unsigned int b = 20;//sizeof(b) = 4 bytes
    unsigned long c = 30;//sizeof(c) = 4 bytes sometimes 8
    unsigned long long int d = 40;//sizeof(d) = 8 bytes
    //Size Of Each identifier
    cout<<"Size of int datatype:"<<sizeof(int)<<endl;
    cout<<"Size of unsigned short int datatype:"<<sizeof(unsigned short int)<<endl;
    cout<<"Size of unsigned int:"<<sizeof(unsigned int)<<endl;
    cout<<"Size of unsigned long int:"<<sizeof(unsigned long int)<<endl;
    cout<<"Size of unsigend long long int:"<<sizeof(unsigned long long int)<<endl;
}