#include <cstdio>

int main(){
	int N;			// 划拳的轮数
	int A_han, A_hua, B_han, B_hua;		// 甲乙的喊、划数值
	int A_fail = 0, B_fail = 0;		// 甲乙输的次数
	int A_win = 0, B_win = 0;		// 临时变量，用来存储甲乙是否赢，减少一次重复判断的次数。

	scanf("%d", &N);

	while(N--){
		A_win = 0;
		B_win = 0;

		scanf("%d%d%d%d", &A_han, &A_hua, &B_han, &B_hua);

		if(A_hua == A_han + B_han){
			A_win++;
		}
		if(B_hua == A_han + B_han){
			B_win++;
		}

		if(A_win && (!B_win)){
			B_fail++;
		}
		else if(B_win && (!A_win)){
			A_fail++;
		}
	}

	printf("%d %d\n", A_fail, B_fail);

	return 0;
}