//Geeksforgeeks # Maximum occuring character
//Time = O(n)
//Space= O(1) //Using extra arr[26]; having constant size

class Solution
{
    public:
    //Function to find the maximum occurring character in a string.
    char getMaxOccuringChar(string str)
    {
        //basic without map solution
        int arr[26]={0};//initially all 0 in array of all chars a-z
        
        for(int i=0 ; i<str.length() ; i++){
            char ch=str[i]; // characters of given string
            int count=0;
            count = ch-'a'; //alphabet position in count of that char
            
            //increment the value in count index in arr[]
            arr[count]++; // do increments the same chars if repeats in string using loop 
        }
        //find max occuring
        int max=-1, ans=0;
        
        for(int i=0 ; i<26 ; i++){
            if(max < arr[i])
            {
                max=arr[i];
                ans=i;
            }
        }
        char finalAns = 'a' + ans;
        return finalAns;
        
    }

};

//{ Driver Code Starts.

int main()
{
   
    int t;
    cin >> t;
    while(t--)
    {
        string str;
        cin >> str;
    	Solution obj;
        cout<< obj.getMaxOccuringChar(str)<<endl;
    }
}
// } Driver Code Ends
