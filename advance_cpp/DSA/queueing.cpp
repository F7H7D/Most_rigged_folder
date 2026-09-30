#include <iostream>
#include <string>
#include <queue>
using namespace std;

int main(){
    queue<string> market;

    market.push("Fahad");
    market.push("hossain");
    market.push("jonayed");

    string a = market.front();
    string b = market.back();
    cout <<"front: " << a <<"--back: "<< b << endl;

    auto t = market.empty();

    cout << t << endl;
    while (!market.empty()){
        cout << market.front() << endl;
        market.pop();
    }



    return 0;
}