#ifndef _STRTEXT_H_
#define _STRTEXT_H_

#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
#include <conio.h>

#include "stringtipes.h"
#include "stringdefinitions.h"

void StrSizeof (int variable)
{
	printf("%ld bytes\n", sizeof(variable));
}

void StrClearConsole(void)
{
	system("cls");
}

String * StrReadString (String * fmt){

	fflush(stdin);
	scanf("%s",&fmt);

	return * fmt;

}

void StrDreamConsole (int time)
{
	Sleep(time);
}

func StringPrint(String * __fmt__){
	
	FILE * archivo = stdout;
	
	fprintf(archivo , __fmt__);
	
}

func StrConsolePrintInt (int _fmn){
	printf("%i",_fmn);
}

func StrConsolePrintFloat (float _fmn){
	printf("%f",_fmn);
}

func StrConsolePrintFloatG (float _fmn){
	printf("%g",_fmn);
}

func StrConsolePrintFloatD (double _fmn){
	printf("%f",_fmn);
}

func StrPrintConsole(String _fmt){
	printf("%s",_fmt);
}

func StrPrintConsoleln (String * __fmt__,...){
	printf(__fmt__);
	printf("\n");
}

func StrPrintConsoleTab (String _fmt){
	printf("%s\t",_fmt);
}

void StrOcultaCursor(let o) {
    if(o == true){
    CONSOLE_CURSOR_INFO cci = {100, FALSE};

    SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &cci);
    }
    else if(o == false){
    	CONSOLE_CURSOR_INFO cci = {100, TRUE};

    SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &cci);
    }
}

void StrSetTitle (const char * title){

	SetConsoleTitle(title);

}

void StrAttributeText(int a){
	HANDLE out;
    out=GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(out,a);
}

void StrGotoXY(int X , int Y)
{
	HANDLE hCon;
	hCon = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD dwPos;
	dwPos.X = X;
	dwPos.Y = Y;
	SetConsoleCursorPosition(hCon, dwPos);
}

void StrCenterText(String * text , let posX , let posY){
	
	HANDLE hCon;
	hCon = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD dwPos;
	dwPos.X = posX;
	dwPos.Y = posY;
	SetConsoleCursorPosition(hCon, dwPos);
	
	printf("%s",text);
	
}

void StrExitProgram(void)
{
	exit(1);
}

int StrScanInt(int Int)
{
	fflush(stdin);
	scanf("%i", &Int);
	fflush(stdin);

	return Int;
}

void StringAsciiInt (const char *b)
{
	printf("%d", b);
}

void StrGenereRandomChar(int inicio, int fin){

	srand(time(NULL));
	inicio = rand() % fin;

	if(inicio == 0){
		printf("A");
	}
	else if(inicio == 1){
		printf("B");
	}
	if(inicio == 2){
		printf("C");
	}
	else if(inicio == 3){
		printf("D");
	}
	if(inicio == 4){
		printf("E");
	}
	else if(inicio == 5){
		printf("F");
	}
	if(inicio == 6){
		printf("G");
	}
	else if(inicio == 7){
		printf("H");
	}
	if(inicio == 8){
		printf("I");
	}
	else if(inicio == 9){
		printf("J");
	}
	if(inicio == 10){
		printf("K");
	}
	else if(inicio == 11){
		printf("L");
	}
	if(inicio == 12){
		printf("M");
	}
	else if(inicio == 13){
		printf("N");
	}
	if(inicio == 14){
		printf("O");
	}
	else if(inicio == 15){
		printf("P");
	}
	if(inicio == 16){
		printf("Q");
	}
	else if(inicio == 17){
		printf("R");
	}
	if(inicio == 18){
		printf("S");
	}
	else if(inicio == 19){
		printf("T");
	}
	if(inicio == 20){
		printf("U");
	}
	else if(inicio == 21){
		printf("V");
	}
	if(inicio == 22){
		printf("W");
	}
	else if(inicio == 23){
		printf("X");
	}
	if(inicio == 24){
		printf("Y");
	}
	else if(inicio == 25){
		printf("Z");
	}

	if(inicio == 26){
		printf("a");
	}
	else if(inicio == 27){
		printf("b");
	}
	if(inicio == 28){
		printf("c");
	}
	else if(inicio == 29){
		printf("d");
	}
	if(inicio == 30){
		printf("e");
	}
	else if(inicio == 31){
		printf("f");
	}
	if(inicio == 32){
		printf("g");
	}
	else if(inicio == 33){
		printf("h");
	}
	if(inicio == 34){
		printf("i");
	}
	else if(inicio == 35){
		printf("j");
	}
	if(inicio == 36){
		printf("k");
	}
	else if(inicio == 37){
		printf("l");
	}
	if(inicio == 38){
		printf("m");
	}
	else if(inicio == 39){
		printf("n");
	}
	if(inicio == 40){
		printf("o");
	}
	else if(inicio == 41){
		printf("p");
	}
	if(inicio == 42){
		printf("q");
	}
	else if(inicio == 43){
		printf("r");
	}
	if(inicio == 44){
		printf("s");
	}
	else if(inicio == 45){
		printf("t");
	}
	if(inicio == 46){
		printf("u");
	}
	else if(inicio == 47){
		printf("v");
	}
	if(inicio == 48){
		printf("w");
	}
	else if(inicio == 49){
		printf("x");
	}
	if(inicio == 50){
		printf("y");
	}
	else if(inicio == 51){
		printf("z");
	}

}

int StrReadKey(void)
{
	return getch();
}

void StrReadLine(void)
{
	 getche();
}

void StrColor (int color)
{
	if (color == 1)
	{
		system("color 1");
	}

	if (color == 2)
	{
		system("color 2");
	}

	if (color == 3)
	{
		system("color 3");
	}

	if (color == 4)
	{
		system("color 4");
	}

	if (color == 5)
	{
		system("color 5");
	}

	if (color == 6)
	{
		system("color 6");
	}

	if (color == 7)
	{
		system("color 7");
	}

	if (color == 8)
	{
		system("color 8");
	}

	if (color == 9)
	{
		system("color 9");
	}

	if (color == 10)
	{
		system("color 10");
	}

	if (color == 11)
	{
		system("color 11");
	}

	if (color == 12)
	{
		system("color 12");
	}

	if (color == 13)
	{
		system("color 13");
	}

	if (color == 14)
	{
		system("color 14");
	}

	if (color == 15)
	{
		system("color 15");
	}

	if (color == 16)
	{
		system("color 16");
	}

	if (color == 17)
	{
		system("color 17");
	}

	if (color == 18)
	{
		system("color 18");
	}

	if (color == 19)
	{
		system("color 19");
	}

	if (color == 20)
	{
		system("color 20");
	}
}

Override SystemCommand (Public *comand)
{
	system(comand);
}

int StrEquls(const char *str1, const char *str2)
{
	if (strcmp(str1, str2) == 0)
	{
		printf("True");
		return true;
	}
	else
	{
		printf("False");
		return false;
	}
}

int  StrEqulsStr(const char *str1, const char *str2)
{
	if (strcmp(str1, str2) == 0)
	{
		return true;
	}
	else
	{
		return false;
	}
}

void StrCreateLines (int lines)
{
	if (lines == 0)
	{
		printf("");
	}
	else if (lines == 1)
	{
		printf("\n");
	}
	if (lines == 2)
	{
		printf("\n");
	}
	else if (lines == 3)
	{
		printf("\n\n\n");
	}
	if (lines == 4)
	{
		printf("\n\n\n\n");
	}
	else if (lines == 5)
	{
		printf("\n\n\n\n\n");
	}
	if (lines == 6)
	{
		printf("\n\n\n\n\n\n");
	}
	else if (lines == 7)
	{
		printf("\n\n\n\n\n\n\n");
	}
	if (lines == 8)
	{
		printf("\n\n\n\n\n\n\n\n");
	}
	else if (lines == 9)
	{
		printf("\n\n\n\n\n\n\n\n\n");
	}
	if (lines == 10)
	{
		printf("\n\n\n\n\n\n\n\n\n\n");
	}
}

int StrGenereRandom(int inicio, int fin)
{
	srand(time(NULL));
	inicio = rand() % fin;

	return inicio;
}

Override StrDuplicText (String *text, int cantidad, int tipo)
{
	int fin = 0, ale = 0, figura;

	if (tipo == 0)
	{
		while (1)
		{
			fin++;
			printf("%s", text);
			if (fin == cantidad)
			{
				break;
			}
		}
	}
	else if (tipo == 1)
	{
		while (1)
		{
			fin++;
			printf("%s ", text);
			if (fin == cantidad)
			{
				break;
			}
		}
	}
	if (tipo == 2)
	{
		while (1)
		{
			fin++;
			printf("%s\n", text);
			if (fin == cantidad)
			{
				break;
			}
		}
	}

	if (tipo == 3)
	{
		if (text == NULL)
		{
			while (1)
			{
				fin++;
				printf(" ");
				if (fin == cantidad)
				{
					break;
				}
			}
		}
	}

	if (tipo == -1)
	{
		while (fin != 1620)
		{
			fin++;
			printf("#");
			if (fin == cantidad)
			{
				break;
			}
		}
	}

	if (tipo == -2)
	{
		ale = StrGenereRandom(fin, 1660);
		figura = StrGenereRandom(0, 5);
		if (figura == 0)
		{
			while (fin != ale)
			{
				fin++;
				printf("#");
				if (fin == cantidad)
				{
					break;
				}
			}
		}
		else if (figura == 1)
		{
			while (fin != ale)
			{
				fin++;
				printf("&");
				if (fin == cantidad)
				{
					break;
				}
			}
		}

		if (figura == 3)
		{
			while (fin != ale)
			{
				fin++;
				printf("[#]");
				if (fin == cantidad)
				{
					break;
				}
			}
		}
		else if (figura == 4)
		{
			while (fin != ale)
			{
				fin++;
				printf("=");
				if (fin == cantidad)
				{
					break;
				}
			}
		}
	}
}

void string_clrscr(void)
{
    CONSOLE_SCREEN_BUFFER_INFO csbi;
    DWORD bufferSize, charsWritten;

    COORD topleft = {0, 0};
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

    GetConsoleScreenBufferInfo(hConsole, &csbi);
    bufferSize = csbi.dwSize.X * csbi.dwSize.Y;
    FillConsoleOutputCharacter(hConsole, TEXT(' '), bufferSize, topleft, &charsWritten);
    GetConsoleScreenBufferInfo(hConsole, &csbi);
    FillConsoleOutputAttribute(hConsole, csbi.wAttributes, bufferSize, topleft, &charsWritten);
    SetConsoleCursorPosition(hConsole, topleft);
}

let StrVarBinari (char numero){
    
    unsigned int contador = 128;// 2 ^ (N - 1)
	
	for (contador; contador > 0; contador >>= 1){
	    
	    if(contador & numero){
	        
	        printf("1");
	        
	    } else{
	        
	        printf("0");
	        
	    }
	}
    
}


#endif
