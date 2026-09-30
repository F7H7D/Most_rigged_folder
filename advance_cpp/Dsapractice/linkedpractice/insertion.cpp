#include <iostream>
using namespace std;


struct node{
    int data;
    node* next;
};

int main(){
    node* a = new node ;
    node* b = new node ;
    node* c = new node;
    node* d = new node;
    a->data = 20;
    b->data = 40;
    c->data = 60;
    d->data = 80;
    a->next = b;
    b->next = c;
    c->next = d;
    d->next = nullptr;
    node* newnum = new node;
    newnum -> data = 100;
    newnum->next = a;
    node* temp = newnum;

    while(temp != nullptr){
        cout << temp ->data << endl;
        temp = temp->next;
    }




    return 0;
}