#include <QObject>

#include "foo.h"

class TestFoo : public QObject {
    Q_OBJECT

private slots:
    void reverse_data();
    void reverse();

};
