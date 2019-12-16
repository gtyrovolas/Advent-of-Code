#include <stdio.h>
#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <fstream>

using namespace std;
typedef long long int ll;
vector<ll> inp;
vector<ll> A;
ll res [100][100];

void read(){
	string str;
	ifstream in("input.in");
	getline(in, str);
	stringstream ss(str);

	int temp;
	for(; ss >> temp;){
		inp.push_back(temp);
		if(ss.peek() == ',')
			ss.ignore();
	}
}

void solve(){
	int idx = 0;
	while(true){
		if( A[idx] == 99)
			return;
		else if( A[idx] == 1)
			A[A[idx + 3]] = A[A[idx + 1]] + A[A[idx + 2]];
		else if( A[idx] == 2 )
			A[A[idx + 3]] = A[A[idx + 1]] * A[A[idx + 2]];
		else{
			cout << "Error" << endl;
			return;
		}
		idx += 4;
	}
}

void print(){
	vector<ll>::iterator it = A.begin();
	cout << *it;
	it++;
	for(; it != A.end(); it++){
		cout << "," << *it;
	}
	cout << endl;
}


int main(){
	read();
	for(int i = 0; i <= 99; i++){
		for(int j = 0; j <= 99; j++){
			inp[1] = i;
			inp[2] = j;
			A = inp;
			solve();
			cout << i << ", " << j << " output: " << A[0] << endl;
		}
	}
	print();
}
