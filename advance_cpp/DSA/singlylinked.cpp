#include <iostream>
using namespace std;


struct node{
    int data;
    node* next;
};

int main(){
    node* first = new node;
    node* second = new node;
    first -> data = 20;
    second ->data = 40;
    first ->next = second;
    second ->next = nullptr;

    cout << first << endl;/*this and the line after this address to the location of them */
    cout << first->next << endl;
    cout << first -> data << endl;/*this and the line after this gives the data in the node*/
    cout << first -> next -> data << endl;
}