#include <cstdio>

int main(){
	int n;			// �����������Ȼ�� n
	int step = 0;	// ��¼�任�Ĳ���

	scanf("%d", &n);

	while(n != 1){
		if(n & 1){		// �ж��Ƿ�Ϊ����
			n = (3 * n + 1) / 2;
		}
		else{
			n /= 2;
		}
		step++;
	}

	printf("%d\n", step);

	return 0;
}