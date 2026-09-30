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
    node* a = constructnode(10);
    node* b = constructnode(20);
    node* c = constructnode(40);
    node* d = constructnode(50);
    node* nwnode = constructnode(30);

    a->next = b;
    b->next = nwnode;
    c->next = d;
    d->next = nullptr;
    nwnode->next = c;
    b->next = c;
    delete nwnode;


    node* temp = a;




    while(temp != nullptr){
        cout << temp->data <<endl;
        temp = temp->next;
    }



    return 0;
}