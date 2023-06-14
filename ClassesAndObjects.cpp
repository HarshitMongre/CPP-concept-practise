#include<iostream>
using namespace std;
class Hero{
   
    int hp;
    char rank;
    // default constructor :
    public:
    Hero(){
        cout << "constructor is called " << endl;
    }

    // SETTER AND GETTER :
    // Setter ->
    int setHp(int hp){
        this->hp = hp;
    }

    void setRank(char rank){
        this->rank = rank;
    }
    
    // Getter ->
    int getHP(){
        return hp;
    }

    char getRank(){
        return rank;
    }



   // Parameterized Constructor :
   Hero(int hp, char rank){
    this->hp = hp;
    this->rank = rank;
   }


};
int main(){
               // Static Allocation :
    Hero h1;
    // ACcessing private data members using setter and getter :
    h1.setHp(23);
    h1.setRank('A');

    cout << h1.getHP() << endl;  //23
    cout << h1.getRank() << endl;  // A

            // Dyanmic allocation of object :
    Hero *h2 = new Hero;

    h2->setHp(23);
    h2->setRank('A');

    cout << "hp :" <<  h2->getHP() << endl; 
    cout << "rank : " <<  h2->getRank() << endl;


              // parameterized constructor :
    Hero h3(23,'A');


        // copy constructor :
    cout << "copy constriuctor " << endl;
    Hero h5(h1);

    cout << h5.getHP() << endl;  //23
    cout << h5.getRank() << endl;  // A


}