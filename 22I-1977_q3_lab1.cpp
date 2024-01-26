#include<iostream>
using namespace std;
int main()
{
	int w;
	int s=0;
	int b = 0;
	int sum = 0;
	int m, n;
	cout << "Enter The Number of Rows:" << endl;
	cin >> m;
	cout << "Enter The Number Of Cols:" << endl;
	cin >> n;
	int** A = new int*[m];
	for (int i = 0; i < m; i++)
	{
		A[i] = new int[n];
	}
	cout << "_______________" << endl;
	cout << "Enter The Elements:" << endl;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cin >> A[i][j];
		}
	}
	cout << "What Operation You Want To Perform" << endl;
	cout << "1. Display" << endl;
	cout << "2. Sum of All Elements" << endl;
	cout << "3. Row Wise Sum" << endl;
	cout << "4. Column Wise Sum" << endl;
	cout << "5. Transpose" << endl;
	cin >> w;
	if (w == 1)
	{
		cout << "Elements" << endl;
		for (int i = 0; i < m; i++)
		{
			for (int j = 0; j < n; j++)
			{
				cout << A[i][j];
			}
		}
	}
	if (w == 2)
	{
		for (int i = 0; i < m; i++)
		{
			for (int j = 0; j < n; j++)
			{
				sum = sum + A[i][j];
			}
		}
		cout << "The Sum Comes To Be:" << sum;
	}
	if (w == 3)
	{
		for (int i = 0; i < m; i++)
		{
			for (int j = 0; j < n; j++)
			{
				s = s + A[i][j];
			}
			cout << "Row Wise Sum:" << endl;
			cout << s <<" " << endl;
			s = 0;
		}
	}
	if (w == 4)
	{
		for (int i = 0; i < m; i++)
		{
			for (int j = 0; j < n; j++)
			{
				b = b + A[j][i];
			}
			cout << "Column Wise Sum:";
		    cout << b << " "<< endl;
			b = 0;
		}
	}
	if (w == 5)
	{
		for (int i = 0; i < m; i++)
		{
			for (int j = 0; j < n; j++)
			{
				cout << A[j][i];
			}
		}
	}
}