#include <string>
#include <iostream>
#include<bits/stdc++.h>
using namespace std;

string reverse(string in)
{
	reverse(in.begin(),in.end());
	return in;
}

int counter(string within, char find, int size)
{

	int x=0;
	if (size < 0)
			{
				return 0;
			}

	else
	{
          if (find== within[size-1])
		  x=1;
		  return ( x + counter(within, find, size-1));

	}
}

int count(string within, char find)
{
    /*int x= 0;
    for (int i= 0; i<within.length() ;i++)
    if ( within[i]== find)
    {
    	x=x+1;
    }

	return x;*/
   return (counter (within, find, within.length()));
}

string rapperAlpha(string within, int size)
{
	if (size <= 0)
	{
		return "";
	}
	else
	{
		if (within[size-1] < 'A' || within[size-1] > 'Z' && within[size-1] < 'a' || within[size-1] > 'z')
			        {
		                within.erase(size, 1);
			           //size= size-1;
			   		return (rapperAlpha(within, size-1));

			        }
		else
		{
		return (rapperAlpha(within, size-1) + within[size-1]);
		}
	}
}

string onlyAlpha(string within)
{
	/*for (int i = 0; i < within.size(); i++) {

	        if (within[i] < 'A' || within[i] > 'Z' && within[i] < 'a' || within[i] > 'z')
	        {
                within.erase(i, 1);
	            i--;
	        }
	    }
	return within;*/

	return (rapperAlpha(within, within.length()));
}

int count(string within, string find)
{
	int count=0;
	int j =0 ;
	for (int i = 0; i < within.length(); i++)
	{
	   if (within[i] == find[j] )
			{
				j= j+1;
			}
	   else
	   {
		   j=0;
	   }
	    if (j== find.length())
	    {
	    	count= count+1;
	    }
	}
	return count;
}

string rappermarkD(string within, int size)
{
	if (size <= 0)
	{
		return within;
	}
	if (within[size-1]== within[size])
	    	{
	    		within.insert(size,"2");
	        }
	return (rappermarkD(within, size-1));
}

string markDoubles(string within)
{

   return (rappermarkD (within, within.length()));

}

bool isPalindrome(string within)
{
    if( equal(within.begin(), within.begin() + within.size()/2, within.rbegin()) )
    {
    	return true;
    }
    else
    {
     return false;
    }
}

string rapperSwapCase(string within, int size)
{
	if (size < 0)
	{
		return within;
	}
	if (isupper(within[size]))
		        {
		            within[size] = tolower(within[size]);
		        }
		        else if (islower(within[size]))
		        {
		            within[size] = toupper(within[size]);
		        }
    return (rapperSwapCase (within, size-1));

}

string swapCase(string within)
{
	return (rapperSwapCase(within, within.length()));
}

int countNs(string within)
{
	return count(within,'n');
}


