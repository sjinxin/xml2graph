/*
 * DatapathGElementInput.h
 *
 *  Created on: Oct 27, 2014
 *      Author: songjinxin
 */

#ifndef DATAPATHGELEMENTINPUT_H_
#define DATAPATHGELEMENTINPUT_H_
#include <string>
#include <map>
#include <list>
#include "xml2graphdef.h"
class DatapathGElement;
class DatapathGElementOutput;
class DatapathGElementInput {
	const char* name;
	DatapathGElementOutput * sourceOutput;
	DatapathGElement* parent;
	position pos;
public:
	DatapathGElementInput(const char* n, DatapathGElement* p);
	virtual ~DatapathGElementInput();
	void registerOutput(DatapathGElementOutput*);
	void levelize(int lvl,std::map<int, std::list<DatapathGElement*> >& linfo);
	DatapathGElementInput(const DatapathGElementInput&);
	DatapathGElementInput& operator=(const DatapathGElementInput&);
};

#endif /* DATAPATHGELEMENTINPUT_H_ */