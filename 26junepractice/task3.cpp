#include "task3.h"
#include <QString>
#include <math.h>
using namespace std;
task3::task3(): a0(0) {}
task3::task3(int a){
    a0 = a;
}
QString task3:: my_f3(int a, int b, int c){
    if (a == 0){
        double x0 = -c/b;
        return QString:: number(x0);
    } else if (a != 0) {
        double d = b * b - 4 * a * c;
        if (d > 0) {
            double x1 = (-b + sqrt(d)) / (2 * a);
            double x2 = (-b - sqrt(d)) / (2 * a);
            return QString:: number(x1) + " and " + QString:: number(x2);
        } else if (d == 0) {
            double x = -b / (2 * a);
            return QString:: number(x);
        } else if (d < 0) {
            return "No roots";
        }
    }
    return "Mistake";
}
