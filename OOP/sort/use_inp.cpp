#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main(){
    vector<int> numbers;

    int t;
    cout << " input size: "; 
    cin >> t;

    while (t--){
        int x;
        cin >> x;
        numbers.push_back(x);
    }   

    sort(numbers.begin(),numbers.end());
    for (int i : numbers)
    {
        cout << i << " ";
    }
        cout << endl;
    return 0;
}