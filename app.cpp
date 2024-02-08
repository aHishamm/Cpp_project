#include <iostream> 
using namespace std; 
int multiply(int x, int y); 
int factorial(int x); 
int main(){


    cout << multiply(3,4) << "\n"; 
    cout << factorial(2) << "\n"; 

    return 0;
}
int multiply(int x, int y){

    return x * y; 
}
int factorial(int x){ 
    if(x < 2){ 
        return 1; 
    }
    else{
        return x * factorial(x-1);
    }
}