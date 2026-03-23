#include<iostream>
using namespace std;

int main(void){
    int n;
    cout<<"Enter Height: ";
    cin>>n;
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<=i;j++){
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // } ---> Right angled triangle
    for(int i=n;i>=1;i--){
        for(int j=2*i-1;j>=0;j--)
            cout<<" ";
        for(int j=0;j<=n-i;j++)
            cout<<" * ";
        cout<<endl;
    }
}