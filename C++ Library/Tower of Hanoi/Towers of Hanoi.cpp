#include<iostream>
#include<stdio.h>
#include<cstdlib>
using namespace std;
void transfer (int, char, char, char);
int main()
{
    int no_of_disks;
    system ("color a");
    next_level:
    	cout<<endl;
    	cout<<"______**********WELCOME TO THE TOWERS OF HONAI**********______\n\n";
		system("color 3");                                                                                                          
		cout<<"                     .'''.                                  .'''.                                 .'''.        \n";     
		system("color 4");
		cout<<"                    |.....|                                |.....|                               |.....|       \n";
		system("color 0");
		cout<<"                 ...;:::::;...                             |.....|                               |.....|       \n";      
		system("color 3");
		cout<<"                :WWWWWWWWWWWWl                             |.....|                               |.....|       \n";
		system("color 4");
		cout<<"                :WWWWWWWWWWWWl                             |.....|                               |.....|       \n";
		system("color 0");
		cout<<"                :WWWWWWWWWWWWl                             |.....|                               |.....|       \n";
		system("color 3");
		cout<<"              :WWWWWWWWWWWWWWWWk                           |.....|                               |.....|       \n";
		system("color 4");
		cout<<"              :WWWWWWWWWWWWWWWWk                           |.....|                               |.....|       \n";
		system("color 0");
		cout<<"              :WWWWWWWWWWWWWWWWk                           |.....|                               |.....|       \n";      
		system("color 3");
		cout<<"          .WWWWWWWWWWWWWWWWWWWWWWWWWo                      |.....|                               |.....|       \n";
		system("color 4");
		cout<<"          .WWWWWWWWWWWWWWWWWWWWWWWWWo                      |.....|                               |.....|       \n";
		system("color 0");
		cout<<"          .WWWWWWWWWWWWWWWWWWWWWWWWWo                      |.....|                               |.....|       \n";   
		system("color 3");
		cout<<"      :WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW0                  |.....|                               |.....|       \n";
		system("color 4");
		cout<<"      :WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW0                  |.....|                               |.....|       \n";
		system("color 0");
		cout<<"      :WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW0                  |.....|                               |.....|       \n";
		system("color 3");
		cout<<" MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM   \n";
		system("color 4");
		cout<<" MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM   \n";                                                                                                 
		system("color 0");
		cout<<" ____________________________________________________________________________________________________________   \n";                                                                                                 
		system("color a");
		cout<<"\n\n\tHow many disks do you have?\n";
    	cin>>no_of_disks;
    	cout<<"\n\n\n";
		transfer (no_of_disks, 'L', 'R','C');
		cout<<"\n\n\n\n\n\n\t\t**********************************\t\tENTER \"Ctrl+C\" TO EXIT AT ANY INSTANT!";
		cout<<"\t\t**********************************\n\n\n\n\n\n";
	goto next_level;
    return 0;
}
void transfer (int No_of_disks, char Source, char Destination, char Adjunct)
{
	if (No_of_disks>0)
	{
		transfer (No_of_disks - 1, Source, Adjunct, Destination);
    	printf ("Move disk %d from %c to %c\n", No_of_disks, Source, Destination);
    	transfer (No_of_disks - 1, Adjunct, Destination, Source);
    }
}
