#include <iostream>
#include <string>
#include <set>
using namespace std;

int main(){
    string user;
    set<char> b;
    cin >> user;

    for(char c : user){
        b.insert(c);
    }
    int a = b.size();

    if (a % 2 == 0){
        cout << "CHAT WITH HER!" << endl;
    }
    else {
        cout << "IGNORE HIM!" << endl;
    }


    return 0;
}