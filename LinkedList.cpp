#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;

    Node(int num){
        this->data = num;
        this->next = NULL;
    }
};


                              // INSERTION OPERATION :
void inserAtHead(Node* &head, int num){
    Node* newNode = new Node(num);
    newNode->next = head;
    head = newNode;
}

void insertAtTail(Node* &head, int val){
    Node* newNode = new Node(val);
    Node* temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }

    temp->next = newNode;

}

void insertAtRandom(Node* &head, int val, int position){
    Node* newNode = new Node(val);
    int count = 0;
    Node* temp = head;
    if(position == 0){
        inserAtHead(head,val);
        return;
    }
    while(count != position-1){
        temp = temp->next;
        count++;
    }

    newNode->next = temp->next;
    temp->next = newNode;

}


                  // Deletion Operation in LL:
void deleteAtHead(Node* &head){
    Node* temp = head;
    head = temp->next;
    free(temp);

}

void deleteAtRandom(Node* &head, int position){
    Node* temp = head;
    int count = 0;
    while(count != position-1){
        temp = temp->next;
        count++;
    }
   
    Node* deleteNode = temp->next;
    temp->next = temp->next->next;
    free(deleteNode);


}

void deleteAtEnd(Node* &head){
    Node* temp = head;
    while(temp->next->next != NULL){
        temp = temp->next;
    }
    // we have reached till 2nd last node;

    
    Node* DeletelastNode = temp->next;
    temp->next = temp->next->next;

    free(DeletelastNode);
}
          
                         
                          // Display/Print LinkedList :
void display(Node* &head){
    Node* temp = head;
    while(temp != NULL){
        cout << temp->data << "->" ;
        temp = temp->next;
    }
    cout << "NULL" << endl;


}


  // main function :
int main(){

    Node* head = NULL;   

    inserAtHead(head,4);
    display(head);

    inserAtHead(head,6);
    display(head);

    inserAtHead(head,7);
    display(head);

    inserAtHead(head,11);
    display(head);

    
    inserAtHead(head,101);
    display(head);

    cout << endl;
    insertAtTail(head,30);
    display(head);
    cout << endl;

    cout << "now :" << endl;
    insertAtRandom(head,1000,0);
    display(head);
    

    cout << "now: " << endl;
    deleteAtHead(head);
    display(head);

    cout << "now: " << endl;
    deleteAtHead(head);
    display(head);
    
    cout << "now :" << endl;
    deleteAtRandom(head,2);
    display(head);

    cout << "delete last node: " << endl;
    deleteAtEnd(head);
    display(head);

    cout << "delete last node: " << endl;
    deleteAtEnd(head);
    display(head);

}