#include <iostream>
#include <vector>



int main(){
    std::vector<int> d;
    int a,b,c,e,f;

    std::cin >> a >> b >> c >> e >> f;

    d.push_back(a);
    d.push_back(b);
    d.push_back(c);
    d.push_back(e);
    d.push_back(f);

    for (int i = 0 ; i < d.size() ; i++){
        std::cout << d[i] << std::endl;
    }





    return 0;
}