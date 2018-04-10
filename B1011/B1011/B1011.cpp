#include <cstdio>

int main(){
	int T;			// 测试用例的个数
	int t = 1;			// 当前组数
	long long A, B, C;	// 测试参数

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