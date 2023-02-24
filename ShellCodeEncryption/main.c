#include <stdio.h>
#include <Windows.h>
#include <string.h>
#include <math.h>
#include "Encryption.h"


int main(int argc, char* argv[]) {

	if (argc < 3) {
		printf("You Missed A Argument Go Back And Check Please");
		return 1;
	}
	
	char* FileName = argv[1];
	int	length = strlen(argv[1]);

	if (strcmp(&FileName[length - 4], ".bin") == 1) {
		printf("This is not a binary file, enter a binary file, it must end with .bin so I can open and read it for you!");
		return 1;
	}
	else {
		printf("\n[+] You did enter a binary file Nice!");
	}

	FILE* TheFilePassed = fopen(argv[1], "rb");
	int	Key = atoi(argv[2]);
	int	FileSize = GetTheFileSize(TheFilePassed);
	unsigned char* EncryptedBuffer = EncryptBinaryFile(TheFilePassed, Key);
	unsigned char* Testing = (unsigned char*)malloc(FileSize * sizeof(unsigned char));

	if (TheFilePassed == NULL) {
		printf("Could not read the binary file you passed, check for typo errors or bytes inside");
		return 1;
	}

	memcpy(Testing, EncryptedBuffer, FileSize);
	DecryptEncryptedBuffer(Testing, Key, FileSize);

	return 0;
	

}