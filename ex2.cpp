#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    double x, R, y;

    cout << "Введите R: ";
    cin >> R;

    cout << "Введите x: ";
    cin >> x;

    if (R <= 0)
    {
        cout << "R должно быть больше нуля";
    }
    else if (x < -4 || x > 6 + 2 * R)
    {
        cout << "Функция не определена для этого x";
    }
    else
    {
        if (x <= -2)
        {
            y = x + 3;
        }
        else if (x <= 4)
        {
            y = -x / 2;
        }
        else if (x <= 6)
        {
            y = -2;
        }
        else
        {
            double centerX = 6 + R;
            y = -2 + sqrt(R * R - (x - centerX) * (x - centerX));
        }

        cout << "Значение функции: " << y;
    }

    return 0;
}
