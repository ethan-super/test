function func1() { // Noncompliant - there are two points of exit
  if (false) {
    return;
  }
}

function func2() { // Noncompliant - there are two points of exit
  if (a > 0) {
    return 0;
  }
  return -1;
}
