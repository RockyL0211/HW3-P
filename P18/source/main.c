﻿#include <stdio.h> 
#include <stdlib.h> 
#include <string.h>
void main(void) {
	char string1[60] = "Welcome";
	char string2[60];
	int len;
	strcpy_s(string2, 8, string1);
	printf("string2=%s\n", string2);
	len = strlen(string2);
	printf("字串長度為%d\n", len);
	system("pause");
	return 0;
}