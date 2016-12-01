int x;

void foo()
{
  x = x +1;
  assert(x > 10);
}

int main()
{
  __CPROVER_assume(x > 10);
  foo();
  foo();
  assert(x > 10);
}
