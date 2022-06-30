void pushZeroesEnd(int *arr, int n)
{
  int next_number = 0, i = 0;
  while (i < n)
  {
    if (arr[i] != 0)
    {
      int temp = arr[next_number];
      arr[next_number] = arr[i];
      arr[i] = temp;
      next_number++;
    }
    i++;
  }
}