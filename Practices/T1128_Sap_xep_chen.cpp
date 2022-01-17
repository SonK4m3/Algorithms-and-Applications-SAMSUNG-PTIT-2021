#include<bits/stdc++.h>
using namespace std;

struct Node{
	int value;
	Node *l, *r;
};

Node* _new(int value){
	Node* n = (Node*) malloc(sizeof(Node));
	n->value = value;
	n->l = n->r = NULL;
	return n;
}

Node* insert(Node* root, int value){
	if(root == NULL) return _new(value);
	else if(value < root->value)
		root->l = insert(root->l, value);
	else
		root->r = insert(root->r, value);
	return root;
}

void in(Node* n){
	if(n->l) in(n->l);
	cout << n->value <<" ";
	if(n->r) in(n->r);
}

int main(){
	int index = 0;
	int n;
	cin >> n;
	struct Node *root = NULL;
	for(int i = 0; i< n; i++){
		int x;
		cin >> x;
		root = insert(root, x);
		cout << "Buoc " << index <<": ";
		in(root);
		cout << endl;
		index += 1;
	}	
	return 0;
}
