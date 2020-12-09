#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;
bool mysort(int a, int b){
    return a>b;
}

fstream stor(){

    fstream file,file2;
	vector<int>array;
	int x;
	file.open("index.txt");
	file2.open("save.txt");


	while (file>>x) {
		cout << x << endl;
		array.push_back(x);

		}
        sort(array.begin(),array.end(),mysort);
	for (int i = 0; i <(int)array.size(); i++) {
		cout << array[i] <<' ';
		file2<<array[i]<<' ';

	}
	file.close();
	file2.close();
	system("pause");




}
int main() {
	fstream file;
	file=stor();
}
