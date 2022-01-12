#include<iostream>
#include<string>
#include<ctime>
using namespace std;


int main() {
	srand(time(NULL));


	string dn[16] = { "dr","dw","l","m","qu","thr","tr","tw","scr","sl","sm","sp","spl","squ","wh","y" };
	string vowels[7] = { "a","e","i","o","u","ee","oo" };
	string end[13] = { "bb","ck","dd","mf","mp","mpf","ng","nk","pp","rf","rk","rp","zz" };
	string end2[8] = { "aldo","et","et","le","le", "le","o","ok" };

	int num = 5; 

	while (num != 0) {
		cout << dn[rand() % 16] << vowels[rand() % 7] << end[rand() % 13] << end2[rand() % 8];

		cin >> num;
	}
}