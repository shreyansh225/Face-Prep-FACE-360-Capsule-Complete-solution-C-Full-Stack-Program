#include<iostream>
using namespace std;
int main()
{
 int n, m, res;
 cin >> n >> m;
 if(n < m)
	res = n;
 else
	res = m;
if(res % 2 == 0)
	std::cout <<"Mani Iyer";
else
	std::cout <<"Arun Gupta";
return 0;
}
/*
Print a single line containing "Arun Gupta" or "Mani Iyer" (without the quotes), depending on the winner of the game.

Sample Input 1:

2 2

Sample Output 1:

Mani Iyer

Sample Input 2:

2 3

Sample Output 2:

Mani Iyer

Sample Input 3:

3 3

Sample Output 3:

Arun Gupta

Explanation of the first sample:

The grid has four intersection points, numbered from 1 to 4  

If Arun Gupta chooses intersection point 1, then he will remove two sticks (1 – 2 and 1 – 3).  

Now there is only one remaining intersection point (i.e. 4). Mani Iyer must choose it and remove both remaining sticks. After his move, the grid will be empty.

In the empty grid, Arun Gupta cannot make any move, hence he will lose.

Since all 4 intersection points of the grid are equivalent, Arun Gupta will lose no matter which one he picks.*/
