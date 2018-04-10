#include <cstdio>

int a[110];		// 输入的N个数据存储的数组

int main(){
	int N;		// 输入的数据个数N
	long long M;		// 移动的参数
	int count = 0;		// 计数，输出的个数

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