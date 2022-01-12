#include <stdio.h>

//void Shiftleft(int a[], int b[]) {
//	int T;
//
//}
//
//int main() {
//	printf("시저암호문: vggmdbcoocvodnvggajmojyvt\n");
//
//	char a[][26] = {
//		'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'
//	};
//	printf("기본 알파벳: ");
//	for (int i = 0; i < 26; i++) {
//		printf("%c", a[0][i]);
//	}
//
//	int b[26];
//	Shiftleft(a, b);
//	// printf("Key = 1일때, 암호문: ");
//	//for (int i = 0; i < 26; i++) {
//	//	for (int j = 0; j < 26; j++) {
//	//		a[i][j] = a[j];
//	//	}
//	//}
//	//
//	
//	puts("");
//}

int main() { // 아스키코드: 97~122
	printf("시저암호문: vggmdbcoocvodnvggajmojyvt\n");
	
	char cipherBlock[26][24] = { 
		'v','g','g','m','d','b','c','o','o','c','v','o','d','n','g','g','a','j','m','o','j','y','v','t'
	};
	printf("\n\n");
	for (int i = 0; i < 24; i++) {
		printf("%c", cipherBlock[0][i]);
	}

	for (int i = 1; i < 26; i++) {
		for (int j = 0; j < 24; j++) {
			cipherBlock[i][j] = cipherBlock[i - 1][j] + 1;
			if (cipherBlock[i][j] > 122) {
				cipherBlock[i][j] = cipherBlock[i][j] - 26;
			}
		}
	}
	printf("\n\n");
	for (int i = 1; i < 26; i++) {
		for (int j = 0; j < 24; j++) {
			printf("%c", cipherBlock[i][j]);
		}
		printf("\n\n");
	}
	
	printf("\n");
	return 0;
}