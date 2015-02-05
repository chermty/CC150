#include <iostream>
#include <cstring>
using namespace std;

bool isUnique(string s)
{
	bool appear[256];
	memset(appear, 0, sizeof(appear));
	for(int i=0;i < s.length();i++)
	{
		int position =(int)s[i];
		if(appear[position])
			return false;
		else
			appear[position]=true;
				
	}
	
	return true;
	
	
}


int main()
{
	string s1="test it is a unique string";
	string s2="tes2";
	cout<<isUnique(s1)<<endl;
	cout<<isUnique(s2)<<endl;
	system("pause");
	return 0;
}


