int loop_function(int i, int j, int k)
{
  assume(i==0&&j==0);
  while (i<=k){
      i=i+1;
      j=j+1;
  }
  return j;
}
