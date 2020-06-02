function myMethod() {  // Noncompliant
  if(something) {  // Noncompliant
    executeTask();
  } else {  //Noncompliant
    doSomethingElse();
  }
}
