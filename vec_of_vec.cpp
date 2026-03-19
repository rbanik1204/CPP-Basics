#include<iostream>
#include<vector>
using namespace std;
int main(void){
    vector<vector<int>> v;
    int m,n;
    cout<<"Enter Number of Rows:";
    cin>>m;
    vector <int> temp;
    for(int i=0;i<m;i++){
        cout<<"Enter Number of "<<i<<" Row Columns:";
        cin>>n;
        temp.resize(n);//n numbe of elements inittialized with zero
        for(int j=0;j<n;j++){
            cin>>temp[i];
        }
        v.emplace_back(temp);
    }
    for(vector<vector<int>>::iterator it=v.begin();it!=v.end();){
        for(int j=0;j<(*it).size();j++){
            cout<<(*it)[j]<<' ';
        }
        cout<<'\n';
        it++;
    }
}