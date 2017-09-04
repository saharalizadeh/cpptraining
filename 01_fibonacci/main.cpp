#include <iostream>

using namespace std;

int fibonachi (int n);

int main() {
    int n = 0;

    std::cout << "Give me a number" << std::endl;
    std::cin >> n;
    int x = fibonachi(n);

    std::cout << x << std::endl;
    return 0;

}


int fibonachi (int n) {
    if(n==1) {
        return 1;
    }
    if ( n == 0) {
        return 0;
    }

    return fibonachi(n-1) + fibonachi(n-2);
}