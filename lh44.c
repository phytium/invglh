int main() {
  int x;
  int y;
  assume(x==1&&y==0);
  while ((y < 100000)) {
    x  = x + y;
    y  = y + 1;
  }
}
