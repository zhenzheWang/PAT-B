#include <cstdio>

int main(){
	int T;			// ���������ĸ���
	int t = 1;			// ��ǰ����
	long long A, B, C;	// ���Բ���

	scanf("%d", &T);	

	while(t <= T){
		scanf("%lld%lld%lld", &A, &B, &C);
		if(A + B > C){
			printf("Case #%d: true\n", t);
		}
		else{
			printf("Case #%d: false\n", t);
		}
		t++;
	}

	return 0;
}