#include<stdio.h>
#include<string.h>
void main()
{
	int hh,mm,ss;
	char s12[3];
	// Not required when working in hackerank solution.
	printf("Enter the time: ");
	scanf("%d:%d:%d%s",&hh,&mm,&ss,s12);
	if(strcmp(s12,"PM")==0&&hh!=12)hh+=12;
	if(strcmp(s12,"AM")==0&&hh==12)hh=0;
	printf("%02d:%02d:%02d",hh,mm,ss);
}