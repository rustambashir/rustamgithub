#include<iostream>
#include<windows.h>
#include<mmsystem.h>
#include<conio.h>
#include<stdio.h>
#include<ctime>
#include<windows.h>
using namespace std;
void load();
void wid();
void s();
void nmd();

int main()
{
	
	system("color 3f");
	load();
	cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
}
void wid(int x, int y)
{
	COORD d;
	d.X=x;
	d.Y=y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),d);
}
void load()
{
	char a=219;
	wid(30,2);
	cout<<" \t    Play World";
	wid(30,4);
	for(int r=1; r<=22; r++)
	{
		for(int q=0; q<=20000000; q++);
			cout<<a;
			
	}


	cout<<" "<<endl;
//	cout<<"____________________________"<<endl;
	
	cout<<" "<<endl;
	Beep(1568, 200);
    Beep(1568, 200);
    Beep(1568, 200);
    Beep(1245, 1000);
    Beep(1397, 200);
    Beep(1397, 200);
    Beep(1397, 200);
    Beep(1175, 1000);

    cout<<endl;

	Sleep(1000);
    system("cls");	
    system("color A");
    while(true){
	
    HANDLE color=GetStdHandle(STD_OUTPUT_HANDLE);
	int i;
	char h=3;	
	SetConsoleTextAttribute(color, 8);
	cout<<"\t\t\t ";
	cout<<"    Music Player\n";
	SetConsoleTextAttribute(color, 4);
	cout<<"\t\t\t"<<h;
	SetConsoleTextAttribute(color, 15);
	cout<<"_______";
	SetConsoleTextAttribute(color, 4);
	cout<<h<<endl;
	SetConsoleTextAttribute(color, 15);
	//cout<<"\t\t\t\t\t\t\t\t\tSetting"<<endl;
	SetConsoleTextAttribute(color, 15);
	cout<<"\t\tIf You Want To Exit The Program\n";
	cout<<"\t\ttWrite Exit \n"; 
	
	cout<<"\n\n\n\n\n\n";
	cout<<" \n";
	cout<<" \n";
	//cout<<"\t\t\t";
	string si_in;
	cout<<"1) Acarde  "<<endl;
	cout<<"2) Very Sad Song\n";
	cout<<"Enter Song Name Or Number\n";
	getline(cin,si_in);
	system("cls");
	cout<<"\t\t\tEnjoy Music : )"<<endl;
	if(si_in=="1"||si_in=="Acarde "){
			PlaySound(TEXT("Acarde .wav"),NULL,SND_SYNC);
			system("cls");
 	
	}
	else if(si_in=="2"||si_in=="Very Sad Song"||si_in=="verysadsong"||si_in=="very sad song"){
			PlaySound(TEXT("verysadsong.wav"),NULL,SND_SYNC);
			system("cls");
	}
	else if(si_in=="Exit"||si_in=="exit"){
		system("cls");
		cout<<"\t\t\tThankks";
		{
			exit(0);
		}
	}
	else 
	{
		system("cls");
		SetConsoleTextAttribute(color, 4);
		cout<<"\t\t\tTRY AGAIN.....\n";
		Sleep(2000);
		system("cls");
	}
}
	
}
