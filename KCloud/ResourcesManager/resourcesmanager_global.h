#ifndef RESOURCESMANAGER_GLOBAL_H
#define RESOURCESMANAGER_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(RESOURCESMANAGER_LIBRARY)
#  define RESOURCESMANAGERSHARED_EXPORT Q_DECL_EXPORT
#else
#  define RESOURCESMANAGERSHARED_EXPORT Q_DECL_IMPORT
#endif

#endif // RESOURCESMANAGER_GLOBAL_H
