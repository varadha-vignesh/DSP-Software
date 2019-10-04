#include <stdio.h>
#include <math.h>
#define beta 0.01 //convergence rate
#define N  200//order of filter
#define NS 200 //number of samples
#define Fs 16000 //sampling frequency
#define pi 3.1415926
#define DESIRED sin(2*pi*T*3000/Fs)
#define NOISE sin(2*pi*T*3000/Fs) //noise signal
main()
{
long I, T;
double D, Y, E;
double W[N+1] = {0.0};
double X[N+1] = {0.0};
double scale=0.9374;//for making the maaximum gain as 1

for (T = 0; T < NS; T++) //start adaptive algorithm
{
X[0] = NOISE; //new noise sample
D = DESIRED; //desired signal
Y = 0; //filter’output set to zero
for (I = 0; I <= N; I++)
Y += (W[I] * X[I]); //calculate filter output
E = D - Y ;//calculate error signal
for (I = N; I >= 0; I--)
{
W[I] = W[I] + (beta*E*X[I]); //update filter coefficients
if (I != 0)
X[I] = X[I-1]; //update data sample
}
}
for(I=0;I<N+1;I++)
{if(I!=0)
W[I]=(-W[I]/scale);
else
W[I]=(1-W[I])/scale;
printf("%lf \n",W[I]);}
}