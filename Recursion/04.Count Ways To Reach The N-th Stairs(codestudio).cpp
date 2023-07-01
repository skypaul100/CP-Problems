//codingninjas(medium): Count Ways To Reach The N-th Stairs: By climbing either 1 or 2 steps at once.
//Time= O()
//Space= O(n)

//Using Recursion: this code causes TLE for some test cases!
int countDistinctWays(int nStairs) {
    //base case
    if(nStairs<0)
     return 0;

    if(nStairs==0)
     return 1;

    //recursive case
    int ans= countDistinctWays(nStairs-1) + 
             countDistinctWays(nStairs-2);

    return ans;

}
