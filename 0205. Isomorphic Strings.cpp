class Solution {
public:
    bool isIsomorphic(string str1, string str2) {
        if (str1.length() != str2.length())
		return false;

	// Use C++'s built in map to store mappings of str1 chars to str2 chars.
	map<char, char> map;

	// Use a set to keep track of already mapped characters.
	set<char> set;

	for (int i = 0; i < str1.length(); i++)
	{
		char c1 = str1[i], c2 = str2[i];
	
		// If c1 has been encountered before:
		if (map.find(c1) != map.end())
		{
			// Return false if first occurrence of c1 is mapped to
			// a different character.
			if (map[c1] != c2)
				return false;
		}

		// If c1 is encountered for the first time, it has not been mapped yet:
		else
		{
			// Return false if c2 is already mapped to some other char in str1
			if (set.find(c2) != set.end())
				return false;
		
			// All checks passed. So insert in the map, and the set.
			map[c1] = c2;
			set.insert(c2);
		}
	}
	return true;
    }
};

// second solution

class Solution {
public:
    bool isIsomorphic(string s, string t) {
       int m1[256] = {0}, m2[256] = {0}, n = s.size();
        for (int i = 0; i < n; ++i) {
            if (m1[s[i]] != m2[t[i]]) return false;
            m1[s[i]] = i + 1;
            m2[t[i]] = i + 1;
        }
        return true;
    }
};
