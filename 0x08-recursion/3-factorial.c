#include "main.h"

/**
  *factorial -  returns the factorial of a given number
  *@n: the number
  *return:
  */

int factorial(int n){
	if(n<0){
	return -1;
	}
	else if(n=0){
	return 0;
	}
	else{
	return n*(n-1);
	}
}
