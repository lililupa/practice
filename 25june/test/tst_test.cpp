#include <QtTest>

// add necessary includes here

#include "../25june/nod.h"

class test : public QObject
{
    Q_OBJECT

public:
    test();
    ~test();

private slots:
    void test_case1();
};

test::test() {}

test::~test() {}

void test::test_case1() {
    Nod nod;
    QCOMPARE(nod.findNod(10, 5), 5);
    QCOMPARE(nod.findNod(10, 11), 1);
    QCOMPARE(nod.findNod(52, 56), 4);
}

QTEST_APPLESS_MAIN(test)

#include "tst_test.moc"
