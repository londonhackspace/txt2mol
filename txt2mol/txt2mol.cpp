// txt2mol.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

typedef void (WINAPI *M05_COMPILE_WORK_FILE)(_TCHAR*);
typedef bool (WINAPI *M05_OPEN_LINK)(bool, int);
typedef bool (WINAPI *M05_INIT_BOARD)(void);


int _tmain(int argc, _TCHAR* argv[])
{

	if (argc <= 1) return 1;

	HMODULE lpMpc05ls = LoadLibrary("mpc05ls.dll");
	if (lpMpc05ls == 0) return 2;

	/*M05_OPEN_LINK M05_open_link =
		(M05_OPEN_LINK) GetP	rocAddress(lpMpc05ls, "M05_open_link");
	if (M05_open_link == 0) return 3;*/
	M05_INIT_BOARD M05_init_board =
		(M05_INIT_BOARD) GetProcAddress(lpMpc05ls, "M05_init_board");
	if (M05_init_board == 0) return 4;
	M05_COMPILE_WORK_FILE M05_compile_work_file =
		(M05_COMPILE_WORK_FILE) GetProcAddress(lpMpc05ls, "M05_compile_work_file");
	if (M05_compile_work_file == 0) return 5;

	//if (M05_open_link(TRUE, 115200)) return 6;
	if (M05_init_board()) return 7;
 	M05_compile_work_file(argv[1]);
	return 0;
}

