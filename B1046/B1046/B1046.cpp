#include <cstdio>

int main(){
	int N;			// ��ȭ������
	int A_han, A_hua, B_han, B_hua;		// ���ҵĺ�������ֵ
	int A_fail = 0, B_fail = 0;		// ������Ĵ���
	int A_win = 0, B_win = 0;		// ��ʱ�����������洢�����Ƿ�Ӯ������һ���ظ��жϵĴ�����

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