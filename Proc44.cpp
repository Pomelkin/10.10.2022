#include "pt4.h"
#include <cmath>
using namespace std;

double arctg(double x, double eps)
{
    double value = x, s = -((x*x*x) / 3);
    int i = 2;
    while (abs(s) > eps)
    {
        value += s;
        s = s * ((x * x * x - 2 * x * x * x * i) / (2 * i + 1));
        i++;

    }
    return value;
}

void Solve()
{
    Task("Proc44");
    double x1;
    pt >> x1;
    for (int i = 0; i < 6; i++)
    {
        double e;
        pt >> e;
        pt << arctg(x1, e);
    }
}
