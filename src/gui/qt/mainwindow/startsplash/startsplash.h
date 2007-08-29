//
// C++ Interface: startsplash
//
// Description: 
//
//
// Author: FThauer FHammer <f.thauer@web.de>, (C) 2007
//
// Copyright: See COPYING file that comes with this distribution
//
//
#ifndef STARTSPLASH_H
#define STARTSPLASH_H

#include "mainwindowimpl.h"
#include "qthelper.h"

#include <QtGui>
#include <QtCore>

class StartSplash : public QSplashScreen
{
Q_OBJECT
public:
    StartSplash(mainWindowImpl *);

    ~StartSplash();
	
	int frameNo;
	int opacityCounter;	
	qreal opacity;

	void paintEvent(QPaintEvent * event);

public slots:

	void nextAnimationFrame();

private:

	mainWindowImpl *myW;
	QtHelper *myQtHelper;
	QPixmap logo;

};

#endif
