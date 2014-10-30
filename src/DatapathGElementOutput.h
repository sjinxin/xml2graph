/*
 * DatapathGElementOutput.h
 *
 *  Created on: Oct 27, 2014
 *      Author: songjinxin
 */

#ifndef DATAPATHGELEMENTOUTPUT_H_
#define DATAPATHGELEMENTOUTPUT_H_
#include <set>
#include <list>
#include <map>
class DatapathGElementInput;
class DatapathGElement;
class DatapathGElementOutput {
	const char* name;
	std::set<DatapathGElementInput*> destationInputs;
	DatapathGElement* parent;
public:
	DatapathGElementOutput(const char* n,DatapathGElement* p);
	virtual ~DatapathGElementOutput();
	void registerInput(DatapathGElementInput*);
	void levelize(int lvl,std::map<int, std::list<DatapathGElement*> >&);
	DatapathGElementOutput(const DatapathGElementOutput&);
	DatapathGElementOutput& operator=(const DatapathGElementOutput&);
};

#endif /* DATAPATHGELEMENTOUTPUT_H_ */