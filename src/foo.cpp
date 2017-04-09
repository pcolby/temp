#include "foo.h"

QString Foo::reverse(const QString &src)
{
    QString dst;
    dst.reserve(src.size());
    for (auto iter = src.constEnd(); iter != src.constBegin();)
        dst.append(*(--iter));
    return dst;
}
