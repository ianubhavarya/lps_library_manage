#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<fstream.h>
class book
{
 public:
 char name[1000];
 char author[1000];
 char section[1000];
 long serialno;
 long isbn;
 void enter()
 {
 clrscr();
 cout<<"\t\t"<<"Lucknow Public School, A-Block South City"<<endl;
 cout<<"\t\t\t"<<"School Library Management"<<endl;
 cout<<"\nEnter name of book"<<endl;
 gets(name);
 cout<<"\nEnter name of author"<<endl;
 gets(author);
 cout<<"\nEnter section of the Library"<<endl;
 gets(section);
 cout<<"\nEnter Serial No."<<endl;
 cin>>serialno;
 cout<<"\nEnter ISBN No. of book"<<endl;
 cin>>isbn;
 }
 void display()
 {
 cout<<"\nSerial No. - "<<serialno<<endl;
 cout<<"\nName of Book - "<<name<<endl;
 cout<<"\nAuthor of Book - "<<author<<endl;
 cout<<"\nSection - "<<section<<endl;
 cout<<"\nISBN No. - "<<isbn<<endl;
 }
};
class Borrowers
{
 public:
 char iname[100];
 long ID;
 char ibook[100];
 long serial;
 char date[100];
 void enter()
 {
 clrscr();
 cout<<"\t\t"<<"Lucknow Public School, A-Block South City"<<endl;
 cout<<"\t\t\t"<<"School Library Management"<<endl;
 cout<<"\nEnter Borrower's ID No."<<endl;
 cin>>ID;
 cout<<"\nEnter name of Borrower"<<endl;
 gets(iname);
 cout<<"\nEnter name of book"<<endl;
 gets(ibook);
 cout<<"\nEnter Serial No."<<endl;
 cin>>serial;
 cout<<"\nEnter Date in DD/MM/YYYY format"<<endl;
 gets(date);
 }
 void display()
 {
 cout<<"\nBorrower's ID No. - "<<ID<<endl;
 cout<<"\nBorrower's Name - "<<iname<<endl;
 cout<<"\nName of Book - "<<ibook<<endl;
 cout<<"\nSerial No. - "<<serial<<endl;
 cout<<"\nDate of Borrowing - "<<date<<endl;
 }
};
void libook();
void issue();
void create();
void add();
void disp1();
void del(long);
void dispsr1(long);
double calser();
void icreate();
void iadd();
void idisp1();
void idel(long);
void idispsr1(long);
double calser()
{
 book Q;
 ifstream T;
 long sen;
 T.open("schlib.dat",ios::in|ios::binary);
 while(T.read((char*)&Q,sizeof(Q)))
 {
 sen = Q.serialno;
 }
 T.close();
 return sen;
}
void main()
{
 clrscr();
 int ch;
 int c;
 char ch2;
 do
 {
 clrscr();
 c=0;
 cout<<"\t\t"<<"Lucknow Public School, A-Block South City"<<endl;
 cout<<"\t\t\t"<<"School Library Management"<<endl;
 cout<<"\n\nFor Book Management Press '1'"<<endl;
 cout<<"For Borrowers Management Press '2'"<<endl;
 cin>>ch;
 switch(ch)
 {
 case 1:
 libook();
 break;
 case 2:
 issue();
 break;
 default:
 c++;
 break;
 }
 if(c!=0)
 {
 clrscr();
 cout<<"\t\t"<<"Lucknow Public School, A-Block South City"<<endl;
 cout<<"\t\t\t"<<"School Library Management"<<endl;
 cout<<"\n\nWrong Choice";
 cout<<endl<<endl<<"To continue with Main Menu Press 'Y'"<<endl<<"To exit Press 'N'"<<endl;
 cin>>ch2;
 }
 else
 {
 clrscr();
 cout<<"\t\t"<<"Lucknow Public School, A-Block South City"<<endl;
 cout<<"\t\t\t"<<"School Library Management"<<endl;
 cout<<endl<<endl<<"To continue with Main Menu Press 'Y'"<<endl<<"To exit Press 'N'"<<endl;
 cin>>ch2;
 }
 }
 while(ch2 =='y' || ch2 =='Y');
 clrscr();
 cout<<"\t\t *******************************************"<<endl;
 cout<<"\t\t * Program Coding by - Anubhav Arya *"<<endl;
 cout<<"\t\t *******************************************"<<endl;
 getch();
}
void libook()
{
 clrscr();
 int ch;
 char ch2;
 int c;
 long sr;
 do
 {
 clrscr();
 c=0;
 cout<<"\t\t"<<"Lucknow Public School, A-Block South City"<<endl;
 cout<<"\t\t\t"<<"School Library Management"<<endl<<endl;
 cout<<"Enter 1 - Reset or Create New Library"<<endl;
 cout<<"Enter 2 - Add New Book in Library"<<endl;
 cout<<"Enter 3 - Remove any book from Library"<<endl;
 cout<<"Enter 4 - Display all books"<<endl;
 cout<<"Enter 5 - Display Particular Book"<<endl;
 cin>>ch;
 switch(ch)
 {
 case 1:
 create();
 break;
 case 2:
 add();
 break;
 case 3:
 clrscr();
 cout<<"\t\t"<<"Lucknow Public School, A-Block South City"<<endl;
 cout<<"\t\t\t"<<"School Library Management"<<endl;
 cout<<"\nEnter Serial No. to Remove Book"<<endl;
 cin>>sr;
 del(sr);
 break;
 case 4:
 disp1();
 break;
 case 5:
 clrscr();
 cout<<"\t\t"<<"Lucknow Public School, A-Block South City"<<endl;
 cout<<"\t\t\t"<<"School Library Management"<<endl;
 cout<<"\nEnter Serial No. to display particular book"<<endl;
 cin>>sr;
 dispsr1(sr);
 break;
 default:
 c++;
 break;
 }
 if(c!=0)
 {
 clrscr();
 cout<<"\t\t"<<"Lucknow Public School, A-Block South City"<<endl;
 cout<<"\t\t\t"<<"School Library Management"<<endl;
 cout<<"\n\nWrong Choice"<<endl;
 cout<<"\nIf you want to continue with Book Mangement Press 'Y'"<<endl;
 cout<<"If you want to go to Main Menu Press 'N'"<<endl;
 cin>>ch2;
 }
 else
 {
 cout<<"\nIf you want to continue with Book Mangement Press 'Y'"<<endl;
 cout<<"If you want to go to Main Menu Press 'N'"<<endl;
 cin>>ch2;
 }
 }
 while(ch2=='Y' || ch2=='y');
}
void issue()
{
 clrscr();
 int ch;
 char ch2;
 int c;
 double sr;
 do
 {
 clrscr();
 c=0;
 cout<<"\t\t"<<"Lucknow Public School, A-Block South City"<<endl;
 cout<<"\t\t\t"<<"School Library Management"<<endl<<endl;
 cout<<"Enter 1 - Reset or Create Borrower's Group"<<endl;
 cout<<"Enter 2 - Add New Borrower"<<endl;
 cout<<"Enter 3 - Remove any Borrower"<<endl;
 cout<<"Enter 4 - Display all Borrower"<<endl;
 cout<<"Enter 5 - Display Particular Borrower"<<endl;
 cin>>ch;
 switch(ch)
 {
 case 1:
 icreate();
 break;
 case 2:
 iadd();
 break;
 case 3:
 clrscr();
 cout<<"\t\t"<<"Lucknow Public School, A-Block South City"<<endl;
 cout<<"\t\t\t"<<"School Library Management"<<endl;
 cout<<"\nEnter ID No. to Remove Borrower"<<endl;
 cin>>sr;
 idel(sr);
 break;
 case 4:
 idisp1();
 break;
 case 5:
 clrscr();
 cout<<"\t\t"<<"Lucknow Public School, A-Block South City"<<endl;
 cout<<"\t\t\t"<<"School Library Management"<<endl;
 cout<<"\nEnter ID No. to display particular Borrower"<<endl;
 cin>>sr;
 idispsr1(sr);
 break;
 default:
 c++;
 break;
 }
 if(c!=0)
 {
 clrscr();
 cout<<"\t\t"<<"Lucknow Public School, A-Block South City"<<endl;
 cout<<"\t\t\t"<<"School Library Management"<<endl;
 cout<<"\n\nWrong Choice"<<endl;
 cout<<"\nIf you want to continue with Borrower Mangement Press 'Y'"<<endl;
 cout<<"If you want to go to Main Menu Press 'N'"<<endl;
 cin>>ch2;
 }
 else
 {
 cout<<"\nIf you want to continue with Borrower Mangement Press 'Y'"<<endl;
 cout<<"If you want to go to Main Menu Press 'N'"<<endl;
 cin>>ch2;
 }
 }
 while(ch2=='Y' || ch2=='y');
}
void create()
{
 book Q;
 ofstream T;
 T.open("schlib.dat",ios::out|ios::binary);
 Q.enter();
 T.write((char*)&Q,sizeof(Q));
 T.close();
}
void add()
{
 long ser;
 ser = calser();
 book Q;
 ofstream T;
 clrscr();
 cout<<"\t\t"<<"Lucknow Public School, A-Block South City"<<endl;
 cout<<"\t\t\t"<<"School Library Management"<<endl;
 cout<<"\n\nLast Serial No. = "<<ser<<endl<<"\nMake sure you enter Serial No. by adding 1 to last Serial
No."<<endl;
 T.open("schlib.dat",ios::app|ios::binary);
 Q.enter();
 T.write((char*)&Q,sizeof(Q));
 T.close();
}
void disp1()
{
 clrscr();
 cout<<"\t\t"<<"Lucknow Public School, A-Block South City"<<endl;
 cout<<"\t\t\t"<<"School Library Management"<<endl;
 book Q;
 ifstream T;
 T.open("schlib.dat",ios::in|ios::binary);
 while(T.read((char*)&Q,sizeof(Q)))
 {
 Q.display();
 }
 T.close();
}
void del(long n)
{
 book Q;
 ifstream T;
 ofstream T1;
 T.open("schlib.dat",ios::in|ios::binary);
 T1.open("schlib1.dat",ios::in|ios::binary);
 while(T.read((char*)&Q,sizeof(Q)))
 {
 if(n!=Q.serialno)
 {
 T1.write((char*)&Q,sizeof(Q));
 }
 }
 T.close();
 T1.close();
 remove("schlib.dat");
 rename("schlib1.dat", "schlib.dat");
}
void dispsr1(long n)
{
 clrscr();
 cout<<"\t\t"<<"Lucknow Public School, A-Block South City"<<endl;
 cout<<"\t\t\t"<<"School Library Management"<<endl;
 book Q;
 ifstream T;
 int c=0;
 T.open("schlib.dat",ios::in|ios::binary);
 while(T.read((char*)&Q,sizeof(Q)))
 {
 if(n==Q.serialno)
 {
 Q.display();
 c++;
 }
 }
 if(c==0)
 {
 clrscr();
 cout<<"\t\t"<<"Lucknow Public School, A-Block South City"<<endl;
 cout<<"\t\t\t"<<"School Library Management"<<endl;
 cout<<"\nRecord not Found"<<endl;
 }
 T.close();
}
//FROM HERE Borrower's FUNCTIONS STARTS
void icreate()
{
 Borrowers Q;
 ofstream T;
 T.open("schiss.dat",ios::out|ios::binary);
 Q.enter();
 T.write((char*)&Q,sizeof(Q));
 T.close();
}
void iadd()
{
 Borrowers Q;
 ofstream T;
 T.open("schiss.dat",ios::app|ios::binary);
 Q.enter();
 T.write((char*)&Q,sizeof(Q));
 T.close();
}
void idisp1()
{
 clrscr();
 cout<<"\t\t"<<"Lucknow Public School, A-Block South City"<<endl;
 cout<<"\t\t\t"<<"School Library Management"<<endl;
 Borrowers Q;
 ifstream T;
 T.open("schiss.dat",ios::in|ios::binary);
 while(T.read((char*)&Q,sizeof(Q)))
 {
 Q.display();
 }
 T.close();
}
void idel(long n)
{
 Borrowers Q;
 ifstream T;
 ofstream T1;
 T.open("schiss.dat",ios::in|ios::binary);
 T1.open("schiss1.dat",ios::in|ios::binary);
 while(T.read((char*)&Q,sizeof(Q)))
 {
 if(n!=Q.ID)
 {
 T1.write((char*)&Q,sizeof(Q));
 }
 }
 T.close();
 T1.close();
 remove("schiss.dat");
 rename("schiss1.dat", "schiss.dat");
}
void idispsr1(long n)
{
 clrscr();
 cout<<"\t\t"<<"Lucknow Public School, A-Block South City"<<endl;
 cout<<"\t\t\t"<<"School Library Management"<<endl;
 Borrowers Q;
 int c=0;
 ifstream T;
 T.open("schiss.dat",ios::in|ios::binary);
 while(T.read((char*)&Q,sizeof(Q)))
 {
 if(n==Q.ID)
 {
 Q.display();
 c++;
 }
 }
 if(c==0)
 {
 clrscr();
 cout<<"\t\t"<<"Lucknow Public School, A-Block South City"<<endl;
 cout<<"\t\t\t"<<"School Library Management"<<endl;
 cout<<"\n\nRecord Not Found"<<endl;
 }
 T.close();
} 