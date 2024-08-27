#ifndef XIMAGE_H
#define XIMAGE_H

#include <QtWidgets/QWidget>
#include "ui_ximage.h"

class XImage : public QWidget
{
	Q_OBJECT

public:
	XImage(QWidget *parent = 0);
	~XImage();
	void ViewImage(QImage *img);
public slots:
	void Open();
	void Deal();

private:
	Ui::XImageClass ui;
	QImage *img = NULL;
	QImage imgDeal;
};

#endif // XIMAGE_H
