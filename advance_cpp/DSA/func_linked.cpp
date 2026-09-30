#include <iostream>
using namespace std;


struct node{
    int data;
    node* next;
};

node* cnode(int data){
    node* temp = new node;
    temp->data = data;
    temp->next = nullptr;
    return temp;
}

int main(){
    node* a = cnode(19);
    node* b = cnode(49);

    a->next = b;
    b->next = nullptr;

        node* temp = a;

    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }


    return 0;
}