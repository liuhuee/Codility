/*
 * falling disks
 * Determine the number of disks that fit into the well
 */
int falling_disks ( int A[], int N, int B[], int M ) {
  int *min = (int *)malloc(4*N);
  int i,j;
  min[0] = 0;
  for(i=1;i<N;i++)
  {
    if (A[min[i-1]] < A[i])
    {
      min[i] = min[i-1];
    }
    else
    {
      min[i] = i;
    }
    printf("%d\n", min[i]);
  }
  j = 0;
  for(i=N-1;i>=0;)
  {
      if (A[min[i]] >= B[j])
      {
        //printf("%d %d\n",i,j);
        i--;
        j++;
        if (j>=M)
          break;
      }
      else
      {
        i--;
      }
  }
  
  return j;
}
