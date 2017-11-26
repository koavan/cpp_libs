
#include "dString.h"

int length(char *lin)
{
	return(strlen(lin));
}

int length(dString i)
{
	return(strlen(i.acStr));
}

void dString::operator =(char* in)
{
	int l,i;
	if(len==0 && acStr==NULL)
	{
		l=strlen(in);
		acStr=(char*)malloc(l*sizeof(in));
		for(i=0;i<l;i++)
		{
			*(acStr+i)=*(in+i);
		}
		*(acStr+i)='\0';
	}
}

dString dString::operator+(dString& in2)
{
	int l,i,j,t;
	dString rstr;
	i=length(acStr);
	j=length(in2.acStr);
	rstr.acStr=(char*)malloc((i+j)*sizeof(char));
	for(t=0;t<i;t++)
	{
		*(rstr.acStr+t)=*(acStr+t);
	}
	l=0;
	for(;t<i+j;t++,l++)
	{
		*(rstr.acStr+t)=*(in2.acStr+l);
	}
	*(rstr.acStr+t)='\0';
	return(rstr);
}

ostream & operator <<(ostream &out,const dString &in1)
{
	out<<in1.acStr;
	return(out);
}

istream &operator >>(istream & in, dString &dstr)
{
	char a='a';
	char *ptr=(char*)malloc(sizeof(char));
	char *temp;
	temp=ptr;
	while(a!='\n')
	{
		a=getchar();
		*temp=a;
		++temp;
	}
	*(--temp)='\0';
	
	//in>>ptr>>(temp-ptr);
	dstr.acStr=ptr;
	dstr.len=(temp-ptr);
	return(in);
}