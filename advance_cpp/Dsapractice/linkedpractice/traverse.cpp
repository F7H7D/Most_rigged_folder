#include <iostream>
using namespace std;

struct nudes{
    int data;
    nudes* next;
};

int main(){
    nudes* first = new nudes;
    nudes* second = new nudes;
    nudes* third = new nudes;
    nudes* fourth = new nudes;
    nudes* fifth = new nudes;

    first -> data = 15;
    second -> data = 8;
    third -> data = 23;
    fourth -> data = 42;
    fifth -> data = 7;

    first -> next = second;
    second -> next = third;
    third -> next = fourth;
    fourth -> next = fifth;
    fifth -> next = nullptr;

    nudes* temp = first;
    int i = 0;
    while(temp != nullptr){
        cout << temp->data << " ";
        temp = temp -> next;
        i++;
    }
    cout << endl;
    cout <<"Number of nodes: "<< i << endl;
}