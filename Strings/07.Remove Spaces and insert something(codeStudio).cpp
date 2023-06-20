//CodeStudio: Remove Spaces
//Time= O(n)
//Space= O(n) Since, using a extra temp[] array 

#include <bits/stdc++.h> 
string replaceSpaces(string &str){
	//take a temp string
    string temp="";
    
	//Traverse the whole string char by char
	//And if finds space then push "@40" in temp array
	//Else keep traversing and push char in temp string
	for(int i=0 ; i<str.length() ; i++){

		if(str[i]== ' ')
		{
			temp.push_back('@');
			temp.push_back('4');
			temp.push_back('0');
		}
		else
		  temp.push_back(str[i]);
	}
	return temp;
}
