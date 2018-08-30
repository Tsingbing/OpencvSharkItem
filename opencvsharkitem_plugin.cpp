#include "opencvsharkitem_plugin.h"
#include "opencvsharkitem.h"

#include <qqml.h>

void OpencvSharkItemPlugin::registerTypes(const char *uri)
{
    // @uri com.robosea.opencvshark
    qmlRegisterType<OpencvSharkItem>(uri, 1, 0, "OpencvSharkItem");
}

