#include "pt4.h"
#include <cmath>
using namespace std;

double RectPS(double x1, double y1, double x2, double y2)
{
    pt << (abs(y1 - y2) + abs(x1 - x2))*2; // P
    pt << abs(x1 - x2) * abs(y1 - y2); // S
    return 0;
}

void Solve()
{
    Task("Proc5");
    for (int i = 0; i < 3; i++)
    {
        double a, a1, b, b1;
        pt >> a >> a1 >> b >> b1;
        RectPS(a, a1, b, b1);
    }
}
