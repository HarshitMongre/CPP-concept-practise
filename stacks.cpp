#include<iostream>
using namespace std;
#define max 5
int arr[max];
int top = -1;

bool isempty(){
    if(top == -1){
        return true;
    }
    else{
        return false;
    }
}

bool isfull(){
    if(top == max-1){
        return true;
    }
    
    return false;
}


void push(int value){
    if(isfull()){
        cout << "can't fill";
    }
    else{
        top++;
        arr[top] = value;
    }
}


void pop(){
    if(isempty()){
        cout << "can't pop" << endl; 
    }
    else{
        int del_ele = arr[top];
        top--;
    }
}

void peek(){
    if(isempty()){
        cout << "can't peek" << endl;
    }
    else{
        cout << arr[top];
    }
}


void display(){
    if(isempty()){
        cout << "cant display" << endl;
    }
    else{
        for(int i=0; i<=top; i++){
            cout << arr[i] << " ";
        }
        cout << endl;
    }
}


int main(){

    int arr[5];
    push(5);
    push(4);
    push(45);
    push(76);
    push(23);
    display();

    pop();
    cout << "after popping : " << endl;
    display();

     pop();
    cout << "after popping : " << endl;
    display();

}