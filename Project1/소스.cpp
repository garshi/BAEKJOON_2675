#include<stdio.h>
#include<string.h>
int main(void) {
	// �Է¹��� ���ڿ�
	int num = 0;								// �׽�Ʈ ���̽� ����
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

