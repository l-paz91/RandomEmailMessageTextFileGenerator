// -----------------------------------------------------------------------------
#ifndef EmailGenerator_H
#define EmailGenerator_H
// -----------------------------------------------------------------------------

//--INCLUDES--//
#include "std_lib_facilities.h" // can be found in https://github.com/l-paz91/principles-practice/blob/master/std_lib_facilities.h

// -----------------------------------------------------------------------------

struct EmailGenerator
{
	EmailGenerator();

	void generate();
	void addContact(const string& p1, const string& p2);

	vector<pair<string, string>> mNamesAndEmails;
	vector<string> mSubjects;
	string mLoremIpson;
};

// -----------------------------------------------------------------------------
// -----------------------------------------------------------------------------
// -----------------------------------------------------------------------------
#endif // !EmailGenerator_H
