int function1()
{
  return 3;
}

void function2()
{
  function1();
}

int function3(char* ptr) /* Noncompliant; two explicit returns */
{
  if (ptr == NULL) return -1;

  return 7;
}

void function4(char *ptr) /* Noncompliant; two returns, one explicit and one implicit */
{
  if (1) return;

  printf("hello world!\n");
}
