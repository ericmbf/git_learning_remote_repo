/*
 ============================================================================
 Name        : tutorialGit.c
 Author      : Eric Costa Hall
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

static void method();

int main(void) {

	uint8_t uc_test;

	for (int var = 0; var < 10; ++var) {
		puts("!!!Hello World!!!"); /* prints !!!Hello World!!! */
	}

	printf("teste para merge no git");
	printf("teste de merge");
	printf("test of ammend - 2");
	printf("test of reset HEAD");
	printf("git checkout on file to discard changes in working directory %d", uc_test);
	printf(method());


	return EXIT_SUCCESS;
}

/**
 *
 */
static void method()
{
	printf("teste");
}
