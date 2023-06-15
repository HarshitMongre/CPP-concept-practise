#include<iostream>
using namespace std;
// encapsulation - wraping up all data-members and function ->
class Hero{
    public:
    int hp;
    int rank;
    string name;
};

// fully encapsulated class:  every data-memebers are private;
class Human{
    int age;
    int salary;
};
int main(){

    Hero h1;
    cout << h1.hp << endl;
    cout << h1.rank << endl;

    Human hm;
    // cout << hm.age << endl;    --> will show error 
    // cout << hm.salary << endl;  --> will show error
}