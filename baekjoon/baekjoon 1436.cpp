#include<iostream>
using namespace std;

int N, ans, cnt, temp;

int main()
{
	
	cin >> N;

	ans = 0; // 영화 제목
	cnt = 0; // 현재 몇번쨰 종말의 수인지

	while (cnt != N)
	{
		ans++;
		temp = ans;

		// 수에 6이 적어도 3개이상 들어가는지 판별
		while (temp != 0)
		{
			if (temp % 1000 == 666) // 종말의 숫자라면
			{
				cnt++;
				break;
			}
			else temp /= 10; // 일의 자리수 삭제
		}
	}
	cout << ans;
}
