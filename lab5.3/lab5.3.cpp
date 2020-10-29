#include <iostream>
#include <cmath>
#include <Windows.h>
#include <iomanip>

using namespace std;

double S(const double x);

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    double g, tp, tk, t;
    int n;

    cout << "Оо....Всевишній, введіть значення 'tp':"; cin >> tp;
    cout << "Оо....Всевишній, введіть значення 'tk':"; cin >> tk;
    cout << "Оо....Всевишній, введіть значення 'n':"; cin >> n;

    cout << "---------------------------------" << endl;
    cout << "|" << setw(8) << "t" << setw(8) << "|";
    cout << setw(8) << "S" << setw(8) << "|" << endl;
    cout << "---------------------------------" << endl;

    double q = (tk - tp) / n;           //крок

    t = tp;
    do
    {
        double v = S(2 * t + 1) + 2 * S(t * t) + sqrt(S(1));
        cout << "|" << setw(8) << setprecision(3) << t << setw(8) << "|";
        cout << setw(8) << setprecision(3) << v << setw(8) << "|" << endl;
        t += q;
    } while (t <= tk);

    cout << "---------------------------------" << endl;

    return 0;
}

double S(const double x)
{
    if (abs(x) >= 1 || x == 0)
        return (pow(cos(x * 1.0), 2) + 1) / exp(x);
    if (abs(x) < 1 || x != 0)
    {      
        int k = 0;
        double s = 0;
        double a = 2 * x;
        do
        {
            k++;
            double r = (4 * x * x) / (2. * k * (2. * k + 1) * 1.0);
            a *= r;
            s += a;
        } while (k <= 4);
        return  s / sin(2 * x * 1.0);
    }
} 