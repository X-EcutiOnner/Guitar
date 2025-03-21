#ifndef DELETETAGSDIALOG_H
#define DELETETAGSDIALOG_H

#include "RepositoryModel.h"
#include <QDialog>

namespace Ui {
class DeleteTagsDialog;
}

class DeleteTagsDialog : public QDialog {
	Q_OBJECT

public:
	explicit DeleteTagsDialog(QWidget *parent, TagList const &list);
	~DeleteTagsDialog() override;

	QStringList selectedTags() const;

private slots:
	void on_pushButton_check_all_clicked();

private:
	Ui::DeleteTagsDialog *ui;
};

#endif // DELETETAGSDIALOG_H
