#include <iostream>

int main (){
    int x;
    std::cin >> x ;
    int count = 0;
    while(x--){
    int op = 0;
    int a,b,c;
    std::cin >> a >> b >> c;
    op = a+b+c;
    if (op >= 2) {
        count += 1;
    }
}
    std::cout << count << std::endl;
    return 0;
}