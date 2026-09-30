#include <iostream>
using namespace std;


struct node{
    int data;
    node* next;
    node* previous;
};

int main(){
    node* first = new node;
    node* second = new node;
    node* third = new node;

    first ->data = 19;
    second -> data = 30;
    third -> data = 39;

    first ->previous = nullptr;
    first ->next = second;
    second ->previous = first;
    second -> next = third;
    third -> previous = second;
    third -> next = nullptr;


    cout << first << endl;
    cout << first->previous << endl;
    cout << first -> next << endl;
    cout << second -> previous << endl;
    cout << second -> next << endl;
    cout << third -> previous << endl;
    cout << third -> next << endl;


    cout << first->data << endl;
    cout << first -> next -> data << endl;
    cout << second -> next -> data << endl;
    cout << third -> next -> data << endl;
}