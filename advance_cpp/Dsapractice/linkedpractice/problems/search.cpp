#include <iostream>
using namespace std;


struct node{
    int data;
    node* next;
};

node* cnude(int data)
{
    node* temp = new node;
    temp -> data = data;
    temp ->  next = nullptr;
    return temp;
}

int main(){
    node* a = cnude(12);
    node* b = cnude(25);
    node* c = cnude(7);
    node* d = cnude(31);
    node* e = cnude(18);

    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;
    e->next = nullptr;

    int searched = 31;

    node* temp = a;
    bool found = false;


    while(temp != nullptr){
        if(searched == temp->data){
            found = true;
        }
        temp = temp->next;
    }
    if (found){
        cout << "FOUND" << endl;
    }
    else{
        cout << "NOT FOUND" << endl;
    }


    return 0;
}