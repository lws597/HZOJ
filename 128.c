#include<stdio.h>
int main() {
	int n;
	scanf("%d", &n);
	double sum=0;
	for(int i=0; i<n; i++) {
		int a;
		scanf("%d",&a);
		sum+=a;
	}
	printf("%.2lf",sum/n);
	return 0;
}