class Solution {
public:
    string freqAlphabets(string s) {
        string res = "";
		for(int i = 0 ; i < s.length() ; i++) // Traversing the array
		{
			if(i+2 < s.length() && s[i+2] == '#') // we have to check for next two digits for a hash
			// if '#' is found then character is between 'j' to 'z' otherwise we will take individual characters
			{
				res += ('j' + (s[i] - '1') * 10 + (s[i+1] - '0'));  // Mathematical calculation for which character it would be
				i += 2; // now we got the hash so directly the pointer will be jumped to next index besides '#'
			}
			else
				res += 'a' + (s[i] - '1'); // here we didn't got any '#' so we will individually calculate the character values for each number.
		}
		return res; // finally we are return the string thus obtained.
    }
};