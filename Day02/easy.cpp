#include <stdio.h>
#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <fstream>

using namespace std;
typedef long long int ll;
vector<ll> A;

void read(){
	string str;
	ifstream in("input.in");
	getline(in, str);
	stringstream ss(str);

	int temp;
	for(; ss >> temp;){
		A.push_back(temp);
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
	solve();
	print();
}
