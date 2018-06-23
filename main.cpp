#include <iostream>
#include "dString.h"
using namespace std;
int main(int argc, char **argv)
{
	String s1,s2,s3;
	int slen;
	cout<<"Enter string 1 : ";
	cin>>s1;
	cout<<"Enter string 2 : ";
	cin>>s2;
	//s1="Hai ";
	s2="rrrr";
	
	slen=length(s1);
	cout<<"s1 = "<<s1<<"\t("<<slen<<" chars long)"<<endl;
	
	cout<<"s2 = "<<s2<<"\t("<<s2.len<<" chars long)"<<endl;
	
	s3=s1+s2;
	
	cout<<"s3 = "<<s3<<"\t("<<s3.len<<" chars long)"<<endl;

	if(compare(s1,s2)==1)
		cout<<s1<<" comes before "<<s2<<endl;
	else if(compare(s1,s2)==-1)
		cout<<s2<<" comes before "<<s1<<endl;
	else
		cout<<s1<<" and "<<s2<<" are equal"<<endl;

	return 0;
}
