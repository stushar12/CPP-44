#include<bits/stdc++.h>
using namespace std;
int main()
 {
	int sum=0,res=0;
	int N=4,K=2;
	int Arr[N]={100,200,300,400};
         for(int i=0;i<K;i++)
         {
             sum=sum+Arr[i];
         }
         res=max(sum,res);
         for(int i=K;i<N;i++)
         {
             sum=sum-Arr[i-K];
             sum=sum+Arr[i];
             res=max(res,sum);
         }
		 cout<<res;
}