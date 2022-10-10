#include "pt4.h"
#include <cmath>
using namespace std;

float Triangle(float a, float h)
{
    return sqrt(pow((a / 2), 2) + h * h)*2 + a; //вычисление периметра
}
void Solve()
{
    Task("Proc20");
    for (int i = 1; i <= 3; i++)
    {
        float a1, h1;
        pt >> a1 >> h1;
        pt << Triangle(a1, h1); // вывод периметра 
    }
}
