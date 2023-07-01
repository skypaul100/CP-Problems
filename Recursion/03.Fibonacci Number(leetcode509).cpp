//leetcode (easy)  509.Fivbonacci Number
//Brute Force :
//Time= O(2^n) 
//Space= Call stack= O(n)
 //Using DP Time can be phenomenonly lessen; 
 int fib(int n) {
    if(n==0)
      return 0; //base case
    if(n==1)
      return 1;//base
    
    int num= fib(n-1)+fib(n-2); // recursive case
    return num;
        
    }
