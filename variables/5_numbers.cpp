#include <iostream> // Дано натуральное четырехзначное число, необходимо поменять местами средние цифры. 

using namespace std;

int main() {
	int a, a1, a2, a3, a4;
    cin >> a;
    a1 = (a / 1000);
    a2 = (a / 100 ) - a1 * 10;
    a3 = (a / 10) - (a / 100) * 10;
    a4 = a % 10;
    cout << a1 << a3 << a2 << a4;
 }
