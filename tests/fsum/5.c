int x, y, z;

void foo()
{
  if (y < 0) {
    x = y + y;
  } else {
    y = x + x;
  }
  x = x + 1;
  assert((x + y) > 0);
}

int main()
{
  //  __CPROVER_assume((x < 128 && y > 256));

  __CPROVER_assume((x == 64) && (y == 32));

  foo();
  z = x + y;

  assert(z == 193); 

  return 0;
}
