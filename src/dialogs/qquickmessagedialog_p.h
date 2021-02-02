/****************************************************************************
**
** Copyright (C) 2021 The Qt Company Ltd.
** Contact: https://www.qt.io/licensing/
**
** This file is part of the Qt Quick Dialogs module of the Qt Toolkit.
**
** $QT_BEGIN_LICENSE:COMM$
**
** Commercial License Usage
** Licensees holding valid commercial Qt licenses may use this file in
** accordance with the commercial license agreement provided with the
** Software or, alternatively, in accordance with the terms contained in
** a written agreement between you and The Qt Company. For licensing terms
** and conditions see https://www.qt.io/terms-conditions. For further
** information use the contact form at https://www.qt.io/contact-us.
**
** $QT_END_LICENSE$
**
**
**
**
**
**
**
**
**
**
**
**
**
**
**
**
**
**
**
****************************************************************************/

#ifndef QQUICKMESSAGEDIALOG_P_H
#define QQUICKMESSAGEDIALOG_P_H

//
//  W A R N I N G
//  -------------
//
// This file is not part of the Qt API.  It exists purely as an
// implementation detail.  This header file may change from version to
// version without notice, or even be removed.
//
// We mean it.
//

#include "qquickabstractmessagedialog_p.h"

QT_BEGIN_NAMESPACE

class QQuickMessageDialog : public QQuickAbstractMessageDialog
{
    Q_OBJECT
    Q_PROPERTY(QQuickItem* contentItem READ contentItem WRITE setContentItem DESIGNABLE false)
    Q_CLASSINFO("DefaultProperty", "contentItem")    // AbstractMessageDialog in QML can have only one child

public:
    explicit QQuickMessageDialog(QObject *parent = 0);
    ~QQuickMessageDialog();

protected:
    QPlatformDialogHelper *helper() override { return 0; }

protected Q_SLOTS:
    void accept() override;
    void reject() override;

private:
    Q_DISABLE_COPY(QQuickMessageDialog)
};

QT_END_NAMESPACE

QML_DECLARE_TYPE(QQuickMessageDialog *)

#endif // QQUICKMESSAGEDIALOG_P_H
