

#include "StdAfx.h"

using namespace std;

void dump_object(void* reference, int size)  {

	printf(" |    address    | char | hex  | dec    (Size %d bytes)\n", size);
	for(char* ptr = (char*) reference; ptr < ((char*) reference) + size ;ptr++) {
		printf(" at: %p", (void *) ptr);
		if (*ptr != '\n' && *ptr != '\r') {
			printf(" -> |   %c  ", *ptr);
		} else {
			printf(" -> |   %c  ", '-');
		}
		printf("| 0x%02x", (unsigned)(unsigned char) *ptr);
		printf(" | %u\n", (unsigned)(unsigned char) *ptr);
	}
	printf("\n");
}

void obj_address(void* obj_reference, char* str_buffer) {

	// Allocates storage
	//char *hello_world = (char*)malloc(13 * sizeof(char));
	//printf(" at: %p", (void *) obj_reference);

	strcpy(str_buffer,"");
	// Prints "Hello world!" on hello_world
	sprintf(str_buffer, "%p", (void *) obj_reference);

	//cout << str_buffer << endl;
	return;
}
