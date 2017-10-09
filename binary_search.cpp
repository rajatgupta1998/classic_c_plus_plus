#include<iostream>
#include<stdlib.h>

using namespace std;
int main()
{
system("cls");
int var[100],number,i,beginning,ending,middle,item;

cout<<"\n------------ BINARY SEARCH ------------ \n\n";
cout<<"Enter No. of Elements:" << endl;
cin>>n;

cout<<"\nEnter Elements in Sorted Order=\n";
for(i=1;i<=number;i++)
{
cin>>var[i];
}

cout<<"\nEnter Item you want to Search= ";
cin>>item;

beginning=1;
ending=number;

mid=(beginning+ending)/2;                       // Find Mid Location of Array

while(beginning<=ending && var[middle]!=item)      // Compare Item and Value of Mid
{
if(var[mid]<item)
beginning=middle+1;
else
ending=middle-1;

middle=(beginning+ending)/2;
}

if(var[middle]==item)
{
cout<<"\nData is Found at Location : "<<middle-1;
}
else
{
cout<<"Data is Not Found";
}
return 0;
}
