#include<stdio.h>
#include<math.h>
int main(){
	int n;
	scanf("%d",&n);
	long long tong=0;
	for(int i=1;i<=n;i++){
//chẵn là 2,4,6,8 lẻ 1,3,5,7
	tong+=2*i;
}
	printf("%lld",tong);
return 0;
}

	