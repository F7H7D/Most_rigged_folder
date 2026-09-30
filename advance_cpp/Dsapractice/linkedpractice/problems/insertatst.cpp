#include <iostream>
using namespace std;

struct node{
    int data;
    node* next;
};

node* constructnode(int data){
    node* temp = new node;
    temp -> data = data;
    temp -> next = nullptr;
    return temp;
}

int main(){
    node* a = constructnode(20);
    node* b = constructnode(40);
    node* c = constructnode(60);
    node* d = constructnode(80);

    a->next = b;
    b->next = c;
    c->next = d;
    d->next = nullptr;

    node* nwnode = constructnode(10);

    nwnode->next = a;

    node* temp = nwnode;

    while(temp != nullptr){
        cout << temp->data <<endl;
        temp = temp->next;
    }



    return 0;
}