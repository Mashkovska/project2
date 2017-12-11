#include <iostream>
#include <iomanip>
using namespace std;
#define n 5
#define m 5
class Matrix {
private:
	double M[n][m];
public:
	void InputMatrix();
	void OutputMatrix();
	void SortVybirRiadok(int);
	void ArifmaticAverage();
	void Dobutok(double* ptr);
};
void Matrix::InputMatrix()
{
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
		{
			cout << "[" << i << "][" << j << "]=";
			cin >> M[i][j];
		}
}
void Matrix::OutputMatrix()
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
			cout << setw(7) << M[i][j] << " ";
		cout << endl;
	}
}
void Matrix::SortVybirRiadok(int row)
{
	for (int i = 0; i < m; i++)
	{
		int max = M[row][i], max_index = i;

		for (int j = i; j < m; j++)
		{
			if (M[row][j] < max)
			{
				max = M[row][j];
				max_index = j;
			}
		}
		swap(M[row][i], M[row][max_index]);
	}
}

void Matrix::ArifmaticAverage()
{
	double ArifmaticAverage[m - 1];
	int i, j;
	for (i = 0; i < m; i++)
		ArifmaticAverage[i] = 0;

	cout << endl;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j != i; j++)
		{
			ArifmaticAverage[j] = ArifmaticAverage[j] + M[i][j];
		}

	}
	for (i = 0; i < m - 1; i++) {
		ArifmaticAverage[i] = ArifmaticAverage[i] / (n - i - 1);
		cout << ArifmaticAverage[i] << " ";

	}
	Dobutok(ArifmaticAverage);
}

void Matrix::Dobutok(double* ptr)
{
	double dob = 1;
	for (int i = 0; i < m - 1; i++)
	{
		dob = dob * ptr[i];
	}
	cout << " dobutok =" << dob << endl;

}

void main()
{
	Matrix A;
	cout << "Input elements of matrix A" << endl;
	A.InputMatrix();
	cout << "\n newInput Matrix A" << endl;
	A.OutputMatrix();

	for (int i = 0; i < n; i++)
	{
		A.SortVybirRiadok(i);
	}

	cout << "\n newSorted Matrix A" << endl;
	A.OutputMatrix();

	cout << "vuvid mass:" << endl;
	A.ArifmaticAverage();
	system("pause");
}