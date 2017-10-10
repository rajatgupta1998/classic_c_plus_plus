#include <iostream>
#include <fstream>
#include <conio.h>
#include <stdlib.h>
//program to show Binary Text Entry and Display in a file using fstream
using namespace std;
int p;
class book {
int book_no;
	     	char book_title[80];
	     	float price;

	     	float total_cost(int n)
	     	{
	       		float p;
	       		p=n*price;
	       		return p;
	     	}

	     public :

	     void input()
	     	{
	     		cout<<"\n\nEnter Book no. : "; cin>>book_no;
	     		cout<<"\n\nEnter book title : ";
	     		cin.get();
	     		cin.getline(book_title,80);
	     		cout<<"\n\nEnter book price : "; cin>>price;
	   	 }

	    void purchase()
	    	{
	    		cout<<"\n\nEnter number of copies to be purchased : "; cin>>p;
	    		cout<<"\n\nTotal cost (in Rs ) = "<<total_cost(p)<<"\n\n\n";
	    	}

	    void display()
	    	{
	    		cout<<"\n\nBook title is : "<<book_title;
	    		cout<<"\n\nBook number is : "<<book_no;
	    		cout<<"\n\nPrice of book is : "<<price;
	    		cout<<"\n\nTotal cost of "<<p<<" books => "<<total_cost(p)<<" Rs\n\n\n\n";
	    	}

      };

int main()
{
system("cls");
book b[3],p[3];

fstream var;
cout<<"---------------------------------------------------------Enter Details--------------------------------------------------------------\n";

for(int i=0; i<3; i++)
      {
	b[i].input();
	b[i].purchase();

	var.open("xy.txt",ios::out|ios::binary); // Writing to the binary file
	var.write((char *)&b[i],sizeof(b[i]));
	var.close();

	var.open("xy.txt",ios::in |ios::binary);  //Reading from the binary file. See the object is ‘p’ and not ‘b’
	var.read((char *)&p[i], sizeof(p[i]));    // It is not  mandatory to have different objects of a class
	var.close();
      }

cout<<"\n\n--------------------------------------------------- Book Details -----------------------------------------------------------------";


for(int i=0; i<3; i++)
{

		p[i].display();

}


getch();
}
