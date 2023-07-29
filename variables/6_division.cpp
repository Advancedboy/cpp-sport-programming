#include <iostream> // В этой задаче необходимо научиться делить нацело с округлением вверх

using namespace std;

int main() {
	int a, b;
    cin >> a >> b;
    cout << (a / b) + 1 - a / (a + a % b) << endl;
}
