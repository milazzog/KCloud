#ifndef WORKERSERVER_GLOBAL_H
#define WORKERSERVER_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(WORKERSERVER_LIBRARY)
#  define WORKERSERVERSHARED_EXPORT Q_DECL_EXPORT
#else
#  define WORKERSERVERSHARED_EXPORT Q_DECL_IMPORT
#endif

#endif // WORKERSERVER_GLOBAL_H
