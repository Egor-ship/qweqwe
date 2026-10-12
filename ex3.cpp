#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;

    if (N % 100 >= 11 && N % 100 <= 14)
    {
        cout << N << " лет";
    }
    else if (N % 10 == 1)
    {
        cout << N << " год";
    }
    else if (N % 10 >= 2 && N % 10 <= 4)
    {
        cout << N << " года";
    }
    else
    {
        cout << N << " лет";
    }

    return 0;
}
