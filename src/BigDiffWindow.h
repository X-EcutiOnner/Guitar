#ifndef BIGDIFFWINDOW_H
#define BIGDIFFWINDOW_H

#include <QDialog>
#include "Git.h"
#include "FileDiffWidget.h"

namespace Ui {
class BigDiffWindow;
}

class BigDiffWindow : public QDialog {
	Q_OBJECT
private:
	struct Private;
	Private *m;
public:
	explicit BigDiffWindow(QWidget *parent = nullptr);
	~BigDiffWindow() override;

	void init(const FileDiffWidget::InitParam_ &param);
	void setTextCodec(std::shared_ptr<MyTextCodec> codec);
private:
	Ui::BigDiffWindow *ui;
	void updateDiffView();
	QString fileName() const;
};

#endif // BIGDIFFWINDOW_H
