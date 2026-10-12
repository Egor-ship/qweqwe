#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    double x, y, R;

    cout << "Введите R: ";
    cin >> R;

    cout << "Введите x: ";
    cin >> x;

    cout << "Введите y: ";
    cin >> y;

    if ((pow(x, 2) + pow(y, 2) <= pow(R, 2)) &&
        ((x >= 0 && y >= 0) ||
         (x <= 0 && y <= 0) ||
         (x <= 0 && y >= 0 && y <= x + R)))
    {
        cout << "точка принадлежит области";
    }
    else
    {
        cout << "точка не принадлежит области";
    }

    return 0;
}
