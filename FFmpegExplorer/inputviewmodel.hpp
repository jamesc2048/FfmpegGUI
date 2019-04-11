#ifndef INPUTVIEWMODEL_HPP
#define INPUTVIEWMODEL_HPP

#include <QObject>

#include "viewmodelbase.hpp"

#include "inputfileviewmodel.hpp"

class InputViewModel : public ViewModelBase
{
    Q_OBJECT

    QML_READONLY_PROPERTY(QQmlObjectListModel<InputFileViewModel> *, inputFiles)

public:
    explicit InputViewModel(QObject *parent = nullptr);

signals:

public slots:
};

#endif // INPUTVIEWMODEL_HPP