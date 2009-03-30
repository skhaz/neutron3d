#include "imageView.h"


ImageView::ImageView(QWidget *parent)
: QDialog(parent)
,bt_open(new QPushButton(tr("Open")))
,bt_normalSize(new QPushButton(tr("Normal Size")))
,bt_fitToWindow(new QPushButton(tr("Fit to Window")))
,lbl_image(new QLabel)
{		
	actualSize = 1.0;
	
	setWindowTitle(tr("View Image"));
	resize(500, 400);
	
	bt_open->setMinimumSize(85, 25);
	bt_normalSize->setMinimumSize(85, 25);
	bt_fitToWindow->setCheckable(true);
	bt_fitToWindow->setMinimumSize(85, 25);
	
	lbl_image->setBackgroundRole(QPalette::Base);
	lbl_image->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
	lbl_image->setScaledContents(true);
	
	scrollArea = new QScrollArea;
	scrollArea->setBackgroundRole(QPalette::Light);
	scrollArea->setWidget(lbl_image);
	
	QHBoxLayout *layout_bts = new QHBoxLayout;
	layout_bts->addWidget(bt_open);
	layout_bts->addWidget(bt_normalSize);
	layout_bts->addWidget(bt_fitToWindow);
	
	QVBoxLayout *layout = new QVBoxLayout;
	layout->addLayout(layout_bts);
	layout->addWidget(scrollArea);
	
	setLayout(layout);
	
	
	connect(bt_open, SIGNAL(clicked()), SLOT( open() ));
	connect(bt_normalSize, SIGNAL(clicked()), SLOT( normalSize() ));
	connect(bt_fitToWindow, SIGNAL(clicked()), SLOT( fitToWindow() ));

    open();
}
ImageView::~ImageView()
{
}

void ImageView::open()
{
	QString fileName = QFileDialog::getOpenFileName(this, tr("Open File"),
													QDir::currentPath(),
													tr("Images (*.jpg *.jpeg *.tif *.tiff *.png *.bmp *.gif )"));
	
	if (!fileName.isEmpty()) 
	{
		QImage image(fileName);
		
		if (image.isNull()) 
		{
			QMessageBox::information(this, tr("Image Viewer"),
									 tr("Cannot load %1.").arg(fileName));
			return;
		}
		lbl_image->setPixmap(QPixmap::fromImage(image));
		
		normalSize();
	}
}

void ImageView::mousePressEvent ( QMouseEvent * event )
{
	iniPosX = event->x();
}

void ImageView::mouseMoveEvent ( QMouseEvent * event )
{
	if(iniPosX <= event->x() )
	{
		if(actualSize <= 2.0)
		{
			actualSize += 0.05;
			scaleImage(actualSize);
		}
		else
		{
			actualSize = 2.0;
			scaleImage(actualSize);
		}
	}
	else
	{
		if(actualSize >= 0.1)
		{
		actualSize -= 0.05;
		scaleImage(actualSize);
		}
		else
		{
			actualSize = 0.1;
			scaleImage(actualSize);
		}
	}
}



void ImageView::normalSize()
{
	lbl_image->adjustSize();
	scaleFactor = 1.0;
}

void ImageView::fitToWindow()
{
	bool fitToWindow = bt_fitToWindow->isChecked();
	scrollArea->setWidgetResizable(fitToWindow);
	
	if (!fitToWindow) 
	{
		normalSize();
	}
}

void ImageView::scaleImage(double factor)
{
	scaleFactor = factor;
	
	lbl_image->resize(scaleFactor * lbl_image->pixmap()->size());
	
	adjustScrollBar(scrollArea->horizontalScrollBar(), factor);
	adjustScrollBar(scrollArea->verticalScrollBar(), factor);
}

void ImageView::adjustScrollBar(QScrollBar *scrollBar, double factor)
{
	scrollBar->setValue(int(factor * scrollBar->value()
							+ ((factor - 1) * scrollBar->pageStep()/2)));
}
