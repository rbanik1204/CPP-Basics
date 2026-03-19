#include<iostream>
#include<vector>
#include<utility>
using namespace std;
int main(void){
    vector<pair <int, string>> studentData = {{1,"Alen"},{2,"Alis"}};
    studentData.resize(3);
    studentData[2] = {3,"Ratul"};
    // for(vector<pair<int, string>>:: iterator it = studentData.begin();it!=studentData.end();){
    //     cout<<(*it).first<<' '<<(*it).second<<endl;
    //     it++;
    // }
    cout<<studentData[2].first<<studentData[2].second;
}