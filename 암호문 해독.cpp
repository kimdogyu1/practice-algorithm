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
		printf("key=%d 복호화된 메세지 : %s\n", key, decryption);
	}
}


//#include<stdio.h> 
//int main() {
//	char ch;
//	int i, key;
//	char initial[100] = {'0'};
//	char decryption[100]= {'0'};
//	printf("initial: ");
//	gets_s(initial);
//		key = 11; // 0~26까지 키값 사용 후 가장 평문으로 쓰일 수 있는 키값 11선택.
//		for (i = 0; i < 46; ++i) { 
//			ch = initial[i];
//			if (ch >= 'A' && ch <= 'Z') {
//				ch = ch - key; 
//				if (ch < 'A') {
//				ch = ch + 'Z' - 'A' + 1;
//				}
//				decryption[i] = ch;
//			}
//			printf("키값 11 사용시 복호화 메시지: %c 사용 키: %d\n", decryption[i], key);
//		}
//		printf("암호화된 메세지 : %s", initial);
//		printf("\n복호화된 메세지 : %s", decryption);
//}



