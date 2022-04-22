#ifndef _STRINGFILES_H_
#define _STRINGFILES_H_

#include <stdio.h>

void StringCreateNewFileModeWB (const char * file, const char * data)
{
	FILE *archivo;

	archivo = fopen(file, "wb");

	if (archivo == NULL)
	{
		perror("StringLibrary ");
		return;
	}
	printf("StringLibrary: guardado: '%s'", file);
	fprintf(archivo, "%s", data);
	fclose(archivo);
}

void StrCreateNewFileModeW (const char * file, const char * data)
{
	FILE *archivo;

	archivo = fopen(file, "w");

	if (archivo == NULL)
	{
		perror("StringLibrary ");
		return;
	}
	printf("StringLibrary: guardado: '%s'", file);
	fprintf(archivo, "%s", data);
	fclose(archivo);
}

void StringCreateNewFileModeA (const char * file, const char * data)
{
	FILE *archivo;

	archivo = fopen(file, "a");

	if (archivo == NULL)
	{
		perror("StringLibrary ");
		return;
	}
	printf("StringLibrary: guardado: '%s'", file);
	fprintf(archivo, "%s", data);
	fclose(archivo);
}

int StrDeleteFile (const char *url)
{
	if (remove(url) == -1)
	{
		printf("StringLibrary : 'error al eliminar'' \n");
		return -1;
	}
	else
	{
		printf("StringLibrary : Archivo : %s eliminado.\n", url);
		return 0;
	}
}

void StringReadFileModeRB (const char *URL)
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

void StrCreateNewFileModeR (const char *URL)
{
	FILE *lectura;
	char variable[1025];

	lectura = fopen(URL, "r");

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

void StringReadFileModeRError(const char *URL)
{
	FILE *lectura;
	char variable;

	lectura = fopen(URL, "r");

	if (lectura == NULL)
	{
		perror("StringLibrary ");
		printf("Directorio o Archivo: [\" ");
		printf("%s",URL);
		printf(". \"] \n");
	}
	else
	{
		while (feof(lectura) == 0)
		{
			variable = fgetc(lectura);
			printf("%c", variable);
		}
	}
	fclose(lectura);
}

void StringReadFile (const char *URL)
{
	FILE *lectura;
	char variable[1024];

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
			fgets(variable, 1024, lectura);
			printf("%s", variable);
		}
	}
	fclose(lectura);
}

#endif


