#include <cstdio>

#define CLK_TCK 100

int main(){
	int C1, C2;			// �����ֵ����
	int dC;				// ����õ��Ĳ�ֵ
	int hh, mm, ss;		// ��Ҫ����ĸ�ʽ����ʱ���֡�����

	scanf("%d%d", &C1, &C2);

	dC = C2 - C1;

	if(dC % CLK_TCK >= CLK_TCK/2){
		dC = dC / CLK_TCK + 1;
	}
	else{
		dC /= CLK_TCK;
	}

	hh = dC / 3600;
	mm = (dC % 3600) / 60;
	ss = dC % 60;

	printf("%02d:%02d:%02d\n", hh, mm, ss);

	return 0;
}