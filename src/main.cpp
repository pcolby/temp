#include <QApplication>
#include <QPushButton>

#include "foo.h"

int main(int argc, char ** argv) {
    QApplication app (argc, argv);
    QPushButton button(Foo::reverse(app.tr("Hello world!")));
    button.show();
    return app.exec();
}
