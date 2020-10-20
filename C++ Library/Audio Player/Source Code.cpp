#include<iostream>
#include<Windows.h>
#include"MMSystem.h"
using namespace std;

int main()
{
	PlaySound(TEXT("L's theme A.wav"), NULL, SND_SYNC);
	system("pause");
	return 0;
}
