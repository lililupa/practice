#include <QCoreApplication>
#include <QtTest>
#include "../26junepractice/task1.h"
#include "../26junepractice/task1.cpp"
#include "../26junepractice/task2.h"
#include "../26junepractice/task2.cpp"
#include "../26junepractice/task3.h"
#include "../26junepractice/task3.cpp"

// add necessary includes here

class test : public QObject
{
    Q_OBJECT

public:
    test();
    ~test();

private slots:
    void initTestCase();
    void cleanupTestCase();
    void test_prime();
    void test_factor();


};

test::test() {}

test::~test() {}

void test::initTestCase() {}

void test::cleanupTestCase() {}

void test::test_prime() {
    task1 x;
    QCOMPARE (x.is_prime(3), true);
    QCOMPARE (x.is_prime(52), false);
    QCOMPARE (x.is_prime(20000), false);
}
void test::test_factor() {
    task1 x;
    vector<int> a = x.factorize(100);
    int n = 1;
    for(int i: a){
        n *= i;
    }
    QCOMPARE (n, 100);
}


QTEST_MAIN(test)

#include "tst_test.moc"
