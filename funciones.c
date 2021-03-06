#include <stdio.h>
#include <windows.h>

void clear_(void){
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

 int readFile2 (char nombre[1024], const char *Contenido , HWND hwndDlg)
{
    char cat[1024] = ".ty";
	char nose[1024];

    FILE *archivo;

    strcpy(nose, nombre);

	strcat(nose, cat);

	archivo = fopen(nose, "wb");

	if (archivo == NULL)
	{
		MessageBox(hwndDlg, "No se ha podido por algun motivo crear el archivo", "Escrity : crear archivo", MB_ICONERROR);
		//perror("Escrity ");
		return -1;
	}

	MessageBox(hwndDlg, "Se ha creado el archivo con exito. El archivo lleva la extension *.ty", "Escrity : archivo creado", MB_ICONINFORMATION);
	//printf("Escrity: guardado: [ %s ]\n", nombre);
	fprintf(archivo, "%s", nose);
	fclose(archivo);
}

static void readFile (const char *URL)
{
	FILE *lectura;
	char variable[1025];

	lectura = fopen(URL, "rb");

	if (lectura == NULL)
	{
		perror("Escrity ");
		printf("Directorio o Archivo: [\" ");
		printf("%s", URL);
		printf(". \"] \n");
	}
	else
	{
		while (feof(lectura) == 0)
		{
			fgets(variable, 1025, lectura);
			printf("%s", variable);
		}
	}
	fclose(lectura);
}

static void StringReadFileModeRB (const char *URL)
{
	FILE *lectura;
	char variable[1025];

	lectura = fopen(URL, "rb");

	if (lectura == NULL)
	{
		perror("StringLibrary ");
		printf("Directorio o Archivo: [\" ");
		printf("%s", URL);
		printf(". \"] \n");
	}
	else
	{
		while (feof(lectura) == 0)
		{
			fgets(variable, 1025, lectura);
			printf("%s", variable);
		}
	}
	fclose(lectura);
}

int StrScanInt(int Int)
{
	fflush(stdin);
	scanf("%i", &Int);
	fflush(stdin);

	return Int;
}


int files1 (const char * file, const char * data)
{
	FILE *archivo;

	archivo = fopen(file, "wb");

	if (archivo == NULL)
	{
		perror("StringLibrary ");
		return -2;
	}
	printf("StringLibrary: guardado: '%s'", file);
	fprintf(archivo, "%s", data);
	fclose(archivo);
}

int files2 (const char * URL){
	FILE *lectura;
	char variable[1024];

	lectura = fopen(URL, "rb");

	if (lectura == NULL)
	{
		perror("StringLibrary ");
		printf("Directorio o Archivo: [\" ");
		printf("%s", URL);
		printf(". \"] \n");
		return -1;
	}
	else
	{
		while (feof(lectura) == 0)
		{
			fgets(variable, 1024, lectura);
			printf("%s", variable);
		}
	}
	fclose(lectura);
}

void charClear (){

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

static void charNewLines (int cand){

	if(cand == 1){
		printf("\n");
	}
	else if(cand == 2){
		printf("\n\n");
	}

}

static void GotoXY(int X , int Y)
{
	HANDLE hCon;
	hCon = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD dwPos;
	dwPos.X = X;
	dwPos.Y = Y;
	SetConsoleCursorPosition(hCon, dwPos);
}

static int Juego_Lee_Tecla()
{
	return getchar();
}

static int visor (char caracters1){

    FILE * visor;

    visor = fopen("AseetData.dat","a");

    if (visor == NULL)
	{
		perror("String ");
		return -1;
	}

	fprintf(visor,"%c",caracters1);
	fclose(visor);
	GotoXY(0,11);
	printf("                                                            ");
	readFile("AseetData.dat");

}

void Sprits1 (char nombre_de_archivo[1024])
{
	FILE *db;
	char caracters[1024] = {'%', '\\', '|', '=', '[', ']', '<', '>', '{', '}', '@', '#', '$', '_', '&', '-', '+', '(', ')', '/', '*', '\"', '\'', ':', ';', '!', '?', '~', '`', ' ' , '\n' , 'B' , 'C'};
	int opcion = 1;

	int i ;

	char cat[1024] = ".aseet";
	char nose[1024];

	strcpy(nose, nombre_de_archivo);

	strcat(nose, cat);

	db = fopen(nose, "a");

	if (db == NULL)
	{
		perror("String ");
		return;
	}

	while (opcion != 33)
	{
		system("clear");
		printf("Guardando en: %s\n", nose);
		printf("                                  CreatorSprits\n\n");
		printf("Opciones: 0 - 32\n\n");
		printf("33 para terminar\n\n");
		printf("Version: 1.1\n\n");
		printf("Visor: \n\n");
		printf("\n\n\n\n\n\n\nMarterial: \n\n");
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
			visor(caracters[0]);
			Juego_Lee_Tecla();
		}
		else if (opcion == 1)
		{
			fprintf(db, "%c", caracters[1]);
			printf("StringLibrary: Se ha guardado el caracter: [%c]\n", caracters[1]);
			visor(caracters[1]);
			Juego_Lee_Tecla();
		}
		if (opcion == 2)
		{
			fprintf(db, "%c", caracters[2]);
		    printf("StringLibrary: Se ha guardado el caracter: [%c]\n", caracters[2]);
			visor(caracters[2]);
			Juego_Lee_Tecla();
		}
		else if (opcion == 3)
		{
			fprintf(db, "%c", caracters[3]);
			printf("StringLibrary: Se ha guardado el caracter: [%c]\n", caracters[3]);
			visor(caracters[3]);
			Juego_Lee_Tecla();
		}
		if (opcion == 4)
		{
			fprintf(db, "%c", caracters[4]);
			printf("StringLibrary: Se ha guardado el caracter: [%c]\n", caracters[4]);
			visor(caracters[4]);
			Juego_Lee_Tecla();
		}
		else if (opcion == 5)
		{
			fprintf(db, "%c", caracters[5]);
			printf("StringLibrary: Se ha guardado el caracter: [%c]\n", caracters[5]);
			visor(caracters[5]);
			Juego_Lee_Tecla();
		}
		if (opcion == 6)
		{
			fprintf(db, "%c", caracters[6]);
			printf("StringLibrary: Se ha guardado el caracter: [%c]\n", caracters[6]);
			visor(caracters[6]);
			Juego_Lee_Tecla();
		}
		else if (opcion == 7)
		{
			fprintf(db, "%c", caracters[7]);
			printf("StringLibrary: Se ha guardado el caracter: [%c]\n", caracters[7]);
			visor(caracters[7]);
			Juego_Lee_Tecla();
		}
		if (opcion == 8)
		{
			fprintf(db, "%c", caracters[8]);
			printf("StringLibrary: Se ha guardado el caracter: [%c]\n", caracters[8]);
			visor(caracters[8]);
			Juego_Lee_Tecla();
		}
		else if (opcion == 9)
		{
			fprintf(db, "%c", caracters[9]);
			printf("StringLibrary: Se ha guardado el caracter: [%c]\n", caracters[9]);
			visor(caracters[9]);
			Juego_Lee_Tecla();
		}
		if (opcion == 10)
		{
			fprintf(db, "%c", caracters[10]);
			printf("StringLibrary: Se ha guardado el caracter: [%c]\n", caracters[10]);
			visor(caracters[10]);
			Juego_Lee_Tecla();
		}
		else if (opcion == 11)
		{
			fprintf(db, "%c", caracters[11]);
			printf("StringLibrary: Se ha guardado el caracter: [%c]\n", caracters[11]);
			visor(caracters[11]);
			Juego_Lee_Tecla();
		}
		if (opcion == 12)
		{
			fprintf(db, "%c", caracters[12]);
			printf("StringLibrary: Se ha guardado el caracter: [%c]\n", caracters[12]);
			visor(caracters[12]);
			Juego_Lee_Tecla();
		}
		else if (opcion == 13)
		{
			fprintf(db, "%c", caracters[13]);
			printf("StringLibrary: Se ha guardado el caracter: [%c]\n", caracters[13]);
			visor(caracters[13]);
			Juego_Lee_Tecla();
		}
		if (opcion == 14)
		{
			fprintf(db, "%c", caracters[14]);
			printf("StringLibrary: Se ha guardado el caracter: [%c]\n", caracters[14]);
			visor(caracters[14]);
			Juego_Lee_Tecla();
		}
		else if (opcion == 15)
		{
			fprintf(db, "%c", caracters[15]);
			printf("StringLibrary: Se ha guardado el caracter: [%c]\n", caracters[15]);
			visor(caracters[15]);
			Juego_Lee_Tecla();
		}
		if (opcion == 16)
		{
			fprintf(db, "%c", caracters[16]);
			printf("StringLibrary: Se ha guardado el caracter: [%c]\n", caracters[16]);
			visor(caracters[16]);
			Juego_Lee_Tecla();
		}
		else if (opcion == 17)
		{
			fprintf(db, "%c", caracters[17]);
			printf("StringLibrary: Se ha guardado el caracter: [%c]\n", caracters[17]);
			visor(caracters[17]);
			Juego_Lee_Tecla();
		}
		if (opcion == 18)
		{
			fprintf(db, "%c", caracters[18]);
			printf("StringLibrary: Se ha guardado el caracter: [%c]\n", caracters[18]);
			visor(caracters[18]);
			Juego_Lee_Tecla();
		}
		else if (opcion == 19)
		{
			fprintf(db, "%c", caracters[19]);
			printf("StringLibrary: Se ha guardado el caracter: [%c]\n", caracters[19]);
			visor(caracters[19]);
			Juego_Lee_Tecla();
		}
		if (opcion == 20)
		{
			fprintf(db, "%c", caracters[20]);
			printf("StringLibrary: Se ha guardado el caracter: [%c]\n", caracters[20]);
			visor(caracters[20]);
			Juego_Lee_Tecla();
		}
		else if (opcion == 21)
		{
			fprintf(db, "%c", caracters[21]);
			printf("StringLibrary: Se ha guardado el caracter: [%c]\n", caracters[21]);
			visor(caracters[21]);
			Juego_Lee_Tecla();
		}
		if (opcion == 22)
		{
			fprintf(db, "%c", caracters[22]);
			printf("StringLibrary: Se ha guardado el caracter: [%c]\n", caracters[22]);
			visor(caracters[22]);
			Juego_Lee_Tecla();
		}
		else if (opcion == 23)
		{
			fprintf(db, "%c", caracters[23]);
			printf("StringLibrary: Se ha guardado el caracter: [%c]\n", caracters[23]);
			visor(caracters[23]);
			Juego_Lee_Tecla();
		}
		if (opcion == 24)
		{
			fprintf(db, "%c", caracters[24]);
			printf("StringLibrary: Se ha guardado el caracter: [%c]\n", caracters[24]);
			visor(caracters[24]);
			Juego_Lee_Tecla();
		}
		else if (opcion == 25)
		{
			fprintf(db, "%c", caracters[25]);
			printf("StringLibrary: Se ha guardado el caracter: [%c]\n", caracters[25]);
			visor(caracters[25]);
			Juego_Lee_Tecla();
		}
		if (opcion == 26)
		{
			fprintf(db, "%c", caracters[26]);
			printf("StringLibrary: Se ha guardado el caracter: [%c]\n", caracters[26]);
			visor(caracters[26]);
			Juego_Lee_Tecla();
		}
		else if (opcion == 27)
		{
			fprintf(db, "%c", caracters[27]);
			printf("StringLibrary: Se ha guardado el caracter: [%c]\n", caracters[27]);
			visor(caracters[27]);
			Juego_Lee_Tecla();
		}
		if (opcion == 28)
		{
			fprintf(db, "%c", caracters[28]);
			printf("StringLibrary: Se ha guardado el caracter: [%c]\n", caracters[28]);
			visor(caracters[28]);
			Juego_Lee_Tecla();
		}
		else if (opcion == 29)
		{
			fprintf(db, "%c", caracters[29]);
			printf("StringLibrary: Se ha guardado el caracter: [%c]\n", caracters[29]);
			visor(caracters[29]);
			Juego_Lee_Tecla();
		}
		if (opcion == 30)
		{
			fprintf(db, "%c", caracters[30]);
			printf("StringLibrary: Se ha guardado el caracter: [%c]\n", caracters[30]);
			visor(caracters[30]);
			Juego_Lee_Tecla();
		}
		else if (opcion == 31)
		{
			fprintf(db, " ");
			printf("Escrity: Se ha guardado el caracter: [ error ]\n");
			Juego_Lee_Tecla();
		}
		if (opcion == 32)
		{
			fprintf(db, "\n");
			printf("Escrity: Se ha guardado el caracter: [ error ]\n");
			Juego_Lee_Tecla();
		}
		else if (opcion == 34)
		{
			system("pause");
		}
	}

	fclose(db);

}
