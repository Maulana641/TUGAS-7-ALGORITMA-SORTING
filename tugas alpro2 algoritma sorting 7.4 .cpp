#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
cout<<"Mengurutkan Data"<<endl;
cout<<"\ndata :\n1,4,7,5,3,8,2,10,6,9"<<endl<<endl;

int i,j,Imaks,maks,temp;

int L[10]={1,4,7,5,3,8,2,10,6,9};

for (i=9;i>=1;i--)
{
Imaks=0;
maks=L[0];
for (j=1;j<=i;j++)
{
if (L[j]<maks)
{
Imaks=j;
maks=L[j];
}
}
temp=L[i];
L[i]=maks;
L[Imaks]=temp;
}
cout<<"data terurut descending :"<<endl;
for (i=0;i<=9;i++)
{
cout<<L[i]<<" ";
}
cout<<endl;
getch();
}
