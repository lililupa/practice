#pragma once
#include <vector>
#include <QString>
using namespace std;
class task1
{ int num;
public:
    task1();
    task1(int a);
    bool is_prime(int a);
    vector<int> factorize(int a);
    QString my_f1(int a);
};


