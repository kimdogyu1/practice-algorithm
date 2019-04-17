#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define SWAP(i,j) char temp= i; i = j; j=temp;
int i, j, s, k = 0;
int l = 0, t = 0;
int S[256];
int T[256];
char* encrypt(char *str, char *key, int len)
{
	int length = 0;
	char *enc;
	enc= (char*)malloc(len);
	length = strlen(key);
	for (i = 0; i < 256; i++)
	{
		S[i] = i;
		T[i] = key[i % length];
	}
	j = 0;
	for (i = 0; i < 256; i++)
	{
		j = ((j + S[i] + T[i]) % 256);
		SWAP(S[i], S[j]);
	}
	i = 0;
	j = 0;
	for (s = 0; s < len; s++)
	{
		i = (i + 1) % 256;
		j = (j + S[i]) % 256;
		SWAP(S[i], S[j]);
		t = (S[i] + S[j]) % 256;
		k = S[t];
		enc[s] = k ^ str[s];
	}
	return enc;
}



int main()
{
	char str[] = "\0"; int i = 0; FILE *fp;                     
	fp = fopen("test.txt", "rt");  
	while (fscanf(fp, "%s", str) != EOF) {
	}
	fclose(fp);                    
	char *enc, *org;
	char key[] = "twothree";
	printf("\n평문 표시 : %s\n", str);
	enc = encrypt(str, key, strlen(str));
	printf("\n암호문 표시 : %s\n", enc);
	printf("\n암호문 hexa 표시 : %hhx %hhx %hhx %hhx %hhx %hhx %hhx %hhx %hhx %hhx %hhx %hhx %hhx %hhx %hhx\n",
		enc[0], enc[1], enc[2], enc[3], enc[4],
		enc[5], enc[6], enc[7], enc[8], enc[9], enc[10], enc[11], enc[12], enc[13], enc[14]);
	org = encrypt(enc, key, strlen(str));
	printf("\n복호화 : %s\n", org);
	FILE *wfp;	fopen_s(&wfp, "C:\\201514852\\hexa.txt", "w");
	fprintf(wfp, "\n암호문 hexa 표시 : %hhx %hhx %hhx %hhx %hhx %hhx %hhx %hhx %hhx %hhx %hhx %hhx %hhx %hhx %hhx\n",
		enc[0], enc[1], enc[2], enc[3], enc[4],
		enc[5], enc[6], enc[7], enc[8], enc[9], enc[10], enc[11], enc[12], enc[13], enc[14]);
	fclose(wfp);
	return 0;
}
