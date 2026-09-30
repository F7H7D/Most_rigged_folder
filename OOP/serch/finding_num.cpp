#include <iostream>
using namespace std;


int main (){
    int numbers[7] = {15, 8, 23, 4, 19, 11, 30};

    int a;
    cout << "Input: ";
    cin >> a;

    for (int x : numbers){
        if (x == a){
            cout << "Output: Found"<<endl;
            return 0;
        }
    }
    cout << "Output: not found" << endl;


    return 0;
}