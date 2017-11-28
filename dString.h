#include<string.h>
#include<stdlib.h>
#include<iostream>
using namespace std;

#ifndef dString_h
#define dString_h

class dString
{
private:
	char *acStr;
public:
	int len;
public:
	dString()
	{
		acStr=NULL;
		len=0;
	}
	
	void operator= (char*);
	dString operator+ (dString& in2);
	friend ostream& operator <<(ostream&, const dString&);
	friend istream & operator >>(istream&, dString&);
	friend int length(char*);
	friend int length(dString);
	friend int compare(dString,dString);
};



typedef class dString String;
#endif