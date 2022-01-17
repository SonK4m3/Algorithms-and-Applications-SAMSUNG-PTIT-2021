#include<bits/stdc++.h>
using namespace std;

typedef struct Person{
	string name;
	int age;
	Person *child;
}person;

person* makePerson(int x){
	person* tmp = new person();
	tmp->age = x;
	tmp->child = NULL;
	return tmp;
}

bool isEmpty(person* a){
	return a == NULL;
}

int Size(person* a){
	int cnt = 0;
	while(a != NULL){
		cnt ++;
		a = a->child;
	}
	return cnt;
}

void insertFirst(person* &a, int x){
	person* tmp = makePerson(x);
	if(a == NULL)
		a = tmp;
	else{
		tmp->child = a;
		a = tmp;
	}
}

void insertLast(person* &a, int x){
	person* tmp = makePerson(x);
	if(a == NULL)
		a = tmp;
	else{
		person* p = a;
		while(p->child != NULL){
			p = p->child;
		}
		p->child = tmp;
	}
}

void insertMiddle(person* &a, int x, int pos){
	int n = Size(a);
	if(pos <= 0 || pos > n + 1){
		cout << -1 << endl;
	}
	if(n == 1){
		insertFirst(a, x);
		return;
	}
	else if(n == pos + 1){
		insertLast(a, x);
		return;
	}
	
	person* p = a;
	for(int i = 1; i < pos - 1; i++){
		p = p->child;
	}
	person* tmp = makePerson(x);
	tmp->child = p->child;
	p->child = tmp;
}

void delFirst(person* &a){
	if(a == NULL)
		return;
	a = a->child;
}

void delLast(person* &a){
	if(a == NULL)
		return;
	person* truoc = NULL, *sau = a;
	while(sau->child != NULL){
		truoc = sau;
		sau = sau->child;
	}
	if(truoc == NULL){
		a = NULL;
	}
	else{
		truoc->child = NULL;		
	}
}

void delMiddle(person* &a, int pos){
	if(pos <= 0 || pos > Size(a))
		return;
	person* truoc = NULL, *sau = a;
	for(int i = 1; i < pos; i++){
		truoc = sau;
		sau = sau->child;
	}
	if(truoc == NULL){
		a = a->child;
	}
	else{
		truoc->child = sau->child;
	}
}

void in(person* a){
	while(a != NULL){
		cout << a->age << endl;
		a = a->child;
	}
}

void input(string &s){
	char k; cin >> k;
	getline(cin, s);
	s = k + s;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		for(int i = 0; i < n; i++){
			string s;
			input(s);
		}
	}
}
