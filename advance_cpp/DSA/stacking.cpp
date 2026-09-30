#include <iostream>
#include <stack>
#include <string>
using namespace std;


int main(){
    stack<string> games;

    games.push("FreeFire");
    games.push("Call of Duty");
    games.push("God of War ragnarok");
    games.pop();
    cout << games.top() << endl;


    return 0;
}