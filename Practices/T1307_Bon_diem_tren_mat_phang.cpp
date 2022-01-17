#include<iostream>
using namespace std;

typedef struct Point{
	int x, y, z;
}point;

void nhap(point& a){
	cin >> a.x >> a.y >> a.z;
}

point vec(point a, point b){
	point ab;
	ab.x = b.x - a.x;
	ab.y = b.y - a.y;
	ab.z = b.z - a.z;
	return ab;
}

point tich_co_huong(point a, point b){
	point ab;
	ab.x = b.z*a.y - a.z*b.y;
	ab.y = a.z*b.x - a.x*b.z;
	ab.z = a.x*b.y - b.x*a.y;
	return ab;
}

int tich_vo_huong(point a, point b){
	return a.x*b.x + a.y*b.y + a.z*b.z;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		point A, B, C, D;
		nhap(A);
		nhap(B);
		nhap(C);
		nhap(D);
		point AB = vec(B, A), AC = vec(C, A), AD = vec(D, A);
		int tich = tich_vo_huong(tich_co_huong(AB, AC), AD);
		tich == 0 ? cout<<"YES" : cout<<"NO";
		cout <<endl;
	}
}
