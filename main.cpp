#define WIN32_LEAN_AND_MEAN

#include <windows.h>
#include <stdio.h>

#include "palabras.h"
#include "funciones.h"

#include "resource.h"

HINSTANCE hInst;

BOOL CALLBACK DialogProc(HWND hwndDlg, UINT uMsg, WPARAM wParam, LPARAM lParam){

	char command[100];

	char command2[1000];
	char user1[100];
	char user2[100];
	char user3[100];
	int num1, num2, result;

	switch (uMsg){
	case WM_INITDIALOG:
		printf("Escrity : Redy for aseets\n");

		SetConsoleTitle("Escrity 1.0.2");
		/*
             * TODO: Add code to initialize the dialog.
             */
		return TRUE;

	case WM_CLOSE:
		printf("Escrity : detecta : salida de usuario?\n");
		if (MessageBox(hwndDlg, "Seguro que desea salir de Escrity 1.0.2", "Escrity : user : exit ", MB_ICONINFORMATION | MB_OKCANCEL) == IDOK){
			EndDialog(hwndDlg, 0);
		}
		printf("Escrity : detecta : cancelamiento de salida de usuario!\n");
		return TRUE;

	case WM_COMMAND:
		switch (LOWORD(wParam)){
		/*
                 * TODO: Add more control ID's, when needed.
                 */
		case IDC_BTN_QUIT:
			printf("Escrity : user : exit?\n");
			if (MessageBox(hwndDlg, "Seguro que desea salir de Escrity 1.0.2", "Escrity : user : exit ", MB_ICONQUESTION | MB_OKCANCEL) == IDOK){
				EndDialog(hwndDlg, 0);
			}

			printf("Escrity : detecta : cancelamiento de salida de usuario!\n");
			return TRUE;

		case ID_BTN_EJECUTAR:
			GetDlgItemText(hwndDlg, ID_EDIT_COMMAND, command, 100);
			if (strcmp(command, print) == 0){
				printf("Escrity : instruccion : print(\"\"): dectect\n");
				MessageBox(hwndDlg, "Se ha obtenido la instruccion \"print():\"", "Escrity : obteniendo...", MB_ICONINFORMATION);
				printf("(\"\n");
				gets(user1);
				printf("\"):\n");
				printf(">> %s\n", user1);
			}
			else if (strcmp(command, clear) == 0){
				MessageBox(hwndDlg, "Se ha obtenido la instruccion \"clear():\"", "Escrity : obteniendo...", MB_ICONINFORMATION);
				clear_();
			}
			if (strcmp(command, file1) == 0){
				MessageBox(hwndDlg, "Se ha obtenido la instruccion \"createFile():\"", "Escrity : obteniendo...", MB_ICONINFORMATION);
				printf("(\"");
				gets(user1);
				printf("\").\n\(\"");
				gets(user2);
				printf("\"):");
				files1(user1, user2);
			}
			else if (strcmp(command, file2) == 0){
				MessageBox(hwndDlg, "Se ha obtenido la instruccion \"reafFild():\"", "Escrity : obteniendo...", MB_ICONINFORMATION);
				printf("(\"");
				gets(user3);
				printf("\"):\n");
				files2(user3);
				printf("\nEscrity : \"Press any key\"\n");
				getchar();
			}
			if (strcmp(command, remov) == 0){
				MessageBox(hwndDlg, "Se ha obtenido la instruccion \"removeFile():\"", "Escrity : obteniendo...", MB_ICONINFORMATION);
				printf("(\"");
				gets(user1);
				printf("\"):\n");
				if (remove(user1) == -1){
					printf("Escrity : Archivo eliminado con exito\n");
					MessageBox(hwndDlg, "Archivo eliminado con exito", "Escrity : archivo eliminado con exito", MB_ICONINFORMATION);
				}
				else{
					MessageBox(hwndDlg, "No se ha podido eliminar el archivo", "Escrity : archivo no eliminado", MB_ICONERROR);
					printf("Escrity : error : Archivo no eliminado\n");
				}
			}
			else if (strcmp(command, Sprit) == 0){
				MessageBox(hwndDlg, "Se ha obtenido la instruccion \"openCreatorSprit():\"", "Escrity : obteniendo...", MB_ICONINFORMATION);
				printf("(\"");
				gets(user1);
				printf("\"):\n");
				Sprits1(user1);
			}
			else if (strcmp(command, sum) == 0){
				MessageBox(hwndDlg, "Se ha obtenido la instruccion \"sum():\"", "Escrity : obteniendo...", MB_ICONINFORMATION);
				printf("( ");
				scanf("%i", &num1);
				printf(" )\n");
				printf("( ");
				scanf("%i", &num2);
				printf(" ):\n");
				result = num1 + num2;
				printf(">> N : ( %i ) + N : ( %i ) = (%i)\n",num1,num2,result);
			}
			if (strcmp(command, res) == 0){
				MessageBox(hwndDlg, "Se ha obtenido la instruccion \"sum():\"", "Escrity : obteniendo...", MB_ICONINFORMATION);
				printf("( ");
				scanf("%i", &num1);
				printf(" )\n");
				printf("( ");
				scanf("%i", &num2);
				printf(" ):\n");
				result = num1 - num2;
				printf(">> N : ( %i ) - N : ( %i ) = (%i)\n",num1,num2,result);
			}
			else if (strcmp(command, mult) == 0){
				MessageBox(hwndDlg, "Se ha obtenido la instruccion \"sum():\"", "Escrity : obteniendo...", MB_ICONINFORMATION);
				printf("( ");
				scanf("%i", &num1);
				printf(" )\n");
				printf("( ");
				scanf("%i", &num2);
				printf(" ):\n");
				result = num1 * num2;
				printf(">> N : ( %i ) * N : ( %i ) = (%i)\n",num1,num2,result);
			}
			if (strcmp(command, divi) == 0){
				MessageBox(hwndDlg, "Se ha obtenido la instruccion \"sum():\"", "Escrity : obteniendo...", MB_ICONINFORMATION);
				printf("( ");
				scanf("%i", &num1);
				printf(" )\n");
				printf("( ");
				scanf("%i", &num2);
				printf(" ):\n");
				result = num1 / num2;
				printf(">> N : ( %i ) / N : ( %i ) = (%i)\n",num1,num2,result);
			}
			else if (strcmp(command, dream) == 0){
				MessageBox(hwndDlg, "Se ha obtenido la instruccion \"dream():\"", "Escrity : obteniendo...", MB_ICONINFORMATION);
				printf("( ");
				scanf("%i", &num1);
				printf(" ):\n");
				Sleep(num1);
			}
			else{
				printf("Escrity : error : sintaxis : no se ha encontrado\n");
				MessageBox(hwndDlg, "Escrity error sintaxis : no se encontro en la lista de instrucciones. La solicitada", "Escrity : error : sintaxis", MB_ICONERROR);
			}
			return TRUE;

			case ID_BTN_EJECUTAR2:
			GetDlgItemText(hwndDlg , ID_EDIT_COMMAND , command , 100);
			GetDlgItemText(hwndDlg , ID_EDIT_COMMAND , command2 , 1000);
			readFile2(command,command2 , hwndDlg);
			return TRUE;
		}
	}

	return FALSE;
}

int APIENTRY WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nShowCmd){
	hInst = hInstance;

	// The user interface is a modal dialog box
	return DialogBox(hInstance, MAKEINTRESOURCE(DLG_MAIN), NULL, (DLGPROC)DialogProc);
}

