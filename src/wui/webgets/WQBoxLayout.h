/***************************************************************************
WQBoxLayout.h
-------------------
begin                : 21/02/2010
copyright            : (C) 2003-2010 by InfoSiAL S.L.
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

#ifndef WQBOXLAYOUT_H_
#define WQBOXLAYOUT_H_

#include <AQUi/WQWidget.h>

class WQBoxLayoutPrivate;

class WQBoxLayout : public WQWidget
{
  Q_OBJECT
  AQ_DECLARE_PRIVATE( WQBoxLayout )

public :

  WQBoxLayout( int direction, WQWidget * parent = 0 );

  WLayout * wl();

  void addWQWidget( WQWidget * w );
};


#endif /* WQBOXLAYOUT_H_ */