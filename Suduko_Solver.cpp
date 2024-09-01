#include <iostream>
#include <string>
#include <time.h>
#include <windows.h>
#include <fstream>
#include <cstdlib>


using namespace std;


string difficulty="easy";
string Tips="on";
string Tips_s;
string Dif;
string win="true";
int language=0;
string l[27][2];
int tipCount;

void create_language()
{
l[0][0]="1. New Game";					
l[1][0]="2. Options";					
l[2][0]="3. How to play?";					
//l[3][0]="4. Credits ";						
l[4][0]="4. Exit";						
l[5][0]="1. Set Dificulty";				
l[6][0]="2. Tips";						
//l[7][0]="3. Select Language";			
l[8][0]="3. Back";						
l[9][0]="1. Add Value";						
l[10][0]="2. Tip";						
l[11][0]="3. Check";					
l[12][0]="4. Solution";					
l[13][0]="5. Main Menu";				
l[14][0]="1. Easy";							
l[15][0]="2. Medium";					
l[16][0]="3. Hard";							
l[17][0]="1. On";						
l[18][0]="2. Off";							
l[19][0]="On";								
l[20][0]="Off";							
l[21][0]="Easy";						
l[22][0]="Medium";						
l[23][0]="Hard";						
l[24][0]="Value";						
l[25][0]="YOU WON!";						
l[26][0]="YOU LOST!";						
}


void new_game(int game);
void Options();
void How_to_play();
void MainMenu();
class Array
{
private:
    int value;
	public:
	void add_value(int v)
	{
		value=v;
	}

	int get_value()
	{
		return value;
	}
};

class Cell :public Array
{
private:
    string visible;
	public:
		void change_visible(string v)
	{
		visible=v;
	}
	string get_visible()
	{
		return visible;
	}
};


Array a[9][9];
Cell c[9][9];
Cell s[9][9];

void give_visible()
{
for(int i=0; i<9; i++)
{
	for(int j=0; j<9; j++)
	{
		c[i][j].change_visible("false");
	}
}
}


	
void draw_line(int length)
{
	for(int i=0; i<length; i++)
	{
		cout<<"-";
	}
}
	
void set_numbers(int line)
{
	for(int i=0; i<3; i++)
	{
		cout<<c[i][line].get_value()<<" ";
	}
		cout<<"| ";
	for(int i=3; i<6; i++)
	{
		cout<<c[i][line].get_value()<<" ";
	}
	    cout<<"| ";
	for(int i=6; i<9; i++)
	{
		cout<<c[i][line].get_value()<<" ";
	}
		
}
	
void add_element()
{
 	int x, y, v;
 	cout<<"X : ";
 	cin>>x;
	cout<<"Y : ";
	cin>>y;
	cout<<l[24][language]<<" : ";
	cin>>v;
	if(s[x][y].get_value() == 0)
 	c[x][y].add_value(v);
 	else
	  {
	 	cout<<endl<<"value cannot be inserted in this position"<<endl;
 		cout<<"********************************************************************"<<endl<<endl;
	}
}
void check();
void show_tip()
{
 	if(c[0][0].get_visible()=="true"&&c[1][0].get_visible()=="true" &&c[2][0].get_visible()=="true" &&c[3][0].get_visible()=="true" &&c[4][0].get_visible()=="true" &&c[5][0].get_visible()=="true" &&c[6][0].get_visible()=="true" &&c[7][0].get_visible()=="true" &&c[8][0].get_visible()=="true" &&c[0][1].get_visible()=="true" &&c[1][1].get_visible()=="true" &&c[2][1].get_visible()=="true" &&c[3][1].get_visible()=="true" &&c[4][1].get_visible()=="true" &&c[5][1].get_visible()=="true" &&c[6][1].get_visible()=="true" &&c[7][1].get_visible()=="true" &&c[8][1].get_visible()=="true" &&c[0][2].get_visible()=="true" &&c[1][2].get_visible()=="true" &&c[2][2].get_visible()=="true" &&c[3][2].get_visible()=="true" &&c[4][2].get_visible()=="true" &&c[5][2].get_visible()=="true" &&c[6][2].get_visible()=="true" &&c[7][2].get_visible()=="true" &&c[8][2].get_visible()=="true" &&c[0][3].get_visible()=="true" &&c[1][3].get_visible()=="true" &&c[2][3].get_visible()=="true" &&c[3][3].get_visible()=="true" &&c[4][3].get_visible()=="true" &&c[5][3].get_visible()=="true" &&c[6][3].get_visible()=="true" &&c[7][3].get_visible()=="true" &&c[8][3].get_visible()=="true" &&c[0][4].get_visible()=="true" &&c[1][4].get_visible()=="true" &&c[2][4].get_visible()=="true" &&c[3][4].get_visible()=="true" &&c[4][4].get_visible()=="true" &&c[5][4].get_visible()=="true" &&c[6][4].get_visible()=="true" &&c[7][4].get_visible()=="true" &&c[8][4].get_visible()=="true" &&c[0][5].get_visible()=="true" &&c[1][5].get_visible()=="true" &&c[2][5].get_visible()=="true" &&c[3][5].get_visible()=="true" &&c[4][5].get_visible()=="true" &&c[5][5].get_visible()=="true" &&c[6][5].get_visible()=="true" &&c[7][5].get_visible()=="true" &&c[8][5].get_visible()=="true" &&c[0][6].get_visible()=="true" &&c[1][6].get_visible()=="true" &&c[2][6].get_visible()=="true" &&c[3][6].get_visible()=="true" &&c[4][6].get_visible()=="true" &&c[5][6].get_visible()=="true" &&c[6][6].get_visible()=="true" &&c[7][6].get_visible()=="true" &&c[8][6].get_visible()=="true" &&c[0][7].get_visible()=="true" &&c[1][7].get_visible()=="true" &&c[2][7].get_visible()=="true" &&c[3][7].get_visible()=="true" &&c[4][7].get_visible()=="true" &&c[5][7].get_visible()=="true" &&c[6][7].get_visible()=="true" &&c[7][7].get_visible()=="true" &&c[8][7].get_visible()=="true" &&c[0][8].get_visible()=="true" &&c[1][8].get_visible()=="true" &&c[2][8].get_visible()=="true" &&c[3][8].get_visible()=="true" &&c[4][8].get_visible()=="true" &&c[5][8].get_visible()=="true" &&c[6][8].get_visible()=="true" &&c[7][8].get_visible()=="true" &&c[8][8].get_visible()=="true")
    {
    	int choice;
      cout<<"Your sudoku puzzle is filled completely"<<endl;
      cout<<"Enter 3 to check"<<endl;
      cin>>choice;
      if(choice==3)
      check();
      else 
      exit(0);
    }
	if(tipCount<2)
	{
   int x_axis=0;
   int y_axis=0;
   tipCount++;
   srand(time(NULL));
   x_axis=rand()%9+0;	y_axis=rand()%9+0;
   Check:
	if(c[x_axis][y_axis].get_visible()=="true")
	{
		do
		{
			x_axis=rand()%9+0;
			y_axis=rand()%9+0;
			goto Check;
		}
		while(c[x_axis][y_axis].get_visible()=="true");
	}
	else
	{
		c[x_axis][y_axis].add_value(a[x_axis][y_axis].get_value());
		c[x_axis][y_axis].change_visible("true");
	}
	}
	else
	{
		int choice;
		cout<<"Your Maximum limit of tips have reached"<<endl;
		cout<<"Enter 1 to add value"<<endl;
	      cin>>choice;
	      if(choice==1)
	      add_element();
	      else
	      exit(0);
		 }
}
 
 void show_solution()
{
 	for(int i=0; i<9; i++)
 	{
 		for(int j=0; j<9; j++)
 		{
 			c[i][j].add_value(a[i][j].get_value());
 			c[i][j].change_visible("true");
		 }
	 }
}
 
void check()
{
 	for(int i=0; i<9; i++)
 	{
 		for(int j=0; j<9; j++)
 		{
 			if(c[i][j].get_value()!=a[i][j].get_value())
 			{
 				win="false";
			 }
		 }
	 }
	 if(win=="true")
	 {
	 	int read=0;
	 	system("cls");
	 	cout<<l[25][language]<<endl<<endl<<l[13][language]<<endl;
	 	cin>>read;
	 	if(read==5)
	 	{
			MainMenu();
		}
	}
 
		 
	 }
	
void show()
	{
		cout<<"y|x"<<" |"<<" 0"<<" 1"<<" 2"<<" |"<<" 3"<<" 4"<<" 5"<<" |"<<" 6"<<" 7"<<" 8"<<endl;
		draw_line(30);cout<<endl;
		cout<<"  0"<<" | ";set_numbers(0);cout<<endl;
		cout<<"  1"<<" | ";set_numbers(1);cout<<endl;
		cout<<"  2"<<" | ";set_numbers(2);cout<<endl;
		draw_line(30);cout<<endl;
		cout<<"  3"<<" | ";set_numbers(3);cout<<endl;
		cout<<"  4"<<" | ";set_numbers(4);cout<<endl;
		cout<<"  5"<<" | ";set_numbers(5);cout<<endl;
		draw_line(30);cout<<endl;
		cout<<"  6"<<" | ";set_numbers(6);cout<<endl;
		cout<<"  7"<<" | ";set_numbers(7);cout<<endl;
		cout<<"  8"<<" | ";set_numbers(8);cout<<endl;
		draw_line(60);cout<<endl;
		for(int i=0;i<9;i++){
			for(int j=0;j<9;j++){
				s[i][j] = c[i][j];
			}
		}
					int read=0;
 	cout<<endl<<l[9][language]<<endl<<l[10][language]<<endl<<l[11][language]<<endl<<l[12][language]<<endl<<l[13][language]<<endl;
 	cin>>read;
 	switch(read)
 	{
 		case 1:
 		
 			add_element();
 			system("cls");
 			show();
 		break;
 		case 2:
 			if(Tips=="on")
 			{
 			 show_tip();
 			 system("cls");
 			 show();
 			}
 			else {
			 system("cls");
			  cout<<"Tips were turned off"<<endl<<endl;
			 show();
			 }
 		break;
 		case 3:
 			 check();
 		break;
 		case 4:
 			 show_solution();
 			 system("cls");
 			 cout<<"y|x"<<" |"<<" 0"<<" 1"<<" 2"<<" |"<<" 3"<<" 4"<<" 5"<<" |"<<" 6"<<" 7"<<" 8"<<endl;
		draw_line(30);cout<<endl;
		cout<<"  0"<<" | ";set_numbers(0);cout<<endl;
		cout<<"  1"<<" | ";set_numbers(1);cout<<endl;
		cout<<"  2"<<" | ";set_numbers(2);cout<<endl;
		draw_line(30);cout<<endl;
		cout<<"  3"<<" | ";set_numbers(3);cout<<endl;
		cout<<"  4"<<" | ";set_numbers(4);cout<<endl;
		cout<<"  5"<<" | ";set_numbers(5);cout<<endl;
		draw_line(30);cout<<endl;
		cout<<"  6"<<" | ";set_numbers(6);cout<<endl;
		cout<<"  7"<<" | ";set_numbers(7);cout<<endl;
		cout<<"  8"<<" | ";set_numbers(8);cout<<endl;
		draw_line(60);cout<<endl;
		for(int i=0;i<9;i++){
			for(int j=0;j<9;j++){
				s[i][j] = c[i][j];
			}
		}
		int temp;
		cout<<"Enter 1 to go to main menu"<<endl;
		cin>>temp;
		if(temp==1)
			system("cls");
 	cout<<l[0][language]<<endl<<l[1][language]<<endl<<l[2][language]<<endl<<l[4][language]<<endl;
 	cin>>read;
 	switch(read)
 	{
 		case 1:
 			if(difficulty=="easy")
 			{
 				new_game(65);
			 }
			 if (difficulty=="medium")
			 {
			 	new_game(35);
			 }
			 else
			 {
			 	new_game(20);
			 }
		break;
		
		case 2:
			Options();
			break;
		case 3:
			How_to_play();
			break;
		case 4:
			exit(0);
	     }			
			
 		break;
 		case 5:
	 {
	system("cls");
 	cout<<l[0][language]<<endl<<l[1][language]<<endl<<l[2][language]<<endl<<l[4][language]<<endl;
 	cin>>read;
 	switch(read)
 	{
 		case 1:
 			if(difficulty=="easy")
 			{
 				new_game(65);
			 }
			 if (difficulty=="medium")
			 {
			 	new_game(35);
			 }
			 else
			 {
			 	new_game(20);
			 }
		break;
		
		case 2:
			Options();
			break;
		case 3:
			How_to_play();
			break;
		case 4:
			exit(0);
	     }			
	   }
    }
}

void gen(int difficulty)	
{
		int x_axis=0;
		int y_axis=0;
		srand(time(NULL));
		for(int i=0; i<difficulty; i++)
		{
			x_axis=rand()%9+0;
			y_axis=rand()%9+0;

			c[x_axis][y_axis].add_value(a[x_axis][y_axis].get_value());
			c[x_axis][y_axis].change_visible("true");
		}
	}

 
 int sudoku[9][9]= {               
	{0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0},			
	{0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0}
};

bool solve(int x, int y);                 


int curr[9][9];
bool can_insert(int x, int y, int value) {
    for(int i = 0; i < 9; i++) {
		if (value == curr[x][i] || value == curr[i][y] ||
            value == curr[x/3*3+i%3][y/3*3+i/3]) return false;
    } return true;
}

bool next(int x, int y) {
    if (x == 8 && y == 8) return true;
    else if (x == 8) return solve(0, y + 1);
    else return solve(x + 1, y);
}

bool solve(int x, int y) {
    if (sudoku[x][y] == 0) {
		for(int i = 1; i <= 9; i++) {
            if (can_insert(x, y, i)) {
				curr[x][y] = i;
                if (next(x, y)) return true;
            }
		} curr[x][y] = 0; return false;
    } return next(x, y);
}
 
void generuj() {
		int x_axis=0;
		int y_axis=0;
		int value=0;
		srand(time(NULL));
		for(int i=0; i<5; i++)
		{
			x_axis=rand()%9+0;
			y_axis=rand()%9+0;
			sudoku[x_axis][y_axis]=rand()%9+0;
		}  
	for(int i=0; i<9; i++)
        for(int j=0; j<9; j++)
			curr[i][j] = sudoku[i][j];
	if (solve(0,0)) {
		for(int i=0; i<9; i++) {
			for(int j=0; j<9; j++) {
				a[i][j].add_value(curr[i][j]);
			} 
		}
	}
 }
 
  void new_game(int game)	
 {
 	system("cls");
 	tipCount=0;
 	generuj();
	gen(game);
	show();
 
 }
 
 void Set_difficulty()
 {
 	system("cls");
 	int read=0;
 	cout<<l[14][language]<<endl<<l[15][language]<<endl<<l[16][language]<<endl;
 	cin>>read;
 	switch(read)
 	{
 		case 1:
 			difficulty="easy";
 			break;
 		case 2:
 			difficulty="medium";
 			break;
 		case 3:
 			difficulty="hard";
 			break;
	 }
 }
 
 void Show_difficulty()
 {
 	if(difficulty=="easy")
 	{
 		Dif=l[21][language];
	 }
	 if(difficulty=="medium")
	 {
	 	Dif=l[22][language];
	 }
	 if(difficulty=="hard")
	 {
	 	Dif=l[23][language];
	 }
 }
 
 void Tipsf()
 {
 	system("cls");
 	int read;
 	cout<<l[17][language]<<endl<<l[18][language]<<endl;
 	cin>>read;
 	if(read==1)
 	{
 		Tips="on";
	 }
	 else
	 {
	 	Tips="off";
	 }	
 }
 
 
 void Show_tips()
 {
 	if(Tips=="on")
 	{
 		Tips_s=l[19][language];
	 }
	 else
	 {
	 	Tips_s=l[20][language];
	 }
 }
 void MainMenu();
void Options();
 void How_to_play()
 {
 	system("cls");
 	switch(language)
 	{
 		case 0:
 			cout<<"SUDOKU"<<endl<<endl<<"Your goal is to set 1-9 numbers that there are no two same numbers in a line or in a column."<<endl<<"Also, there have to be all of 1-9 numbers in one big 3x3 square."<<endl<<"'0' are the empty places."<<endl<<endl<<"Functions:"<<endl<<"Add Value - enter coordinates and a number and it'll appear on the board"<<endl<<"Tip - shows one random number on the board"<<endl<<"Check - check if you won"<<endl<<"Solution - shows the right solution of the game"<<endl<<endl<<"Have fun!";
		break;
		
	}
	 int read=0;
	 cout<<endl<<l[8][language]<<endl;
	 cin>>read;
	 if(read==3)
	 {
		MainMenu();
	 }
}
  
 void Options()
 {
 	Show_tips();
 	Show_difficulty();
 	system("cls");
 	int read=0;
 	cout<<l[5][language]<<" ["<<Dif<<"]"<<endl<<l[6][language]<<" ["<<Tips_s<<"] "<<endl<<l[8][language]<<endl;
 	cin>>read;
 	
 	switch(read)
 	{
 		case 1:
 			Set_difficulty();
 			Options();
 			break;
 		case 2:
 			Tipsf();
 			Options();
 			break;
 		case 3:
 			system("cls");
 			 	int read=0;
 	cout<<l[0][language]<<endl<<l[1][language]<<endl<<l[2][language]<<endl<<l[4][language]<<endl;
 	cin>>read;
 	switch(read)
 	{
 		case 1:
 			if(difficulty=="easy")
 			{
 				new_game(65);
			 }
			 if (difficulty=="medium")
			 {
			 	new_game(35);
			 }
			 else
			 {
			 	new_game(20);
			 }
		break;
		
		case 2:
			Options();
			break;
		case 3:
			How_to_play();
			break;
		case 4:
			exit(0);
	 }		
	 }
 }


void MainMenu()
 {
 	system("cls");
 	int read=0;
 	cout<<l[0][language]<<endl<<l[1][language]<<endl<<l[2][language]<<endl<<l[4][language]<<endl;
 	cin>>read;
 	switch(read)
 	{
 		case 1:
 			if(difficulty=="easy")
 			{
 				new_game(65);
			 }
			 if (difficulty=="medium")
			 {
			 	new_game(35);
			 }
			 else
			 {
			 	new_game(20);
			 }
		break;
		
		case 2:
			Options();
			break;
		case 3:
			How_to_play();
			break;
		case 4:
			exit(0);
	 }
 }

 
  void start()
 {
 	create_language();
 	int read=0;
 	cout<<"		************************** WELCOME TO SUDOKU ********************************\n\n\n\n"<<endl;
 	cout<<"Enter 1 to continue the game"<<endl;
	cin>>read;
	if(read==1)
	 MainMenu();
	 else
	 exit(0);
 }
 
int main()
{
give_visible();
start();
return 0;
}
