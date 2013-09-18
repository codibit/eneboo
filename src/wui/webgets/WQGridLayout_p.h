/***************************************************************************
WQGridLayout_p.h
-------------------
begin                : 29/08/2008
copyright            : (C) 2003-2008 by InfoSiAL S.L.
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

#ifndef WQGRIDLAYOUT_P_H_
#define WQGRIDLAYOUT_P_H_

#include "AQUi/WQWidget_p.h"

class WQGridLayoutPrivate : public WQWidgetPrivate
{
  AQ_DECLARE_PUBLIC( WQGridLayout )

public :

  WQGridLayoutPrivate();
  ~WQGridLayoutPrivate();

  void init();

  WGridLayout * wl_;
  QGridLayout * qLay_;
};

#endif /*WQGRIDLAYOUT_P_H_*/