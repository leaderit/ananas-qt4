/****************************************************************************
** $Id: ametaform.h,v 1.3 2008/12/24 20:06:51 leader Exp $
**
** Header file of the Ananas configuration objects of Ananas
** Designer and Engine applications
**
** Created : 20031201
**
** Copyright (C) 2003-2004 Leader InfoTech.  All rights reserved.
** Copyright (C) Andrey Paskal <app at lrn dot ru>, Yoshkar-Ola
** Copyright (C) 2003-2005 Grigory Panov <gr1313 at mail dot ru >, Yoshkar-Ola
**
** This file is part of the Library of the Ananas
** automation accounting system.
**
** This file may be distributed and/or modified under the terms of the
** GNU General Public License version 2 as published by the Free Software
** Foundation and appearing in the file LICENSE.GPL included in the
** packaging of this file.
**
** This file is provided AS IS with NO WARRANTY OF ANY KIND, INCLUDING THE
** WARRANTY OF DESIGN, MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE.
**
** See http://www.leaderit.ru/page=ananas or email sales@leaderit.ru
** See http://www.leaderit.ru/gpl/ for GPL licensing information.
**
** Contact org@leaderit.ru if any conditions of this licensing are
** not clear to you.
**
**********************************************************************/
#ifndef AMETAFORM_H
#define AMETAFORM_H

#include "ametaobject.h"

class AMetaForm: public AMetaObject
{
Q_OBJECT
public:
    AMetaForm( AMetaObject *parent = 0 );

    QString sourceCode();
    void setSourceCode( const QString &src );

    int  defaultMode();
    void setDefaultMode( int mode );

    QByteArray dialogue();
    void setDialogue( const QByteArray &d );

private:
    
};



class AMetaForms: public AMetaGroup
{
Q_OBJECT
public:
    AMetaForms();
    AMetaForm * newForm(){ return new AMetaForm( this );};
    AMetaForm *form( const QString &name ){ return (AMetaForm*) child( name );};
    AMetaForm *form( int idx ){ return (AMetaForm*) child( idx );};
    int formCount(){ return childCount(); };

public slots:


};

#endif
