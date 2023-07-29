#include <iostream> //Дано четырехзначное отрицательное число. Требуется поменять местами число десятков и сотен в нем.

using namespace std;

int main() {
	short int a, a1, a2, a3, a4;
    cin >> a;
    a = a * -1;
    a1 = a / 1000;
    a2 = a / 100 - a1 * 10;
    a3 = a / 10 - a1 * 100 - a2 * 10;
    a4 = a % 10;
    cout << '-' << a1 << a3 << a2 << a4; 
}
