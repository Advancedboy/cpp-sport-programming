#include<iostream> //В этой задаче требуется перевести букву из нижнего регистра в верхний.

using namespace std;

int main(){
    char a, res;
    cin >> a;
    res = a - 32;
    cout << res;
    return 0;
}
