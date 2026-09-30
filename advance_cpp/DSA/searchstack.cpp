#include <iostream>
#include <stack>
#include <string>
using namespace std;

int searchStack(stack<string> i,string target){
    while (!i.empty()){
        if (i.top() == target){
            return true;
        }
        i.pop();
    }
    return false;
}

int main(){

    stack<string> games;
    games.push("FreeFire");
    games.push("Call of Duty");
    games.push("God of War ragnarok");

    if(searchStack(games,"Duty")){
        cout << "we got it" << endl;
    }
    else{
        cout << "there is no args like that" << endl;
    }
}