#include <iostream>
#include <windows.h>
#include <conio.h>
#include <time.h>
using namespace std;

int main()
{ int choice;
 cout<<"Enter your choice:"<<endl;
 cout<<"1.play game"<<endl<<"2.how to play"<<endl<<"3.credits"<<endl<<"4.exit"<<endl;
 cin>>choice;
  switch(choice)
  { case 1:
	{srand(time(0));
    char mv;
    char repeat='y';
    int highscore=0;
    while (repeat=='y'){
    int score=0;
    bool wasit=true;
    int x=9;
    int rintangan[3]; 
    int rintang[3]; 
    rintang[0]=10;
    rintang[1]=18;
    rintang[2]=27; 
    for (int i=0;i<3;i++)
    {
        rintangan[i]=(rand()-1)%12+2;
    }
    string map[20][30];
    for (int i=0;i<20;i++)
    {
        for (int j=0;j<30;j++)
        {
            if ( i==0 || i==19|| j==29 || j==0)
                map[i][j]="* ";
            else
                map[i][j]="  ";
        }
    }
    while (wasit == true)
    {
        for (int i =0;i<3;i++)
        {
            for (int j=1;j<19;j++)
            {
                map[j][rintang[i]]="  ";
            }
        }
        for (int i=0;i<3;i++)
        {
            rintang[i]--;
        }
        for (int i =0;i<3;i++) 
        {
            for (int j=1;j<19;j++)
            {
                map[j][rintang[i]]="* ";
            }
        }
        for (int i=0;i<3;i++)
        {
            map[rintangan[i]][rintang[i]]="  ";
            map[rintangan[i]+1][rintang[i]]="  ";
            map[rintangan[i]+2][rintang[i]]="  ";
            map[rintangan[i]+3][rintang[i]]="  ";
            map[rintangan[i]+4][rintang[i]]="  ";
        }
        for (int i=0;i<3;i++)
        {
            if (rintang[i]==1)
                {rintang[i]=28;
                rintangan[i]=(rand()-1)%12+2;
                }
        }
        map[x][3]="  ";
        if (kbhit())
        {
            mv=getch();
            x=x-3;
        }
        x++;
        if(x<1)
            x=1;
        for (int i=0;i<3;i++)
        {
            if (rintang[i]==3)
                if (map[x][3]=="  ")
                    score=score+1;
                if (map[x][3]=="* ")
                    wasit=false;
        }
        map[x][3]="& ";
        for (int i=1;i<19;i++)
        {
            map[i][1]="  ";
        }
        for (int i=0;i<20;i++)
        {
            for (int j=0;j<30;j++)
            {
                cout << map[i][j];
            }
        cout <<endl;
        }
        cout << "Score = "<<score<<endl;
       
    Sleep (100);
    system ("cls");
    }
    cout << "Score = " <<score<<endl;
    
	if(highscore<score)
    {
	highscore=score;}
    cout << "Highscore= "<<highscore<<endl;
    cout<<endl;
    cout<<"Thanks for playing this game"<<endl<<"I hope you enjoyed :-)"<<endl;
    cout<<"Created by- Ritvik"<<endl;
    cout<<endl;
    cout << "retry?(y/n) = "; cin >>repeat;}
    return 0;}
    break;
    
    case 2:{cout<<"Press Enter key to start the game"<<endl;
    		cout<<"Prevent the bird to crash with the walls and pass it through the gaps in the walls."<<endl;
    		cout<<"Keep pressing the spacebar key to mkae bird fly in air."<<endl;    		
			}
			break;
	
	case 3:cout<<"This game is made by ritvik jaiswal...."<<endl<<"ENJOY THE GAME.....!!"<<endl;
		break;
	
	case 4:return 0;		
}
}
