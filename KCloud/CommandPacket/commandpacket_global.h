#ifndef COMMANDPACKET_GLOBAL_H
#define COMMANDPACKET_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(COMMANDPACKET_LIBRARY)
#  define COMMANDPACKETSHARED_EXPORT Q_DECL_EXPORT
#else
#  define COMMANDPACKETSHARED_EXPORT Q_DECL_IMPORT
#endif

#endif // COMMANDPACKET_GLOBAL_H
