#include <stdio.h>

int main() {
	char cipherBlock[26][24] = { // 복호화하기 위해서는 Shiftright 또는 아스키코드 [-1]씩
		'v','g','g','m','d','b','c','o','o','c','v','o','d','n','g','g','a','j','m','o','j','y','v','t'
	};

	printf("=========시저 암호의 복호화 하기=========\n\n");
	printf("암호문: vggmdbcoocvodnggajmojyvt\n\n");
	printf("=========================================\n");
	for (int i = 1; i < 26; i++) {
		for (int j = 0; j < 24; j++) {
			cipherBlock[i][j] = cipherBlock[i - 1][j] - 1;
			if (cipherBlock[i][j] < 97) {
				cipherBlock[i][j] = cipherBlock[i][j] + 26;
			}
		}
	}
	printf("\n[시저 암호문에 대한 전사 공격]\n\n");
	for (int i = 0; i < 26; i++) {
		printf("복호화 KEY[%d] : ", i);
		for (int j = 0; j < 24; j++) {
			printf("%c", cipherBlock[i][j]);
		}
		puts("\n");
	}
	int n;
	printf("KEY = ");
	scanf_s("%d", &n);


	printf("========시저 평문 생성  KEY[%d]==========\n\n", n);
	for (int i = 0; i < 24; i++) {
		printf("%c", cipherBlock[n][i]);
	}
	puts("");

	return 0;
}
	//char plainBlock[26][24] = {
	//	'a','l','l','r','i','g','h','t','t','h','a','t','i','s','l','l','f','o','r','t','o','d','a','y'
	//};
	//
	//int n;
	//printf("========시저 암호의 암호화 하기==========\n");
	//printf("평문: allrightthatisllfortoday\n");
	//printf("KEY = ");
	//scanf_s("%d", &n);

	//for (int i = 1; i < 26; i++) { // 97 ~ 122
	//	for (int j = 0; j < 24; j++) {
	//		plainBlock[i][j] = plainBlock[i - 1][j] + 1;
	//		if (plainBlock[i][j] > 122) {
	//			plainBlock[i][j] = plainBlock[i][j] - 26;
	//		}
	//	}
	//}
	//printf("========시저 암호문 생성  KEY[%d]========\n", n);
	//for (int i = 0; i < 24; i++) {
	//	printf("%c", plainBlock[n][i]); // 키: 21
	//}
	//printf("\n\n");

	//char cipherBlock[26][24] = { 0, };
	//int m;
	//printf("========시저 암호 복호화 하기==========\n");
	//printf("암호문: vggmdbcoocvodnggajmojyvt\n");
	//printf("KEY = ");
	//scanf_s("%d", &m);
	//

	//for (int i = 0; i < 24; i++) {
	//	cipherBlock[0][i] = plainBlock[21][i];
	//}

	//for (int i = 1; i < 26; i++) { // 97 ~ 122
	//	for (int j = 0; j < 24; j++) {
	//		cipherBlock[i][j] = cipherBlock[i - 1][j] - 1;
	//		if (cipherBlock[i][j] < 97) {
	//			cipherBlock[i][j] = cipherBlock[i][j] + 26;
	//		}
	//	}
	//}
	//printf("========시저 암호문 생성  KEY[%d]========\n", m);
	//for (int i = 0; i < 24; i++) {
	//	printf("%c", cipherBlock[m][i]);
	//}
	//puts("");
