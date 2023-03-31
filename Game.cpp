#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
	int Map[10][10] = {
	{ 1,1,1,1,1,1,1,1,1,1 },
	{ 1,0,0,0,0,0,0,0,0,1 },
	{ 1,0,0,0,0,0,0,0,0,1 },
	{ 1,0,0,0,0,0,0,0,0,1 },
	{ 1,0,0,0,0,0,0,0,0,1 },
	{ 1,0,0,0,0,0,0,0,0,1 },
	{ 1,0,0,0,0,0,0,0,0,1 },
	{ 1,0,0,0,0,0,0,0,0,1 },
	{ 1,0,0,0,0,0,0,0,0,1 },
	{ 1,1,1,1,1,1,1,1,1,1 }
	};

	int PlayerX = 1;
	int PlayerY = 1;
	bool bIsRunning = true; //bool형 변수명 b

	while (bIsRunning) //GameLoop
	{
		//Frame
		
		//Input(); //입력을 받음;
		char Key;
		Key = _getch();
		//Tick();
		if (Key == 'd') // d를 입력하면 x쪽으로 움직임
		{
			PlayerX++;
		}
		else if (Key == 'a')
		{
			PlayerX--;
		}
		else if (Key == 'w')
		{
			PlayerY--;
		}
		else if (Key == 's')
		{
			PlayerY++;
		}
		else if (Key == 'q')
		{
			bIsRunning = false;
		}
		//Render();
		for (int Y = 0; Y < 10; ++Y)
		{
			for (int X = 0; X < 10; ++X)
				if (PlayerX == X && PlayerY == Y)
				{
					cout << "P ";
				}
				else if (Map[Y][X] == 1)
				{
					cout << "# ";
				}
				else if (Map[Y][X] == 0)
				{
					cout << "  ";
				}
			cout << endl;
		}
		//system("cls");
	}
	return 0;
}
