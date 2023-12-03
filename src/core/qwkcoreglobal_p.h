#ifndef QWKCOREGLOBAL_P_H
#define QWKCOREGLOBAL_P_H

#include <QtCore/QEvent>
#include <QtCore/QLoggingCategory>

#include <QWKCore/qwkcoreglobal.h>

#if (QT_VERSION >= QT_VERSION_CHECK(6, 0, 0))
using QT_NATIVE_EVENT_RESULT_TYPE = qintptr;
using QT_ENTER_EVENT_TYPE = QEnterEvent;
#else
using QT_NATIVE_EVENT_RESULT_TYPE = long;
using QT_ENTER_EVENT_TYPE = QEvent;
#endif

QWK_CORE_EXPORT Q_DECLARE_LOGGING_CATEGORY(qWindowKitLog)

#define QWK_INFO     qCInfo(qWindowKitLog)
#define QWK_DEBUG    qCDebug(qWindowKitLog)
#define QWK_WARNING  qCWarning(qWindowKitLog)
#define QWK_CRITICAL qCCritical(qWindowKitLog)
#if QT_VERSION >= QT_VERSION_CHECK(6, 6, 0)
#  define QWK_FATAL qCFatal(qWindowKitLog)
#endif

#endif // QWKCOREGLOBAL_P_H