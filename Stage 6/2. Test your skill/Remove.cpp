#include<iostream>
#include<cstring>
using namespace std;
int main()
{
 char str[200];
 cin.getline(str,200);
 int i=0;
 while(str[i]!='\0')
	{
	if(str[i]=='t')
		{
		i++;
		if(str[i]=='h')
			{
			i++;
			if(str[i]=='e')
				{
				i++;
				if(str[i]==' ')
					i++;
				}
			}
		else
			{ --i;
			cout<<str[i];
			i++;
			cout<<str[i];
			i++;
			}
		}
	else
		{ 
    	cout<<str[i];
    	i++;
		}
	}
}
