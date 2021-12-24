#include <iostream>
#include <conio.h>

using namespace std;
int main()

{
	char a;
	
	cout<<"Where Do You Live In The United States ?"<<endl<<"(North || West || East || South )"<<endl<<endl<<"For Answering Just Type: ( n || w || e || s )"<<endl;

	cin>>a;
	
	if (a=='n') cout<<"You Live In North Of The US"<<endl;
	else if (a=='w') cout<<"You Live In West Of The US"<<endl;
	else if (a=='e') cout<<"You Live In East Of The US"<<endl;
	else if (a=='s') cout<<"You Live In South Of The US"<<endl;
	else cout<<"Are You A US Resident ?"<<endl<<endl<<"For Answering Juse Type : (yes || no)"<<endl;
	
	char b;
	cin>>b; 
	
	if (b=='yes' || b=='Yes' || b=='YES' || b=='y' || b=='Y') cout<<"Please Answer The Top Questions Again , Thank You"<<endl;
	else if (b!='yes') cout<<"Sorry , You Are Not Resident In The US"<<endl;
	else cout<<"Sorry , You Are Not Resident In The US "<<endl;
	
	getch();
}
