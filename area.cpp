//Author: Ratul Banik
/*
    Dated: 10th march 2026
*/
#include<iostream>
#define PI 3.1415
using std::cout;
using std::endl;
int r=2;
int area(int);
class MyClass {
    public:
        int a;
        void display(){
            cout<<"Inside class MyClass"<<endl;
        }
};
int main(){
    MyClass obj;
    obj.a = 10;
    obj.display();
    int arr = area(obj.a);
    cout<<"Perimeter of Circle "<<arr;
    return 0;
}
int area(int a){
    return (2*PI*a);
}
