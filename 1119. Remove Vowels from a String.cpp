class Solution{
public:	
		
	string removeVowels(string s) 
	{
	    // Your code goes here
	     int j = 0;

	    for(int i = 0; i < s.size(); i++)
	    {
	    	if(s[i]!='a' && s[i]!='e' && s[i]!='i' && s[i]!='o' && s[i]!='u')
	    		s[j++] = s[i];
	    }

	    return s.substr(0, j);
	}
};

if we are allowed to use extra space

string remVowel(string str)
{
    vector<char> vowels = {'a', 'e', 'i', 'o', 'u',
                           'A', 'E', 'I', 'O', 'U'};
     
    for (int i = 0; i < str.length(); i++)
    {
        if (find(vowels.begin(), vowels.end(),
                      str[i]) != vowels.end())
        {
            str = str.replace(i, 1, "");
            i -= 1;
        }
    }
    return str;
}
