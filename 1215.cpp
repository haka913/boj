/*
 * 1215.cpp
 *
 *  Created on: 2019. 2. 25.
 *      author: paul
 */
#include <iostream>

using namespace std;

int main() {
	int n, k;
	cin >> n >> k;

	long long i = 1;
	long long result = 0;
	while (i <= n) {
		long long j = k / i;
		long long r = k % i;
		if (j == 0) {//k<i
			result += r * (n - i + 1);
			i = n + 1;
		} else {//k>=i
			long long s = r / j;
			if (s + 1 > n - i + 1) {
				s = n - i;
			}
			result += (r + r - s * j) * (s + 1) / 2;
			i += s + 1;
		}
	}

	cout << result;

	return 0;
}


//#include<cstdio>
//#include<algorithm>
//
//using namespace std;
//
//int main()
//{
//	long long n, k;
//	scanf("%lld %lld", &n, &k);
//
//	long long result = k*n, i;
//	for(i = 1; i*i < k && i <= n; i++)
//		result -= (k/i)*i;
//
//	long long s = i;
//	// i : ¸ò
//	if( i <= n)
//	{
//		for(; i > 0; i--)
//		{
//			long long start = max(s, k/(i+1)+1), end = k/i;
//			if(start > end)	continue;
//			if(end > n)	end = n;
//			if(start > n)	break;
//
//			long long sum = (start+end) * (end-start+1)/2;
//			result -= i*sum;
//		}
//	}
//	printf("%lld", result);
//}

	//python2
//n,m=map(int,raw_input().split())
//i=1
//r=0
//while i<=n:
//    if i<0:
//        r+=m%i
//        i+=1
//    else:
//        u,v=m/i,m%i
//        if u:
//            t=min(v/u,n-i)
//            r+=(v+v-t*u)*(t+1)/2
//            i+=t+1
//        else:
//            r+=v*(n-i+1)
//            i=n+1
//print r
