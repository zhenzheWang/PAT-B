#include <cstdio>

int main(){
	int n;			// 接收输入的自然数 n
	int step = 0;	// 记录变换的步数

	scanf("%d", &n);

	while(n != 1){
		if(n & 1){		// 判断是否为奇数
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