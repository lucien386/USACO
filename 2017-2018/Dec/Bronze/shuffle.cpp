/*
ID: xinyu.l1
TASK: shuffle
LANG: C++                 
*/
#include<set>  
#include<map>  
#include<list>  
#include<queue>  
#include<stack>  
#include<string>  
#include<cmath>  
#include<time.h>  
#include<vector>  
#include<bitset>  
#include<memory>  
#include<utility>  
#include<stdio.h>  
#include<iostream>  
#include<stdlib.h>  
#include<string.h>  
#include<algorithm> 

using namespace std;
const long long  MAX=2147483647;
int n;
int info[101];
int sequence[4][101];
int main(int argc, char const *argv[])
{
	std::ios_base::sync_with_stdio(false);
	freopen("shuffle.in","r",stdin);
	freopen("shuffle.out","w",stdout);
	cin>>n;
	for(int i = 1;i<=n;++i)cin>>info[i];
	for(int i = 1;i<=n;++i)cin>>sequence[0][i];
	for(int i = 1;i<=3;++i){
		for(int j = 1;j<=n;++j){
			sequence[i][j] = sequence[i-1][info[j]];
		}
	}
	for(int i = 1;i<=n;++i) cout<<sequence[3][i]<<endl;
	return 0;
}