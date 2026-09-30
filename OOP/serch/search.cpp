#include <iostream>

using namespace std;

int main (){    
    int numbers[8] ={12, 7, 25, 3, 18, 9, 31, 5};

    int num ;
    cout << "Enter number: ";
    cin >> num ;

    for (int x : numbers){
        if (x == num){
            cout << "Found" << endl;
            return 0;
        }
    }
    cout << "Not Found" << endl;
    return 0;
}