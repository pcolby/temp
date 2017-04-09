#include "testfoo.h"

#include <QTest>

void TestFoo::reverse_data()
{
    QTest::addColumn<QString>("input");
    QTest::addColumn<QString>("expected");

    QTest::newRow("<empty>") << ""           << "";
    QTest::newRow("a")       << "a"          << "a";
    QTest::newRow("abc")     << "abc"        << "cba";
    QTest::newRow("digits")  << "0123456789" << "9876543210";
}

void TestFoo::reverse()
{
    QFETCH(QString, input);
    QFETCH(QString, expected);

    const QString result = Foo::reverse(input);

    QCOMPARE(result, expected);
}
