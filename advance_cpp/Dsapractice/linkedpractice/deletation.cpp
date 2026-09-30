#include <iostream>
using namespace std;


struct node{
    int data;
    node* next;
};

int main(){
    node* a = new node;
    node* b = new node;
    node* c = new node;
    node* d = new node;
    node* e = new node;
    node* insertnum = new node;
    a->data = 100;
    b->data = 20;
    insertnum->data = 30;
    c -> data = 40;
    d -> data = 60;
    e -> data = 80;
    a->next = b;
    b->next = insertnum;
    insertnum ->next = c;
    c->next = d;
    d->next = e;
    e->next = nullptr;
    b->next = c;// here i broke the sequence and deleted the awated ass.
    delete insertnum;

    node* temp = a;
    while(temp != nullptr){
        cout << temp->data << endl;
        temp = temp->next;
    }

    return 0;
}