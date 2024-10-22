#include <iostream> 
#include <windows.h> 

using namespace std;

void ToRight(char Screen[10][10], int &HeadPositionAx, int &HeadPositionAy)
{
	Screen[HeadPositionAx][HeadPositionAy] = '.';
	HeadPositionAx = (HeadPositionAx + 1) % 10;
	Screen[HeadPositionAx][HeadPositionAy] = '*';
}
void ToUp(char Screen[10][10], int& HeadPositionAx, int& HeadPositionAy)
{
	Screen[HeadPositionAx][HeadPositionAy] = '.';
	HeadPositionAy = (HeadPositionAy + 1) % 10;
	Screen[HeadPositionAx][HeadPositionAy] = '*';
}

void ToLeft(char Screen[10][10], int& HeadPositionAx,int& HeadPositionAy)
{
	Screen[HeadPositionAx][HeadPositionAy] = '.';
	if (HeadPositionAx == 0) 
	{
		HeadPositionAx = 10 - 1;
	}
	else
	{
	HeadPositionAx = (HeadPositionAx - 1) % 10;
	}
	Screen[HeadPositionAx][HeadPositionAy] = '*';
}

void ToDown(char Screen[10][10], int& HeadPositionAx, int& HeadPositionAy)
{
	Screen[HeadPositionAx][HeadPositionAy] = '.';
	if(HeadPositionAy == 0)
	{
		HeadPositionAy = 10 - 1;
	}
	else
	{
		HeadPositionAy = (HeadPositionAy - 1) % 10;
	}
	Screen[HeadPositionAx][HeadPositionAy] = '*';
}
void Update(char Screen[10][10])
{
	system("cls");
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			cout << Screen[i][j];
		}
		cout << endl;
	}
}

int main()
{
	char Screen[10][10];
	int HeadPositionAx = 0;
	int HeadPositionAy = 0;
	int ApplePosition = 0;
	int MoveKey = 0;
	bool FlagOfMoveKey = 0;
	int PreMovekey = 0;
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			Screen[i][j] = '.';
		}
	}
	Update(Screen);

	while (cin >> MoveKey)
	{
		switch (MoveKey)
		{
		case 6:
			ToUp(Screen, HeadPositionAx, HeadPositionAy);
			Update(Screen);
			break;
		case 4:
			ToDown(Screen, HeadPositionAx, HeadPositionAy);
			Update(Screen);
			break;
		case 5:
			ToRight(Screen, HeadPositionAx, HeadPositionAy);
			
			Update(Screen);
			break;
		case 8:
			ToLeft(Screen, HeadPositionAx, HeadPositionAy);
			
			Update(Screen);
			break;
		default:
			break;
		}
		
	}
}
