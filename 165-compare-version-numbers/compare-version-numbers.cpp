class Solution {
public:
    int compareVersion(string version1, string version2) {
        int len1 = version1.size();
        int len2 = version2.size();
        int i = 0, j= 0;
        while(i < len1 or j < len2)
        {
            int n1 = 0, n2 = 0;
            while(i < len1 and version1[i] != '.')
            {
                n1 = n1 * 10 + (version1[i] - '0');
                i++;
            }
            while(j < len2 and version2[j] != '.')
            {
                n2 = n2 * 10 + (version2[j] - '0');
                j++;
            }
            i++;j++;
            if(n1 > n2)
                return 1;
            if(n2 > n1)
                return -1;
        }

        return 0;

    }
};