#include <cstdio>

int a[110];		// �����N�����ݴ洢������

int main(){
	int N;		// ��������ݸ���N
	long long M;		// �ƶ��Ĳ���
	int count = 0;		// ����������ĸ���

	scanf("%d%lld", &N, &M);

	M = M % N;

	for(int i = 0; i < N; i++){
		scanf("%d", &a[i]);
	}

	for(int i = N-int(M); i < N; i++){
		printf("%d", a[i]);
		
		if(++count < N){
			printf(" ");
		}
	}

	for(int i = 0; i < N-int(M); i++){
		printf("%d", a[i]);
		
		if(++count < N){
			printf(" ");
		}
	}
	
	printf("\n");

	return 0;
}