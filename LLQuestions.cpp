#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;

    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};

class LinkedList{
    public:
    Node* head;

    LinkedList(){
        this->head=NULL;
    }

    void insertAtEnd(int val){
        Node* newNode = new Node(val);
        if(head == NULL){
            head = newNode;
            return;
        }

        Node* temp = head;
        while(temp->next != NULL){
            temp = temp->next;
        }

        // reached to the last node:
        temp->next = newNode;
    }

    void display(){
        Node* temp = head;
        while(temp != NULL){
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }
};

// Q1.  Delete alternate elements in a LL starting from position -> 2 :
 
 void DeleteAlternate(Node* &head){
    Node* temp = head;
    while(temp != NULL){
        Node* deletNode = temp->next;
        temp->next = temp->next->next;
        free(deletNode);
        temp = temp->next;
    }
 }



int main(){

    LinkedList ll;
    ll.insertAtEnd(4);
    ll.insertAtEnd(5);
    ll.insertAtEnd(9);
    ll.insertAtEnd(7);
    ll.insertAtEnd(3);
    ll.insertAtEnd(11);
    ll.insertAtEnd(19);
    ll.insertAtEnd(27);

    ll.display();
  
    cout << "Q1. " <<endl;
    DeleteAlternate(ll.head);
    ll.display();

}