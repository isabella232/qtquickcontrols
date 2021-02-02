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

#ifndef QQUICKFONTDIALOG_P_H
#define QQUICKFONTDIALOG_P_H

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

#include "qquickabstractfontdialog_p.h"

QT_BEGIN_NAMESPACE

class QQuickFontDialog : public QQuickAbstractFontDialog
{
    Q_OBJECT
    Q_PROPERTY(QQuickItem* contentItem READ contentItem WRITE setContentItem DESIGNABLE false)
    Q_CLASSINFO("DefaultProperty", "contentItem")

public:
    explicit QQuickFontDialog(QObject *parent = 0);
    ~QQuickFontDialog();

protected:
    QPlatformFontDialogHelper *helper() override { return 0; }

    Q_DISABLE_COPY(QQuickFontDialog)
};

QT_END_NAMESPACE

QML_DECLARE_TYPE(QQuickFontDialog *)

#endif // QQUICKFONTDIALOG_P_H
