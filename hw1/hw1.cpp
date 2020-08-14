#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	char name[1000];
	scanf("%c", &name);
	int x = name[0];
	if (x >= 97) {
		printf("Lowercase letter\n");
	}
	else if (x >= 65) {
		printf("uppercase letter\n");
	}
	for (int i = 0; i <= x; i++) {
		printf("*\n");
	}
	printf("\n * line = %d in ascii order", x);
	return 0;
}
