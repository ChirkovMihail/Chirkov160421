#include <iostream>      //  самая глубокая яма в массиве.
using namespace std;
const int N=5;
int Depth(int b,int a,int c)
{
	if (b>c) {
		return b-a;
	}
	else return c-a;
}
int main()
{
	int A[N];
	int i,max=-1,M1,M2,M3;

	cout<<"Enter array : "<<endl;

	for (i = 0; i < N; i++) {
		cin>>A[i];
	}

	for (i = 1; i < N-1; i++) {
		if (A[i]<A[i+1] && A[i]<A[i-1]) {
			if (Depth(A[i-1],A[i],A[i+1])>max) {
				max=Depth(A[i-1],A[i],A[i+1]);
				M1=i-1;
				M2=i;
				M3=i+1;
			}
		}
	}

	for (i = 0; i < N; i++) {
		 cout<<A[i]<<" ";
	}

	cout<<endl;

	if (max!=-1) {
		cout<<"The deepest pit is :"<<A[M1]<<" "<<A[M2]<<" "<<A[M3]<<endl;
		cout<<"Depth is :"<<Depth(A[M1],A[M2],A[M3])<<endl;
	}
	else cout<<"There are not any pits"<<endl;

		cin>>i;
	return 0;
}
