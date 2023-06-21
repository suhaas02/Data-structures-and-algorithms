class Solution {
public:
    int characterReplacement(string s, int k) {
        // char arr[26] = {0};
        // int j = 0, len = 0;
        // for(int i = 0; i < s.length(); i++)
        // {
        //     arr[s[i] - 'a']++;
            
        // }

        int n = s.length();
        int i = 0, j = 0, maxChar = 0, ans = -1;
        //here i is the window starting point
        // j is the window ending point
        //maxChar gives the count of the maximum count of the character in the map, another idea to find is to maintain an char array of size 26 and update the count and find the maximum in every iteration, by running the loop. Instead of that maintain maxChar. idea...op
        unordered_map<char,int> mp;
        while(j < n)
        {
            //update count of the every char, if element is not present, then puhs it into the map;
            mp[s[j]]++;
            //now find the most repeating character frequency, in the map
            maxChar = max(maxChar, mp[s[j]]);

            //find the window length();
            int curr_len = j - i + 1;

            //if the difference of window length and most repeating character in the map id greater than k, it means that there are more than k elements that are not same as most repeating character, so u can decrease the count of the element at i and decrease the window count;
            if(curr_len - maxChar > k)
            {
                mp[s[i]]--;
                i++;
            }

            //now find out the window length again, and take the maximum.
            curr_len = j - i + 1;
            ans = max(curr_len, ans);
            j++;
        }

        //finally return the ans; :)
        return ans;

    }
};