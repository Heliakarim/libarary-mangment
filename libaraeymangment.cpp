#include<iostream>
#include<fstream>
#include<string>
using namespace std;
void allrecords()
{
	char books[50];
	ifstream file ("books.txt");
	if(!file)
	{
		cout<<" Error in opening file ";
		exit(1);
	}
	cout<<" The list of books is as follows :"<<endl;
	while(!file.eof())
	{
		file>>books;
		cout<<books<<endl;
		
	}
	file.close();
	
}
void addfile()
{
	string title, publisher,ISSN;
	int cost;
	{
		cout<<"Enter a tittle ";
		getline(cin,title);
		cout<<" Enter a publisher name ";
		getline(cin,publisher);
		cout<<" Enter a ISSN ";
		getline(cin,ISSN);
		cout<<" Enter a cost of book";
		cin>>cost;
	}
}
void issuebook()
{
	int library[100];
	int numbooks;
	string studentname,booktitle;
	while(true)
	{
		cout<<" Enter a student name ";
		getline(cin,studentname);
		if(studentname=="q")
		//q for quit
		break;
		cout<<" Enter a book title ";
		getline(cin,booktitle);
		bool found=false;
		for(int i=0;i<numbooks;i++)
		{
			if(library[i].title==booktitle)
			
		}
		cout<<"Book issued to "<<studentname<<endl;
		found=true;
		break;
	}

if(!found)
{
	cout<<" Book not found ";
}
}
void main()
{
	char ch;
	do
	{
		cout<<"  Book issue "<<endl;
		cout<<" Add file "<<endl;
		cout<<" Issue book "<<endl;
		cout<<" Exit "<<endl;
		cout<<" Please select your opiton(1-4)";
		ch=getche();
		switch(ch)
		{
			case'1':
				Issuebook();
				break;
			case'2':
				Addfile();
				file<<Addfile();
				break;
			case'3':
				allrecords();
				break;
			case'4':
				exit(0);
			default:
				cout<<" invaid";
		}
		while(ch!='4');
	}
}