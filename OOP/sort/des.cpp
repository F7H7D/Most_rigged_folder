#include <iostream>
#include <algorithm>
#include <vector>
#include <functional>
using namespace std;


int main (){
    vector<int> numbers = {42, 7, 19, 3, 25, 11};
    sort(numbers.begin(),numbers.end(),greater<int>());

    for(int i : numbers){
        cout << i << " ";
    }
    cout << endl;



    return 0;
}