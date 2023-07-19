// C++ program to check whether two strings are anagrams
// of each other
#include <bits/stdc++.h>
using namespace std;
 
bool areAnagram(string &str1, string &str2)
{
	// Get lengths of both strings
	int n1 = str1.length();
	int n2 = str2.length();

	// If length of both strings is not same, then they
	// cannot be anagram
	if (n1 != n2)
		return false;
  
   
    transform(str1.begin(), str1.end(), str1.begin(), ::toupper);
    transform(str2.begin(), str2.end(), str2.begin(), ::toupper);
    
   
    remove(str1.begin(),str1.end(), ' ');
    remove(str2.begin(),str2.end(), ' ');
    
    
	// Sort both the strings
	sort(str1.begin(), str1.end());
	sort(str2.begin(), str2.end());

	// Compare sorted strings
	for (int i = 0; i < n1; i++)
		if (str1[i] != str2[i])
			return false;

	return true;
}

// Driver code
int main()
{
	string str1 ;
getline(cin,str1);

	string str2 ;
	cin.ignore();
getline(cin,str2);
	// Function Call

	if (areAnagram(str1, str2))
		cout << "true";
	else
		cout << "false";

	return 0;
}


