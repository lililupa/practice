#include "task1.h"
#include <vector>
#include <QString>
#include <math.h>
using namespace std;
task1::task1(): num(0) {}
task1::task1(int a){
    num = a;
}
bool task1:: is_prime(int num) {
    if (num <= 1) {
        return false;
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

vector<int> task1::factorize(int num) {
    vector<int> factors;
    for (int i = 2; i * i <= num; i++) {
        while (num % i == 0) {
            factors.push_back(i);
            num /= i;
        }
    }
    if (num > 1) {
        factors.push_back(num);
    }
    return factors;
}

QString task1:: my_f1(int a){
    int num = a;
    if (is_prime(num)){
        return "Simple";
    }
    else if (num == 0 || num == 1){
        return "Not simple, not composite";
    }
    else {
        vector<int> factors = factorize(num);
        QString res0 = QString:: number(num);
        res0.append(" = ");
        for (size_t i = 0; i < factors.size(); i++) {
            res0.append(QString:: number(factors[i]));
            if (i < factors.size() - 1) {
                res0.append(" * ");
            }
        }
        return res0;
    }
}
