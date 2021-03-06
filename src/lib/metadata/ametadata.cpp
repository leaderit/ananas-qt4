/****************************************************************************
** $Id: ametadata.cpp,v 1.6 2008/12/24 16:19:38 leader Exp $
**
** Code file of the Ananas configuration objects of Ananas
** Designer and Engine applications
**
** Created : 20031201
**
** Copyright (C) 2003-2004 Leader InfoTech.  All rights reserved.
** Copyright (C) Grigory Panov <gr1313 at mail.ru>, Yoshkar-Ola.
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

#include "ametadata.h"

#define context_startid	100

AMetaData AMetaData_default;

/*!
 * \class AMetaData
 *
 */
AMetaData::AMetaData()
:AMetaGroup( "MetaData", 0 )
{
/*
    int i = qRegisterMetaType<AMetaDataInfo>("AMetaDataInfo");
printf("metatype=%i\n", i);

int id = QMetaType::type("AMetaDataInfo");
 if (id != -1) {
     void *myClassPtr = QMetaType::construct(id);
     if (myClassPtr) printf("OK\n");

     QMetaType::destroy(id, myClassPtr);
     myClassPtr = 0;
 }
*/
    addChild( &v_info );
    addChild( &v_global );

    addChild( &v_catalogues );
    addChild( &v_documents );
    addChild( &v_reports );
    addChild( &v_journals );
    addChild( &v_inforegisters );
    addChild( &v_accregisters );

//    addChild( &v_info );
}


AMetaData* 
AMetaData::metadata()
{
    return &AMetaData_default;
}


void
AMetaData::clear()
{

}



AMetaCatalogues *
AMetaData::catalogues()
{
    return &v_catalogues;
}



AMetaDocuments *
AMetaData::documents()
{
    return &v_documents;
}


AMetaReports *
AMetaData::reports()
{
    return &v_reports;
}


AMetaJournals *
AMetaData::journals()
{
    return &v_journals;
}


AMetaInfoRegisters *
AMetaData::inforegisters()
{
    return &v_inforegisters;
}



AMetaAccRegisters *
AMetaData::accregisters()
{
    return &v_accregisters;
}

