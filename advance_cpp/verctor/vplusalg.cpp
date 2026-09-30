#include <iostream>
#include <vector>
#include <algorithm>


int main(){
    std::vector<int> v = {45, 12, 89, 3, 67, 21};

    std::sort(v.rbegin(),v.rend());

    for (std::size_t i = 0; i < v.size(); i++){
        std::cout << v[i] << std::endl;
    }

    return 0;
}