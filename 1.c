#ifndef MY_HDR
#define MY_HDR
#endif
...
#undef MY_HDR    /* Noncompliant */
  switch (day) {
  case MONDAY:
  case TUESDAY:
  WEDNESDAY:   // instead of "case WEDNESDAY"
    doSomething();
    break;
  ...
}
