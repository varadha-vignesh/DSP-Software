/*
#include "stdio.h"
//const int FilterLength=3;
#define N 3
int i;
double yn=0;
double dly[N+1]={0,0,0,0};
double h[3]={1,2,3};
//double filter[]={1,2,3};
	//static float inputArray[3]={0,0,0};

//double ApplyFilter(double val)
/*{
static int signalLength=0,k=0;	
static rdi=0;
static int index=0;
//static int state=0;


static double output=0;
	//float temp[3]={0};
	output=0;
	
	 for(i=FilterLength;i>=0;i--)
	 {
	 	inputArray[i]=inputArray[i-1];
	 }
	 inputArray[0]=val;
	if(signalLength==0)
		{output= (inputArray[0]*filter[0]);}
	else //if(k<FilterLength)
	
		{for(i=0;i<FilterLength;i++)
			{//if(FilterLength-1-i>=0 && FilterLength-1-i<FilterLength)
				if(i>=FilterLength)
				k=i-FilterLength;
				else
				k=i;
				output=output+(inputArray[i]*filter[k]);}}
	    
	signalLength++;
	return output;
	
}*/
/*double ApplyFilter(double val)
{
	short i;
	yn=0;
	dly[0]=val;
	for(i=N-1;i>=0;i--)
	{
		yn +=(h[i] * dly[i]);
		dly[i+1] = dly[i];
	}
	
return yn;	
}





int main()
{
	 double ip[]={7,8,9,10,11,12,13};
	 int i;
	for(i=0;i<7;i++)
	printf("OP: %lf \n",ApplyFilter(ip[i]));
}*/