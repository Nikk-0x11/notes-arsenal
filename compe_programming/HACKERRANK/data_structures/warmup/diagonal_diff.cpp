#include <iostream>

using namespace std;

int main()
{
  int N, left_diagonal_sum = 0, right_diagonal_sum = 0;

  cin >> N;

  int arr[N][N];

  for (int i = 0; i < N; i++)
  {
    for (int j = 0; j < N; j++)
    {
      cin >> arr[i][j];
      if (i == j)
      {
        left_diagonal_sum = left_diagonal_sum + arr[i][j];
      }
    }
  }

  for (int i = 0; i < N; i++)
  {
    for (int j = N - 1 - i; j >= 0;)
    {
      right_diagonal_sum = right_diagonal_sum + arr[i][j];
      break;
    }
  }
  cout << abs(left_diagonal_sum - right_diagonal_sum) << endl;
  return 0;
}