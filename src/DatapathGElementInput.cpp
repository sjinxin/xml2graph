/*
 * DatapathGElementInput.cpp
 *
 *  Created on: Oct 27, 2014
 *      Author: songjinxin
 */

#include "DatapathGElementInput.h"
#include "DatapathGElement.h"

DatapathGElementInput::DatapathGElementInput(const char* n,DatapathGElement* p)
:name(n),
 sourceOutput(),
 parent(p),
 pos()
{
	// TODO Auto-generated constructor stub

}

DatapathGElementInput::~DatapathGElementInput() {
	// TODO Auto-generated destructor stub
}


void DatapathGElementInput::registerOutput(DatapathGElementOutput* o){
	sourceOutput = o;
}

void DatapathGElementInput::levelize(int lvl,std::map<int, std::list<DatapathGElement*> >& linfo){
	parent->levelize(lvl,linfo);
}