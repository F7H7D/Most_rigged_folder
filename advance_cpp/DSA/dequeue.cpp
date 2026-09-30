#include <iostream>
#include <deque>
#include <string>
using namespace std;

int main(){
    deque<string> cars = {"BMW","porsche","mclaren","roll royals"};

    int sized = sizeof(cars.at(0));
    
    cout << sized << endl;



    return 0;
}