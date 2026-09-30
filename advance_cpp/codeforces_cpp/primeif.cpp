#include <iostream>
using namespace std;

bool isprime(int x){
    if (x < 2){
        return false;}

    for(int i = 2; i < x; i++)
    {
            if (x % i == 0){
                return false;
                break;
            }
    }
    
    return true;
}

int main(){
    int a,b;
    cin >> a >> b;

    int next = a + 1;


    while (!isprime(next)){
        next ++;
    }

    if(isprime(a) && next == b){
        cout << "YES"<< endl;
    }
    else{
        cout << "NO"<< endl;
    }




    return 0;
}