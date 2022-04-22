#ifndef _STRINGASEETS_H_
#define _STRINGASEETS_H_

#include "strtext.h"
#include "stringfiles.h"

enum color
{
    black,
    darkblue,
    darkgreen,
    darkcyan,
    darkred,
    darkpurple,
    darkgray,
    darkwhite,
    gray,
    blue,
    green,
    cyan,
    red,
    purple,
    yellow,
    white
};

char grid[20][41]=                                    ///arena
                      {"XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", /// X: wall
                       "X          c                           X", /// c: cpu
                       "X                                      X", /// u: user
                       "X                                      X", /// b: user's bullet
                       "X                                      X", /// B: cpu's bullet
                       "X                                      X", ///boomerang(array): boomerang
                       "X                                      X", ///wall(array): user's wall
                       "X                                      X",
                       "X                                      X",
                       "X                                      X",
                       "X                                      X",
                       "X                                      X",
                       "X                                      X",
                       "X                                      X",
                       "X                                      X",
                       "X                                      X",
                       "X                                      X",
                       "X                                      X",
                       "X          u                           X",
                       "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"};

void pixelEasyPrint(const char * txt){

	printf("%s",txt);

}

void StringCreateImg (char nombre[1024], const char *Contenido)
{
	char cat[1024] = ".img";
	char nose[1024];

	FILE *file;

	strcpy(nose, nombre);

	strcat(nose, cat);

	file = fopen(nose, "w");

	if (file == NULL)
	{
		printf("StringLibrary: \" %s \" error no create img'", nombre);
		return;
	}

	fprintf(file, "%s", Contenido);
	printf("StringLibrary: Se ha guardado\n");
}

void StringReadImg(char nombre[1024])
{
	char cat[1024] = ".img";
	char nose[1024];

	FILE *file;

	strcpy(nose, nombre);

	strcat(nose, cat);

	file = fopen(nose, "r");

	if (file == NULL)
	{
		printf("StringLibrary: \" %s \" -> 'Inixistente' ", nombre);
		return;
	}
    StringReadFileModeRB(nose);
}

void StringPrintChar (int dibujo)
{
	if (dibujo == 0)
	{
		printf("%%");
	}
	else if (dibujo == 1)
	{
		printf("\\");
	}
	if (dibujo == 2)
	{
		printf("|");
	}
	else if (dibujo == 3)
	{
		printf("=");
	}
	if (dibujo == 4)
	{
		printf("[");
	}
	else if (dibujo == 5)
	{
		printf("]");
	}
	if (dibujo == 6)
	{
		printf("<");
	}
	else if (dibujo == 7)
	{
		printf(">");
	}
	if (dibujo == 8)
	{
		printf("{");
	}
	else if (dibujo == 9)
	{
		printf("}");
	}
	if (dibujo == 10)
	{
		printf("@");
	}
	else if (dibujo == 11)
	{
		printf("#");
	}
	if (dibujo == 12)
	{
		printf("$");
	}
	else if (dibujo == 13)
	{
		printf("_");
	}
	if (dibujo == 14)
	{
		printf("&");
	}
	else if (dibujo == 15)
	{
		printf("-");
	}
	if (dibujo == 16)
	{
		printf("+");
	}
	else if (dibujo == 17)
	{
		printf("(");
	}
	if (dibujo == 18)
	{
		printf(")");
	}
	else if (dibujo == 19)
	{
		printf("/");
	}
	if (dibujo == 20)
	{
		printf("*");
	}
	else if (dibujo == 21)
	{
		printf("\"");
	}
	if (dibujo == 22)
	{
		printf("'");
	}
	else if (dibujo == 23)
	{
		printf(":");
	}
	if (dibujo == 24)
	{
		printf(";");
	}
	else if (dibujo == 25)
	{
		printf("!");
	}
	if (dibujo == 26)
	{
		printf("?");
	}
	else if (dibujo == 27)
	{
		printf("ñ");
	}
	if (dibujo == 28)
	{
		printf("~");
	}
	else if (dibujo == 29)
	{
		printf("`");
	}
	if (dibujo == 30)
	{
		printf("•");
	}
	else if (dibujo == 31)
	{
		printf("°");
	}
	if (dibujo == 32)
	{
		printf("×");
	}
	else if (dibujo == 33)
	{
		printf("∆");
	}
	if (dibujo == 34)
	{
		printf("^");
	}
	else if (dibujo == 35)
	{
		printf("÷");
	}
	if (dibujo == 36)
	{
		printf("¶");
	}
}

void charCreateSprit(char nombre[1024], const char *Contenido)
{
	char cat[1024] = ".Sprit";
	char nose[1024];

	FILE *file;

	strcpy(nose, nombre);

	strcat(nose, cat);

	file = fopen(nose, "w");

	if (file == NULL)
	{
		printf("StringLibrary: \" %s \" es NULL", nombre);
		return;
	}

	fprintf(file, "%s", Contenido);
	printf("StringLibrary: Se guardo...\n");
}

void StringReadSprit(char nombre[1024])
{
	char cat[1024] = ".sprit";
	char nose[1024];

	FILE *file;

	strcpy(nose, nombre);

	strcat(nose, cat);

	file = fopen(nose, "r");

	if (file == NULL)
	{
		printf("StringLibrary: \" %s \" -> 'Inixistente' ", nombre);
		return;
	}
	StringReadFileModeRB(nose);
}

Override StringSaveDataProject(char nombre[1024], const char *Contenido, const char *User, const char *Company)
{
	char cat[1024] = ".dat";
	char nose[1024];

	FILE *file;

	strcpy(nose, nombre);

	strcat(nose, cat);

	file = fopen(nose, "w");

	if (file == NULL)
	{
		printf("StringLibrary: \" %s \" No se pudo crear", nombre);
		return;
	}

	fprintf(file, "%s\nProyectUser %s\nCompany: %s", Contenido, User, Company);
	printf("StringLibrary: Se ha guardado los datos\n");
}

Override StringReadDataProject(char nombre[1024])
{
	char cat[1024] = ".dat";
	char nose[1024];

	FILE *file;

	strcpy(nose, nombre);

	strcat(nose, cat);

	file = fopen(nose, "r");

	if (file == NULL)
	{
		printf("StringLibrary: \" %s \" el project data es null", nombre);
		return;
	}

	StringReadFileModeRB(nose);
}

Override Juego_ImprimeF(String *  __fmt, ...)
{
	printf(__fmt);
}

void charClear (){

	system("cls");

}

void charNewLines (int cand){

	if(cand == 1){
		printf("\n");
	}
	else if(cand == 2){
		printf("\n\n");
	}

}

int Juego_Lee_Tecla()
{
	return getch();
}

Override StringOpenCreatorSprit(char nombre_de_archivo[1024])
{
	FILE *db;
	char caracters[1024] = {'%', '\\', '|', '=', '[', ']', '<', '>', '{', '}', '@', '#', '$', '_', '&', '-', '+', '(', ')', '/', '*', '\"', '\'', ':', ';', '!', '?', '~', '`', 'N' , 'A' , 'B' , 'C'};
	int opcion = 1;

	int i;

	char cat[1024] = ".sprit";
	char nose[1024];

	strcpy(nose, nombre_de_archivo);

	strcat(nose, cat);

	db = fopen(nose, "a");

	if (db == NULL)
	{
		perror("char ");
	}

	while (opcion != 33)
	{
		charClear();
		printf("\n\nGuardando en: %s\n", nose);
		printf("                                  CreatorSprits\n\n");
		printf("Opciones: 0 - 32\n\n");
		printf("33 para terminar\n\n");
		printf("Version: 1.1\n\n");
		printf("Marterial: \n\n");
		for (i = 0; i < 30; i++)
		{
			printf(" [%c] ", caracters[i]);
		}

		charNewLines(1);
		printf("\n");
		printf(">> ");
		opcion = StrScanInt(opcion);
		charNewLines(1);

		if (opcion == 0)
		{
			fprintf(db, "%c", caracters[0]);
			printf("StringLibrary: Se ha guardado el caracter: [%c]\n", caracters[0]);
			Juego_Lee_Tecla();
		}
		else if (opcion == 1)
		{
			fprintf(db, "%c", caracters[1]);
			printf("StringLibrary: Se ha guardado el caracter: [%c]\n", caracters[1]);
			Juego_Lee_Tecla();
		}
		if (opcion == 2)
		{
			fprintf(db, "%c", caracters[2]);
		    printf("StringLibrary: Se ha guardado el caracter: [%c]\n", caracters[2]);
			Juego_Lee_Tecla();
		}
		else if (opcion == 3)
		{
			fprintf(db, "%c", caracters[3]);
			printf("StringLibrary: Se ha guardado el caracter: [%c]\n", caracters[3]);
			Juego_Lee_Tecla();
		}
		if (opcion == 4)
		{
			fprintf(db, "%c", caracters[4]);
			printf("StringLibrary: Se ha guardado el caracter: [%c]\n", caracters[4]);
			Juego_Lee_Tecla();
		}
		else if (opcion == 5)
		{
			fprintf(db, "%c", caracters[5]);
			printf("StringLibrary: Se ha guardado el caracter: [%c]\n", caracters[5]);
			Juego_Lee_Tecla();
		}
		if (opcion == 6)
		{
			fprintf(db, "%c", caracters[6]);
			printf("StringLibrary: Se ha guardado el caracter: [%c]\n", caracters[6]);
			Juego_Lee_Tecla();
		}
		else if (opcion == 7)
		{
			fprintf(db, "%c", caracters[7]);
			printf("StringLibrary: Se ha guardado el caracter: [%c]\n", caracters[7]);
			Juego_Lee_Tecla();
		}
		if (opcion == 8)
		{
			fprintf(db, "%c", caracters[8]);
			printf("StringLibrary: Se ha guardado el caracter: [%c]\n", caracters[8]);
			Juego_Lee_Tecla();
		}
		else if (opcion == 9)
		{
			fprintf(db, "%c", caracters[9]);
			printf("StringLibrary: Se ha guardado el caracter: [%c]\n", caracters[9]);
			Juego_Lee_Tecla();
		}
		if (opcion == 10)
		{
			fprintf(db, "%c", caracters[10]);
			printf("StringLibrary: Se ha guardado el caracter: [%c]\n", caracters[10]);
			Juego_Lee_Tecla();
		}
		else if (opcion == 11)
		{
			fprintf(db, "%c", caracters[11]);
			printf("StringLibrary: Se ha guardado el caracter: [%c]\n", caracters[11]);
			Juego_Lee_Tecla();
		}
		if (opcion == 12)
		{
			fprintf(db, "%c", caracters[12]);
			printf("StringLibrary: Se ha guardado el caracter: [%c]\n", caracters[12]);
			Juego_Lee_Tecla();
		}
		else if (opcion == 13)
		{
			fprintf(db, "%c", caracters[13]);
			printf("StringLibrary: Se ha guardado el caracter: [%c]\n", caracters[13]);
			Juego_Lee_Tecla();
		}
		if (opcion == 14)
		{
			fprintf(db, "%c", caracters[14]);
			printf("StringLibrary: Se ha guardado el caracter: [%c]\n", caracters[14]);
			Juego_Lee_Tecla();
		}
		else if (opcion == 15)
		{
			fprintf(db, "%c", caracters[15]);
			printf("StringLibrary: Se ha guardado el caracter: [%c]\n", caracters[15]);
			Juego_Lee_Tecla();
		}
		if (opcion == 16)
		{
			fprintf(db, "%c", caracters[16]);
			printf("StringLibrary: Se ha guardado el caracter: [%c]\n", caracters[16]);
			Juego_Lee_Tecla();
		}
		else if (opcion == 17)
		{
			fprintf(db, "%c", caracters[17]);
			printf("StringLibrary: Se ha guardado el caracter: [%c]\n", caracters[17]);
			Juego_Lee_Tecla();
		}
		if (opcion == 18)
		{
			fprintf(db, "%c", caracters[18]);
			printf("StringLibrary: Se ha guardado el caracter: [%c]\n", caracters[18]);
			Juego_Lee_Tecla();
		}
		else if (opcion == 19)
		{
			fprintf(db, "%c", caracters[19]);
			printf("StringLibrary: Se ha guardado el caracter: [%c]\n", caracters[19]);
			Juego_Lee_Tecla();
		}
		if (opcion == 20)
		{
			fprintf(db, "%c", caracters[20]);
			printf("StringLibrary: Se ha guardado el caracter: [%c]\n", caracters[20]);
			Juego_Lee_Tecla();
		}
		else if (opcion == 21)
		{
			fprintf(db, "%c", caracters[21]);
			printf("StringLibrary: Se ha guardado el caracter: [%c]\n", caracters[21]);
			Juego_Lee_Tecla();
		}
		if (opcion == 22)
		{
			fprintf(db, "%c", caracters[22]);
			printf("StringLibrary: Se ha guardado el caracter: [%c]\n", caracters[22]);
			Juego_Lee_Tecla();
		}
		else if (opcion == 23)
		{
			fprintf(db, "%c", caracters[23]);
			printf("StringLibrary: Se ha guardado el caracter: [%c]\n", caracters[23]);
			Juego_Lee_Tecla();
		}
		if (opcion == 24)
		{
			fprintf(db, "%c", caracters[24]);
			printf("StringLibrary: Se ha guardado el caracter: [%c]\n", caracters[24]);
			Juego_Lee_Tecla();
		}
		else if (opcion == 25)
		{
			fprintf(db, "%c", caracters[25]);
			printf("StringLibrary: Se ha guardado el caracter: [%c]\n", caracters[25]);
			Juego_Lee_Tecla();
		}
		if (opcion == 26)
		{
			fprintf(db, "%c", caracters[26]);
			printf("StringLibrary: Se ha guardado el caracter: [%c]\n", caracters[26]);
			Juego_Lee_Tecla();
		}
		else if (opcion == 27)
		{
			fprintf(db, "%c", caracters[27]);
			printf("StringLibrary: Se ha guardado el caracter: [%c]\n", caracters[27]);
			Juego_Lee_Tecla();
		}
		if (opcion == 28)
		{
			fprintf(db, "%c", caracters[28]);
			printf("StringLibrary: Se ha guardado el caracter: [%c]\n", caracters[28]);
			Juego_Lee_Tecla();
		}
		else if (opcion == 29)
		{
			fprintf(db, "%c", caracters[29]);
			printf("StringLibrary: Se ha guardado el caracter: [%c]\n", caracters[29]);
			Juego_Lee_Tecla();
		}
		if (opcion == 30)
		{
			fprintf(db, "%c", caracters[30]);
			printf("StringLibrary: Se ha guardado el caracter: [%c]\n", caracters[30]);
			Juego_Lee_Tecla();
		}
		else if (opcion == 31)
		{
			fprintf(db, " ");
			printf("StringLibrary: Se ha guardado el caracter: [ ]\n");
			Juego_Lee_Tecla();
		}
		if (opcion == 32)
		{
			fprintf(db, "\n");
			printf("StringLibrary: Se ha guardado el caracter: [\\n]\n");
			Juego_Lee_Tecla();
		}
		else if (opcion == 34)
		{
			StringReadFileModeRB(nose);
			system("pause");
		}
	}

	fclose(db);
}

void StringSaveContentVector(let Vxy[][20] , char nombre[1024]){

	let i , j;

	char cat[1024] = ".vec";
	char nose[1024];

	FILE *file;

	strcpy(nose, nombre);

	strcat(nose, cat);

	file = fopen(nose, "a");

	if (file == NULL)
	{
		perror("StringLibrary");
		return;
	}

	for(i = 0; i < 20; i++){
		for(j = 0; j < 20; j++){
			fprintf(file,"%c",Vxy[i][j]);
		}
		fprintf(file,"\n");
	}
}

Override StringReadContentFileVector(char nombre[1024])
{
	char cat[1024] = ".vec";
	char nose[1024];

	FILE *file;

	strcpy(nose, nombre);

	strcat(nose, cat);

	file = fopen(nose, "r");

	if (file == NULL)
	{
		perror("StringLibrary");
		return;
	}

	StringReadFile(nose);
}

void StrScreenflash()      //flashes the screen
{
    char str[9]="color   ";
    char sym[17]="0123456789ABCDEF";
    str[6]=sym[rand()%17];
    str[7]=sym[rand()%17];
    system(str);
    Sleep(3);
    str[6]=sym[rand()%17];
    str[7]=sym[rand()%17];
    system(str);
    Sleep(3);
    str[6]=sym[rand()%17];
    str[7]=sym[rand()%17];
    system(str);
    Sleep(3);
    system("color 07");
}

void StringCreatePrintBorder(int _length,int _width,COORD _coordinates,int _color)     ///border printing function
{
    int i,j;
    COORD zerozero={0,0},bordersz;
    SMALL_RECT _rect;
    CHAR_INFO _border[_length*_width];
    HANDLE out;
    out=GetStdHandle(STD_OUTPUT_HANDLE);
    bordersz.X=_length;
    bordersz.Y=_width;
    _rect.Left=_coordinates.X;
    _rect.Top=_coordinates.Y;
    _rect.Right=_rect.Left+_length;
    _rect.Bottom=_rect.Top+_width;
    for(i=0;i<_width;i++)
    {
        for(j=0;j<_length;j++)
        {
            if(i==0 || i==_width-1)
            {
                _border[j+_length*i].Char.AsciiChar=205;
                _border[j+_length*i].Attributes=_color;
                continue;
            }
            if(j==0 || j==_length-1)
            {
                _border[j+_length*i].Char.AsciiChar=186;
                _border[j+_length*i].Attributes=_color;
                continue;
            }
            _border[j+_length*i].Char.AsciiChar=' ';
            _border[j+_length*i].Attributes=_color;
        }
    }
    _border[0].Char.AsciiChar=201;
    _border[_length-1].Char.AsciiChar=187;
    _border[_length*_width - 1].Char.AsciiChar=188;
    _border[_length*(_width-1)].Char.AsciiChar=200;
    _border[0].Attributes=_color;
    _border[_length-1].Attributes=_color;
    _border[_length*_width - 1].Attributes=_color;
    _border[_length*(_width-1)].Attributes=_color;
    WriteConsoleOutput(out,_border,bordersz,zerozero,&_rect);
}

void StringPrintDefaultBuffer()         ///prints the arena
{
    int i,j,ucol=10,ccol=12,color=15;
    CHAR_INFO gridbuffer[800];
    COORD zerozero={0,0},gridsz={40,20};
    SMALL_RECT gridrect={10,2,50,22};
    HANDLE out;
    out=GetStdHandle(STD_OUTPUT_HANDLE);
    for(i=0;i<20;i++)
    {
        for(j=0;j<40;j++)
        {
            gridbuffer[j+40*i].Attributes=color;
            if(grid[i][j]=='X')
                gridbuffer[j+40*i].Char.AsciiChar=219;
            else if(grid[i][j]=='u')
            {
                gridbuffer[j+40*i].Char.AsciiChar=1;
                gridbuffer[j+40*i].Attributes=ucol;
            }
            else if(grid[i][j]==' ')
                gridbuffer[j+40*i].Char.AsciiChar=' ';
            else if(grid[i][j]=='b')
                gridbuffer[j+40*i].Char.AsciiChar=30;
            else if(grid[i][j]=='B')
                gridbuffer[j+40*i].Char.AsciiChar=31;
            else if(grid[i][j]=='c')
            {
                gridbuffer[j+40*i].Char.AsciiChar=2;
                gridbuffer[j+40*i].Attributes=ccol;
            }
            else
            {
                gridbuffer[j+40*i].Char.AsciiChar=grid[i][j];
            }
        }
    }
    WriteConsoleOutput(out,gridbuffer,gridsz,zerozero,&gridrect);
}

/*void StringSetColor(int colorBack, int colorFore)
{
    int back = 0;
    if (colorBack & 1) back |= BACKGROUND_BLUE;
    if (colorBack & 2) back |= BACKGROUND_GREEN;
    if (colorBack & 4) back |= BACKGROUND_RED;
    if (colorBack & 8) back |= BACKGROUND_INTENSITY;

    int fore = 0;
    if (colorFore & 1) fore |= FOREGROUND_BLUE;
    if (colorFore & 2) fore |= FOREGROUND_GREEN;
    if (colorFore & 4) fore |= FOREGROUND_RED;
    if (colorFore & 8) fore |= FOREGROUND_INTENSITY;

    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), back | fore);
}*/

void StringSetAudioWaw (String * m){

	//PlaySound( TEXT(m), NULL, SND_ASYNC);

}



#endif
