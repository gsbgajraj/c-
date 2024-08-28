#include<fstream>
#include<iostream>
#include<conio.h>
#include<string.h>
#include<stdio.h>
#include<stdlib.h>
#include<dos>
class Railways
{	
long PNR; //Passenger Number Record
intage,Tno; //Train no.
charDoj[10]; //Date of Journey
char Time[10];
charBs[10],Ds[10]; //Boarding Station,Destination Station
char Name[30]; //Name of Passenger
charTname[30]; //Train name
char seat[5];
float cost;
char Gender[10];
public:
void Input();
void Output();
voidMainmenu();
voidNew_Record();
voidSearch_Record();
voidDelete_Record();
voidPrint_Ticket();
longReturn_PNR()
 {
return PNR;
 }
};
void Railways::Input()
{
cout<<"Enter the PNR no:";
cin>>PNR;
cout<<"Enter name of Passenger:";
gets(Name);
cout<<"Enter your Gender:";
gets(Gender);
cout<<"Enter your age:";
cin>>age;
cout<<"Enter your Date of journey:";
gets(Doj);
cout<<"Enter your Boardng Station:";
gets(Bs);
cout<<"Enter your Destination Station:";
gets(Ds);
cout<<"Enter your train name:";
gets(Tname);
cout<<"Enter your Train no:";
cin>>Tno;
cout<<"Enter your Train timing:";
gets(Time);
cout<<"Enter our seat no:";
gets(seat);
cout<<"Enter the cost of ticket:";
cin>>cost;
}
void Railways::Output()
{
cout<<"PNR No.:"<<PNR<<endl;
cout<<"Name of Passenger:"<<Name<<endl;
cout<<"Gender:"<<Gender<<endl;
cout<<"Age:"<<age<<endl;
cout<<"Date of journey:"<<Doj<<endl;
cout<<"Boardng Station:"<<Bs<<endl;
cout<<"Destination Station:"<<Ds<<endl;
cout<<"Train Name:"<<Tname<<endl;
cout<<"Train No:"<<Tno<<endl;
cout<<"Train Timing:"<<Time<<endl;
cout<<"Seat No:"<<seat<<endl;
cout<<"Cost of Ticket:"<<cost<<endl;
cout<<endl;
return ;
}
void main()
{
clrscr();
char Password[20];
textcolor(CYAN);
cout<<"\t\t\t\t";
cout<<"INDIAN RAILWAYS";
cout<<"\n";
textcolor(RED);
cout<<"\t\t\t";
cout<<"  AIM TO SERVE OUR TRAVELLERS";
cout<<"\n";
textcolor(BROWN);
delay(1000);
cout<<"Prepared by:";
textcolor(WHITE);
cout<<"\n";
delay(1000);
cout<<"1. Gajraj Singh Bhati";
cout<<"\n";
delay(1000);
cout<<"Enter the password please:";
gets(Password);
textcolor(CYAN);
while(strcmp(Password,"BHARAT")==0)
 {
  Railways obj;
  obj.Mainmenu();
 }
clrscr();
cout"Wrong Password";
getch();
}
void Railways::Mainmenu()
{
 Railways obj;
int choice;
while(choice!=5)
 {
clrscr();
cout<<"MainMenu\n";
cout<<"1.New Record\n";
cout<<"2.Search Record\n";
cout<<"3.Delete Record\n";
cout<<"4.Print Ticket\n";
cout<<"5.Exit\n";
cout<<"Enter your choice:";
cin>>choice;
switch(choice)
  {
case 1:obj.New_Record(); break;
case 2:obj.Search_Record(); break;
case 3:obj.Delete_Record(); break;
case 4:obj.Print_Ticket(); break;
case 5:exit(1); break;
default: exit(1); break;
  }
 }
}
void Railways::New_Record()
{
 Railways obj;
clrscr();
fstreamfp;
fp.open("Railway.dat",ios::out|ios::binary|ios::app);
obj.Input();
fp.write((char*)&obj,sizeof(obj));
fp.close();
charch;
cout<<"Do you want to enter records further(Y/N): ";
cin>>ch;
if(ch=='Y'||ch=='y')
obj.New_Record();
else
obj.Mainmenu();
}
void Railways::Search_Record()
{
clrscr();
 Railways obj;
long no; //It will use as a dummy PNR.
int i=0; //No record is processed.
cout<<"Enter the unique PNR no whose record to be found:";
cin>>no;
cout<<"\n";
int f=0; //Initially thinking record is not found.
fstreamfp;
fp.open("Railway.dat",ios::in|ios::binary);
fp.seekg(ios::beg);
while(fp.read((char*)&obj,sizeof(obj)))
 {
if(obj.Return_PNR()==no)
  {
cout<<"Record found\n";
cout<<endl;
obj.Output();
cout<<endl;
   f=1;
i++; //One record is processed.
break;
  }
 }
fp.close();
if(f==0)
{ cout<<"Record does not exit."<<endl;}
Char ch;
cout<<"Do you want to find records further(Y/N): ";
cin>>ch;
if(ch=='Y'||ch=='y')
obj.Search_Record();
else
obj.Mainmenu();
}
void Railways::Delete_Record()
{
clrscr();
 Railways obj;
long no; //It will use as a dummy PNR.
int i=0; //No record is processed.
char confirm; //For confirming.
cout<<"Enter the unique PNR no whose record to be deleted:";
cin>>no;
cout<<"\n";
int f=0; //Initially thinking record is not found.
fstream fp,fp1;
fp.open("Railway.dat",ios::in|ios::binary);
fp1.open("Temporary.dat",ios::app|ios::binary);
while(fp.read((char*)&obj,sizeof(obj)))
 {
if(obj.Return_PNR()==no)
  {
cout<<"Record found\n";
cout<<endl;
obj.Output();
cout<<endl;
   f=1;
i++; //One record is processed.
cout<<"Are you sure to delete the record(Y/N): "; cin>>confirm;
if(confirm=='N'||confirm=='n')
{ fp1.write((char*)&obj,sizeof(obj)); }
  }
else
{ fp1.write((char*)&obj,sizeof(obj)); }
 }
fp.close();
fp1.close();
remove("Railway.dat");
rename("Temporary.dat","Railway.dat");
if(f==0)
{ cout<<"Record does not exit."<<endl;}
charch;
cout<<"Do you want to delete records further(Y/N): ";
cin>>ch;
if(ch=='Y'||ch=='y')
obj.Delete_Record();
else
obj.Mainmenu();
}
void Railways::Print_Ticket()
{
clrscr();
 Railways obj;
long no; //It will use as a dummy PNR.
int i=0; //No record is processed.
int f=0; //Initially thinking record is not found.
cout<<"Enter the unique PNR no whose record to be found:";
cin>>no;
cout<<"\n";
fstreamfp;
fp.open("Railway.dat",ios::in|ios::binary);
fp.seekg(ios::beg);
while(fp.read((char*)&obj,sizeof(obj)))
 {
if(obj.Return_PNR()==no)
  {
fp.write((char*)&obj,sizeof(obj));
obj.Output();
i++; //Ticket is printed.
   f=1;
cout<<"\t\t\t\t       PRINT";
cout<<"\n\n\n\n\n";
break;
  }
 }
fp.close();
if(f==0)
{ cout<<"Record does not exit."<<endl; }
charch;
cout<<"Do you want to further Print Tickets(Y/N): ";
cin>>ch;
if(ch=='Y'||ch=='y')
obj.Print_Ticket();
else
obj.Mainmenu();
}
