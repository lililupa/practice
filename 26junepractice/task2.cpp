#include "task2.h"
#include <QString>
#include <math.h>
using namespace std;

task2::task2(): n(0)  {}
task2::task2(double n0){
    n = n0;
}
QString task2:: my_f2(double x, double e){
    double sum = 0, an, an1, sin0;
    an1 = x;	//первый член ряда при n=0
    sum = an1;
    for (int n = 1; ; n++)
    {
        int del = 1;
        int res = 2 * n + 1;
        for (int k = 2; k <= res; k++)	//находим значение делителя (считаем факториал)
            del = del * k;
        an = pow(-1, n) * pow(x, 2 * n + 1) / del;	//находим последующий член ряда
        if ((an - an1) <= e)
            break;
        else
            sum = sum + an;
        an1 = an;	//значение ряда становится предыдущим значением ряда для последующего an
    }
    sin0 = sin(sum);
    return QString:: number(sin0);
}
