#include<iostream>
using namespace std;
class Human{
    public:
    int height;
    int weight;
    int age;
};

class Male : public Human{
    public:
    void print(){
        cout << "hey! " << endl;
    }


};

int main(){

    Male m1;
    cout << m1.age << endl;
    cout << m1.height << endl;
    cout << m1.weight << endl;
    m1.print();

}