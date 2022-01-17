#include<bits/stdc++.h>
using namespace std;
 
struct data
{
	string fatherN;
	string sonN;
	int ageR;
	int ageSon;
} typedef data;
 
int cmp (data a, data b)
{
	if (a.ageSon<b.ageSon) return 0;
	else if (a.ageSon==b.ageSon)
	{
		if (a.sonN>b.sonN) return 0;
	}
	return 1;
}
 
int x;
data linkDL[102];
void Dequy (string fth, int kc)
{
	for (int i=1; i<=x; i++)
	{
		if (fth==linkDL[i].fatherN)
		{
			if (fth=="Ted")
			{
				linkDL[i].ageSon=100-linkDL[i].ageR;
				kc=100-linkDL[i].ageR;
				Dequy (linkDL[i].sonN, kc);
			}
			else
			{
				linkDL[i].ageSon=kc-linkDL[i].ageR;
				Dequy (linkDL[i].sonN, kc-linkDL[i].ageR);
			}
		}
	}
}
 
int main ()
{
	int t;
	cin>>t;
	for (int k=1; k<=t; k++)
	{
		cin>>x;
		for (int i=1; i<=x; i++)
		{
			cin>>linkDL[i].fatherN>>linkDL[i].sonN>>linkDL[i].ageR;
		}
		Dequy ("Ted", 0);
		sort (linkDL+1, linkDL+x+1, cmp);
		cout<<"DATASET "<<k<<endl;
		for (int i=1; i<=x; i++)
		{
			cout<<linkDL[i].sonN<<" "<<linkDL[i].ageSon<<endl;
		}
	}
	return 0;
}
