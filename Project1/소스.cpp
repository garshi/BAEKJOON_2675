#include<stdio.h>
#include<string.h>
int main(void) {
	// 입력받을 문자열
	int num = 0;								// 테스트 케이스 개수
	int R;

	char N[100];

	scanf_s("%d", &num);


	for (int i = 0; i < num; i++) {



		scanf_s("%d %s", &R, N);

		for (int Q = 0; Q < strlen(N); Q++) {
			for (int k = 0; k < R; k++) {
				printf("%c", N[Q]);

			}
		}
		printf("\n");
	}

}

