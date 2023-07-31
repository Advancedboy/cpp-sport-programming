#include <iostream> // В этой задаче требуется поделить два числа, а результат округлить до целых по правилам округления в текущей версии языка C++.
#include <cmath>
int main() {
    double a, b;
    std::cin >> a >> b;
    std::cout << std::round(a / b) << std::endl;
    return 0;
}
