#include <stdio.h>

using namespace std;

int n = 100; // by problem specification

int calc(int inp){
	int weight =  inp/3 - 2;
	if(weight <= 0) return 0;
	return weight + calc(weight);
}

int main (){
	freopen("input.in", "r", stdin);
	int sum = 0;
	for(int i = 0; i < n; i++){
		int inp;
		scanf("%d", &inp);
		sum += calc(inp);
	}
	printf("%d\n\n", sum);
}
