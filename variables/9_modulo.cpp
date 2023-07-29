#include <iostream> //В этой задаче требуется найти остаток от деления числа aaa на число bbb. 

using namespace std;

int main() {
	long long a, b, mod;
    cin >> a >> b;
    cout << (a % b + b)% b << endl;
}
