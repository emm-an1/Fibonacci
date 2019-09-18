#include <iostream>

long int f(int x) {
    if ((x==0) | (x==1)) {
        return 1;
    } else {
        return f(x-1)+f(x-2);
    }
}
int main() {
    int N;
    std::cout << "Enter a number: ";
    std::cin >> N;
    int i{0};
    while(i < N) {
        std::cout << " " << f(i);
        i++;
    }
    return 0;

}
