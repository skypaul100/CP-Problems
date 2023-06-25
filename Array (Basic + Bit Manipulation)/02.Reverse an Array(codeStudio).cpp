
//reverse an array 0 to n : codestudio
//Time= O(n)
//Space= O(1)
void reverseArray(vector<int> &arr , int m)
{
	
	int start= 0 , end=arr.size()-1;
	while(start<=end)
	{
		swap(arr[start],arr[end]);
		end--;
		start++;
	}
}

 
//reversethe array after 'm' indices m to n: codestudio
void reverseArray(vector<int> &arr , int m)
{
	
	int start=m+1,end=arr.size()-1;
	while(start<=end)
	{
		swap(arr[start],arr[end]);
		end--;
		start++;
	}
}

