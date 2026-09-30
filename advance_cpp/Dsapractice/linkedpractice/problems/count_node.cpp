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
    node* a = constructnode(15);
    node* b = constructnode(8);
    node* c = constructnode(23);
    node* d = constructnode(42);
    node* nwnode = constructnode(7);
    node* anothernode = constructnode(19);

    a->next = b;
    b->next = c;
    c->next = d;
    d->next = nwnode;
    nwnode->next = anothernode;
    anothernode->next = nullptr;



    node* temp = a;
    int count = 0;
    while(temp != nullptr){
        cout << temp->data << " ";
        temp = temp->next;
        count++;
    }
    cout << endl;
    cout << "Number of nodes: " << count << endl;



    return 0;
}