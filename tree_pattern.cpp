#include<iostream>
using std::cout;
using std::cin;
using std::endl;
int main(void){
    for(int i=0;i<5;i++){
        for(int k=5;k>i;k--){
            cout<<' ';
        }
        for(int j=0;j<=i;j++){
            cout<<'*';
        }
        for(int k=5;k>i;k--){
            cout<<' ';
        }
        cout<<endl;
    }
}