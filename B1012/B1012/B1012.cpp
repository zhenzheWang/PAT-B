#include <cstdio>

int main(){
	int N;			// 带分类的数据的个数
	int A[5] = {0};	// 每个分类的最终结果
	int count[5] = {0};		// 记录当前是该分组的第几个数据
	int temp;		// 输入数据的临时存放变量 

	scanf("%d", &N);

	while(N--){
		scanf("%d", &temp);

		switch (temp % 5)
		{
		case 0: 
			if(temp % 2 == 0){
				A[0] += temp;
				count[0]++;
			}
			break;
		case 1:
			if(count[1] % 2 == 0){
				A[1] += temp;
			}
			else{
				A[1] -= temp;
			}
			count[1]++;
			break;
		case 2:
			A[2]++;
			count[2]++;
			break;
		case 3:
			A[3] += temp;
			count[3]++;
			break;
		case 4:
			if(temp > A[4]){
				A[4] = temp;
			}
			count[4]++;
			break;
		default:
			break;
		}
	}

	for(int i = 0; i < 5; i++){
		if(count[i] == 0){
			printf("N");
		}
		else{
			if(i == 3){
				printf("%.1f", (double)A[i]/(double)count[3]);
			}
			else{
				printf("%d", A[i]);
			}
		}

		if(i != 4){
			printf(" ");
		}
	}

	return 0;
}