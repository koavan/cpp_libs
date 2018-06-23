
#include "dString.h"

int length(char *lin)
{
	int l=0;
	for(;*(lin++)!='\0';l++);
	return(l);
}

int length(dString i)
{
	int l=0;
	for(;*(i.acStr++)!='\0';l++);
	return(l);
}

void dString::operator =(char* in)
{
	int l,i;
	l=length(in);	
	if(len==0 && acStr==NULL)
	{
		acStr=(char*)malloc(l*sizeof(in));
	}
	else
	{
		acStr=(char *)realloc(acStr,l);
	}
	for(i=0;i<l;i++)
	{
		*(acStr+i)=*(in+i);
	}
	*(acStr+i)='\0';
	len=l;
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
	rstr.len=i+j;
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

int compare(dString a, dString b)
{
	int i;
	int len1,len2;
	len1=length(a);
	len2=length(b);
	for(i=0;i<len1 || i<len2;i++)
	{
		if(*(a.acStr+i)>*(b.acStr+i))
			return -1;
		else if(*(a.acStr+i)<*(b.acStr+i))
			return 1;
	}
	return 0;
}