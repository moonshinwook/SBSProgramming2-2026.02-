#include <stdio.h>
#include <Windows.h>
int main()
{

	COORD pos; // X,Y 값있는 구조체 할당
	pos.X = 1; // X에 10 대입
	pos.Y = 10; // Y에 10 대입

	// GetStdHandle
	// Get : 가져옴.
	// Std: standard 대표적인
	// Handle : 컨트롤 할 요소 
	// STD_OUTPUT_HANDLE : 대표적인 컨트롤 요소 == 현재 떠있는 창
	
	while (true) 
	{
		system("cls");

		pos.X++;
		SetConsoleCursorPosition(GetStdHandle((STD_OUTPUT_HANDLE)), pos);

		printf("Hello world\n");

		Sleep(10);

	}
	return 0;


}