#include <iostream>
#include "dString.h"
using namespace std;
int main(int argc, char **argv)
{
	dString s1,s2,s3;
	int slen;
	//cout<<"Enter string 1 : ";
	//cin>>s1;
	//cout<<"Enter string 2 : "<<endl;
	//cin>>s2;
	s1="Hai ";
	s2="Dayan";
	
	slen=length(s1);
	cout<<"s1 = "<<s1<<"\t("<<slen<<" chars long)"<<endl;
	
	slen=length(s2);
	cout<<"s2 = "<<s2<<"\t("<<slen<<" chars long)"<<endl;
	
	s3=s1+s2;
	
	slen=length(s3);
	cout<<"s3 = "<<s3<<"\t("<<slen<<" chars long)"<<endl;

	return 0;
}
