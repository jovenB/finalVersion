#define _CRT_SECURE_NO_WARNINGS

#include "../main/main.h"
#include <stdio.h>

int main(void) {
	int running = 1;
	int moduleNum;
	int version;

	do {
		printf("Pick a module version (V1 = 1, V2 = 2, V3 = 3, 0 = quit): ");
		scanf("%d", &version);

		printf("\n");

		if (version == 1) {
			printf("You picked version 1\n");
			printf("Modules: Converting[1], Tokenizing[2], Fundamentals[3], Manipulating[4]\n");
			printf("Module: ");
			scanf("%d", &moduleNum);

			printf("\n");

			if (moduleNum == 1) {
				converting();
			}
			else if (moduleNum == 2) {
				tokenizing();
			}
			else if (moduleNum == 3) {
				fundamentals();
			}
			else if (moduleNum == 4) {
				manipulating();
			}
		}
		else if (version == 2) {
			printf("You picked version 2\n");
			printf("Modules: Converting[1], Tokenizing[2], Fundamentals[3], Manipulating[4]\n");
			printf("Module: ");
			scanf("%d", &moduleNum);

			printf("\n");

			if (moduleNum == 1) {
				convertingV2();
			}
			else if (moduleNum == 2) {
				tokenizingV2();
			}
			else if (moduleNum == 3) {
				fundamentalsV2();
			}
			else if (moduleNum == 4) {
				manipulatingV2();
			}
		}
		else if (version == 3) {
			printf("You picked version 3\n");
			printf("Modules: Converting[1], Tokenizing[2], Fundamentals[3], Manipulating[4]\n");
			printf("Module: ");
			scanf("%d", &moduleNum);

			printf("\n");

			if (moduleNum == 1) {
				convertingV3();
			}
			else if (moduleNum == 2) {
				tokenizingV3();
			}
			else if (moduleNum == 3) {
				fundamentalsV3();
			}
			else if (moduleNum == 4) {
				manipulatingV3();
			}
		}
		else if (version == 0) {
			running = 0;
		}

	} while (running == 1);

	return 0;
}