#include<iostream>
using namespace std;

int N, ans, cnt, temp;

int main()
{
	
	cin >> N;

	ans = 0; // ��ȭ ����
	cnt = 0; // ���� ����� ������ ������

	while (cnt != N)
	{
		ans++;
		temp = ans;

		// ���� 6�� ��� 3���̻� ������ �Ǻ�
		while (temp != 0)
		{
			if (temp % 1000 == 666) // ������ ���ڶ��
			{
				cnt++;
				break;
			}
			else temp /= 10; // ���� �ڸ��� ����
		}
	}
	cout << ans;
}
