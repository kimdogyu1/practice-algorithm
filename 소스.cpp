//#include<stdio.h> 
//int main() {
//	char ch;
//	int i, key;
//	char initial[100] = {'0'};
//	char decryption[100]= {'0'};
//	printf("initial: ");
//	gets_s(initial);
//		key = 11; // 0~26���� Ű�� ��� �� ���� ������ ���� �� �ִ� Ű�� 11����.
//		for (i = 0; i < 46; ++i) { 
//			ch = initial[i];
//			if (ch >= 'A' && ch <= 'Z') {
//				ch = ch - key; 
//				if (ch < 'A') {
//				ch = ch + 'Z' - 'A' + 1;
//				}
//				decryption[i] = ch;
//			}
//			printf("Ű�� 11 ���� ��ȣȭ �޽���: %c ��� Ű: %d\n", decryption[i], key);
//		}
//		printf("��ȣȭ�� �޼��� : %s", initial);
//		printf("\n��ȣȭ�� �޼��� : %s", decryption);
//}



//	printf("\n*************************************************\n");
//	printf("\nBased on observation the key used was 11.\n");
//	key = 13;
//	for (i = 0; message[i] != '\0'; ++i)
//	{
//		ch = message[i];
//		if (ch >= 'a' && ch <= 'z') {
//			ch = ch - key; if (ch < 'a') {
//				ch = ch + 'z' - 'a' + 1;
//			}
//			dec[i] = ch;
//		}
//		else if (ch >= 'A' && ch <= 'Z') {
//			ch = ch - key;
//			if (ch < 'A') {
//				ch = ch + 'Z' - 'A' + 1;
//			}
//			dec[i] = ch;
//		}
//	}
//	d++;
//	printf("Decrypted message: %s key used: %d\n", dec, key);
//	return 0;
//}
//
//#include <stdio.h>
//using namespace std; 
//int main()
//{
//	char ch; int i, key; char message[100]; char dec[100];
//	printf("Enter a message to decrypt: ");
//	gets_s(message);
//	int d = 1;
//	while (d <= 30) {
//		key = d;
//		for (i = 0; message[i] != '\0'; ++i) {
//			ch = message[i];
//			if (ch >= 'a' && ch <= 'z') {
//				ch = ch - key; if (ch < 'a')
//				{
//					ch = ch + 'z' - 'a' + 1;
//				}
//				dec[i] = ch;
//			}
//			else if (ch >= 'A' && ch <= 'Z') {
//				ch = ch - key; if (ch < 'A') {
//					ch = ch + 'Z' - 'A' + 1;
//				}
//				dec[i] = ch;
//			}
//		}
//		d++;
//		printf("Decrypted message: %s key used: %d\n", dec, key);
//	}
//	printf("\n**********************\n");
//	printf("\nBased on observation the key used was 11\n");
//	key = 13; for (i = 0; message[i] != '\0'; ++i) { 
//		ch = message[i]; 
//	if (ch >= 'a' && ch <= 'z') { 
//		ch = ch - key; if (ch < 'a') { 
//			ch = ch + 'z' - 'a' + 1; } dec[i] = ch;
//	} else if (ch >= 'A' && ch <= 'Z') {
//		ch = ch - key; if (ch < 'a') {
//			ch = ch + 'z' - 'a' + 1; }
//		dec[i] = ch; } } 
//	d++; 
//	printf("Decrypted message: %s key used: %d\n", dec, key); 
//	return 0;
//}

 #include<stdio.h> 
int main() {
	char ch;
	int i, key;
	char initial[100] = { '0' };
	char decryption[100] = { '0' };
	printf("initial: ");
	gets_s(initial);
	for (key = 1; key <= 26; ++key) {
		for (i = 0; i < 46; ++i) {
			ch = initial[i];
			if (ch >= 'A' && ch <= 'Z') {
				ch = ch - key;
				if (ch < 'A') {
					ch = ch + 'Z' - 'A' + 1;
				}
				decryption[i] = ch;
			}

		}
		printf("key=%d ��ȣȭ�� �޼��� : %s\n", key, decryption);
	}
}