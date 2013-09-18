/***************************************************************************
                           AQTreeWidget.h
                       -------------------
begin                : 22/09/2007
copyright            : (C) 2003-2007 by InfoSiAL S.L.
email                : mail@infosial.com
***************************************************************************/ 
/***************************************************************************
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; version 2 of the License.               *
 ***************************************************************************/ 
/***************************************************************************
   Este  programa es software libre. Puede redistribuirlo y/o modificarlo
   bajo  los  términos  de  la  Licencia  Pública General de GNU   en  su
   versión 2, publicada  por  la  Free  Software Foundation.
 ***************************************************************************/

#ifndef AQTREEWIDGET_H_
#define AQTREEWIDGET_H_

#include <QTreeWidget>

class AQTreeWidget : public QTreeWidget
{

public:

  AQTreeWidget( AQMainWindow * mw );
  ~AQTreeWidget();

protected:

  void paintEvent( QPaintEvent * pe );
  void dropEvent ( QDropEvent * e );
  void scrollContentsBy( int dx, int dy );

private:

  AQMainWindow * mainWindow;
  QImage logo;
};

#endif /*AQTREEWIDGET_H_*/