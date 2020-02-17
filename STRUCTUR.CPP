#include<iostream.h>
#include<conio.h>
struct student
{
	char name[30];
	int id;
	float marks;


}s[3];
void main()
{       	clrscr();

	int i;

	for(i=0;i<3;i++)
	{


		cout<<"\nEnter student name:- ";
		cin>>s[i].name;
		cout<<"\nEnter student id number:- ";
		cin>>s[i].id;
		cout<<"\nEnter student marks:- ";
		cin>>s[i].marks;


	}
	for(i=0;i<3;i++)
	{



		cout<<"\nStudent name:- "<<s[i].name;
		cout<<"\nStudent id number:- "<<s[i].id;
		cout<<"\nStudent marks:- "<<s[i].marks;

		cout<<"\n";
	}
       getch();
}