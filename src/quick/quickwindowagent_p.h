#ifndef QUICKWINDOWAGENTPRIVATE_H
#define QUICKWINDOWAGENTPRIVATE_H

#include <QWKCore/private/corewindowagent_p.h>
#include <QWKQuick/quickwindowagent.h>

namespace QWK {

    class QuickWindowAgentPrivate : public CoreWindowAgentPrivate {
        Q_DECLARE_PUBLIC(QuickWindowAgent)
    public:
        QuickWindowAgentPrivate();
        ~QuickWindowAgentPrivate() override;

        void init();

        AbstractWindowContext * createContext() const override;

        // Host
        QQuickWindow *hostWindow{};
    };

}

#endif // QUICKWINDOWAGENTPRIVATE_H