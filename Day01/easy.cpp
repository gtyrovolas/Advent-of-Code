#include <stdio.h>

using namespace std;

int n = 100; // by problem specification

int main (){
	freopen("input.in", "r", stdin);
	int sum = 0;
	for(int i = 0; i < n; i++){
		int inp;
		scanf("%d", &inp);
		sum += inp/3 - 2;
	}
	printf("%d\n\n", sum);
}
