#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stack>
#include<queue>
#include<algorithm>
using namespace std;
	 
	char sam [100 + 5] [100 + 5];
	int row;
	int col;
	int cnt;
	int dr [] = {-1, 0, 1, 0, -1, 1, 1, -1};
	int dc [] = {0, 1, 0, -1, 1, 1, -1, -1};
	bool sts [100 + 5] [100 + 5];
	 
	void dfs (int r, int c)
	{
	    if ( r == row || r < 0 || c == col || c < 0 || sam [r] [c] == 'L' || sts [r] [c] ) return;
	    sts [r] [c] = true;
	    cnt++;
	 
	    for ( int i = 0; i < 8; i++ )
	        dfs (r + dr [i], c + dc [i]);
	}
	 
	int main(int argc, char** argv) {
	
    int t;
	    scanf ("%d", &t);
	    getchar (); getchar ();
	    bool blank = false;
	 
	    while ( t-- ) {
	        char ch [1000];
	        row = col = 0;
	 
	        if ( blank ) printf ("\n"); blank = true;
	 
	        while ( gets (ch) && strlen (ch) > 0 ) {
	            if ( ch [0] == 'L' || ch [0] == 'W' ) {
	                strcpy (sam [row], ch);
	                col = strlen (ch);
	                row++;
	            }
	            else {
	                int r, c;
	                sscanf(ch, "%d %d", &r, &c);
	                cnt = 0;
	                memset(sts,0,sizeof(sts));
	                dfs (r - 1, c - 1);
	                printf ("%d\n", cnt);
	            }
	        }
	    }
	 
	    return 0;
	}