#include <stdio.h>
#include <string.h>
typedef struct vector {
	float x;
	float y;
}vector;
vector get_sum(vector a, vector b);

int main() {
	vector a = { 2.0,3.0 };
	vector b = { 5.0,6.0 };
	vector sum;

	sum = get_sum(a, b);
	printf("πÈ≈Õ«’ (%f, %f)", sum.x, sum.y);
}
vector get_sum(vector a, vector b) {
	vector result;
	result.x = a.x + b.x;
	result.y = a.y + b.y;
	return result;
}

//
//int main() {
//	char s[101];
//	int a;
//	int sum = 0;
//	int sum2 = 0;
//	int value = 1;
//	int value2 = 1;
//	int p[101];
//	int k;
//
//	scanf("%s", s);
//	int len = strlen(s);
//	for (int i = 0; i < strlen(s); i++){
//		p[i] = (s[i]-48);
//		if (p[i] > 1 && p[i] < 5)
//			k = i;
//	}
//
//	for (int i = k - 2; i >= 0; i--) {
//		value *= 2;
//		p[i] = value*p[i];
//	}
//	for (int i = k - 1; i >= 0; i--) {
//		sum += p[i];
//	}
//
//	/////////////////////////////
//	//101
//
//	for (int i = strlen(s) - 2; i > k; i--) {
//		value2 *= 2;
//		p[i] = value2 * p[i];
//	}
//
//	for (int i = strlen(s) - 1; i > k; i--) {
//		sum2 += p[i];
//	}
//
//	int u = p[k];
//
//	switch (u) {
//	case 2:
//		printf("%d", sum+sum2);
//		break;
//		 
//	case 3:
//		printf("%d", sum-sum2);
//		break;
//
//	case 4:
//		printf("%d", sum*sum2);
//		break;
//
//	}	
//}









//int group_check(char *arr) {
//	int i=1;
//	int j;
//	int k;
//	k = 1;
//	char arry[100];
//	arry[0] = arr[0];
//	while (i < strlen(arr)) {
//	//for (i = 1; i < strlen(arr); i++) {
//		if (arr[i] != arr[i - 1]) {
//			for (j = 0; j < k; j++) {
//				if (arr[i] == arry[j]) {
//					return 0;
//				}
//			}
//			arry[k++] = arr[i];
//		}
//		++i;
//	}
//	return 1;
//}
//
//int main() {
//	int i = 0;
//	int a;
//	int count = 0;
//	char array[1000][1000];
//
//	scanf("%d", &a);
//
//	while (i != a) {
//		scanf("%s", array[i]);
//		i++;
//	}
//	for (i = 0; i < a; i++) {
//		count = count + group_check(array[i]);
//	}
//	printf("%d", count);
//	return 0;
//}


//
//
//int main() {
//	int k;
//	int count = 0;
//	char arr[10000];
//	scanf("%d", &k);
//
//	switch (k) {
//	case 1:
//		count = 9;
//		printf("%d", count);
//		break;
//
//	case 2:
//		count = 9;
//		printf("%d", count);
//		break;
//
//
//	case 3:
//		for (int i = 100; i <= 999; i++) {
//			itoa(i, arr, 10);
//			if (arr[0] == arr[2]) {
//				count++;
//			}
//			}
//		printf("%d", count);
//		break;
//
//	case 4:
//		for (int i = 1000; i <= 9999; i++) {
//			itoa(i, arr, 10);
//			if (arr[0] == arr[3] && arr[1] == arr[2]) {
//				count++;
//			}
//		}
//		printf("%d", count);
//		break;
//
//	case 5:
//		for (int i = 10000; i <= 99999; i++) {
//			itoa(i, arr, 10);
//			if (arr[0] == arr[4] && arr[1] == arr[3]) {
//				count++;
//			}
//		}
//		printf("%d", count);
//		break;
//
//	case 6:
//		for (int i = 100000; i <= 999999; i++) {
//			itoa(i, arr, 10);
//			if ((arr[0] == arr[5]) && (arr[1] ==arr[4]) && (arr[2] ==arr[3])) {
//				count++;
//			}
//			}
//		printf("%d", count);
//		break;
//
//}
//
//	return 0;
//	}
//
