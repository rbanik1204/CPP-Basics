#include<iostream>
#include <vector>
using namespace std;
int main(void){
    vector <int> arr = {1,2,3};
    // for(auto i:arr){//Datatype Inference by auto keyword
    //     cout<<i<<endl;
    // }
    // return 0;
    for(auto ch:"abcd")
        cout<<ch;
}