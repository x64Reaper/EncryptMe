#include <Windows.h>
#include <stdio.h>
#include <string.h>

int GetTheFileSize(FILE* TheFile)
{
	int FileSize;
	fseek(TheFile, 0, SEEK_END);
	FileSize = ftell(TheFile);
	fseek(TheFile, 0, SEEK_SET);
	return FileSize;
}

void PrintEncryptedBinary(unsigned char EncryptedBuffer[], int BufferSize)
{
	printf("[+] Im Encrypting Your Binary File, Give Me A Second!\n");
	Sleep(5000);
	printf("\n[+] Here Is Your Encrypted Binary: \n\n");
	printf("[+] unsigned char EncryptedShellcode[] = {\n");
	for (int i = 0; i < BufferSize; i++) {
		printf("0x%X, ", EncryptedBuffer[i]);
		if (i % 10 == 0 && i != 0) {
			printf("\n");
		}
	}
	printf("\n};");
}

unsigned char* EncryptBinaryFile(FILE* TheFile, int TheKey)
{
	int FileSize = GetTheFileSize(TheFile);
	unsigned char* FileBytes = malloc(FileSize);
	unsigned char* EncryptedBuffer = (unsigned char*)malloc(FileSize * sizeof(unsigned char));

	fread(FileBytes, 1, FileSize, TheFile);

	for (int i = 0; i < FileSize; i++) {
		EncryptedBuffer[i] = FileBytes[i] ^ TheKey;
		if (i == FileSize - 1) {
			printf("\n");
		}
	}
	PrintEncryptedBinary(EncryptedBuffer, FileSize);
	fclose(TheFile);
	return EncryptedBuffer;
}

void DecryptEncryptedBuffer(unsigned char* Buffer, int TheKey, int BufferSize)
{
	printf("\n\n[+] Here Is The Decrypted Buffer Back To How It Was: \n");
	for (int i = 0; i < BufferSize; i++) {
		printf("0x%X, ", Buffer[i] ^ TheKey);
	}
	printf("\n");
}