#include <iostream>
#include <vector>
#include <algorithm>



int main (){
    std::vector<int>  v = {12, 7, 25, 3, 18};
    int sum = 0;
    for (int&  x : v){
        sum+=x;
    }
    std::cout << sum << std::endl;

    return 0;
}