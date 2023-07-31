#include <iostream> // В этой задаче требуется найти разницу между значением целого числа, сохраненного в типе данных float и его реальным значением.
#include <cmath>

using namespace std;

int main()
{

    cout.setf(ios::fixed);
    cout.precision(0);
    long double a,b;
    cin>>a;
    cout<<(float)a-a;
    return 0;
}
