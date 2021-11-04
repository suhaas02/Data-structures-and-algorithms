// //Day - 9, Topic: Arrays
// //Implementing next permutation, which rearranges numbers into the 
// //lexicographically next greater permutation of numbers.
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int flag=0;
    for(int i=n-1;i>=0;i--)
    {
        if(a[i]>a[i-1])
        {
            flag=1;
            break;
        }
    }
    if(flag==0)
    {
        cout<<"-1";
    }
    else
    {
        int i=n-1;
        while(a[i]<=a[i-1])
        {
            i--;
        }
        int j=n-1;
        while(a[j]<=a[i-1])
        {
            j--;
        }
        swap(a[i-1],a[j]);
        reverse(a+i,a+n);
        for(int i=0;i<n;i++)
        {
            cout<<a[i]<<" ";
        }
    }
    return 0;
}


//Day-9 Topic: Arrays,
//problem link: https://www.codechef.com/CSNS21C/problems/DRUNKALK
//Drunk alcoholic
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int k,c1 =0,c2 =0;
        cin>>k;
        int steps;
        if (k % 2 ==0)
        {
            steps = k;
        }
        else
        {
            steps = k + 2;
        }
        cout<<steps<<endl;
    }
    return 0;
}

//Day-9 Topic: Arrays,
//problem link: https://www.codechef.com/CSNS21C/problems/CALPOWER
//cool name
#include<bits/stdc++.h>
using namespace std;
const int num = 31;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        string s;
        cin >> s;
        sort(s.begin(),s.end());
        int c[26];
        for(int i = 0; i < 26; i++){
            c[i] = i + 1;
        }
        int sum = 0;
        for (int i = 0; s[i] != '\0';i++){
        sum += c[int(s[i]) - 97] * (i + 1);
        }
        cout << sum << "\n";
    }
    return 0;
}

