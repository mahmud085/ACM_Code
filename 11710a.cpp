#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>
#include <string>
#include <cctype>
#include <stack>
#include <queue>
#include <list>
#include <vector>
#include <map>
#include <sstream>
#include <cmath>
#include <bitset>
#include <utility>
#include <set>	
#include <numeric>
	 
	#define INF_MAX 2147483647
	#define INF_MIN -2147483647
	#define pi acos(-1.0)
	#define N 1000000
	#define LL long long
	 
	#define For(i, a, b) for( int i = (a); i < (b); i++ )
	#define Fors(i, sz) for( size_t i = 0; i < sz.size (); i++ )
	#define Fore(it, x) for(typeof (x.begin()) it = x.begin(); it != x.end (); it++)
	#define Set(a, s) memset(a, s, sizeof (a))
	#define Read(r) freopen(r, "r", stdin)
	#define Write(w) freopen(w, "w", stdout)
	 
	using namespace std;
	 	struct lists {
	    int start;

	    int end;
	    int distance;
	} a [79800 + 10];       // total number of edges
	 
	int parent [400 + 10];
	int vertex;     // number of vertex
	int edges;      // number of edges
 
	void reset ()
{
	    For (i, 0, 410) parent [i] = i;
	}
	 
	bool cmp (lists p, lists q)
	{
	    if ( p.distance < q.distance ) return true;
	    return false;
	}
	 
	int parentOf (int n)
	{
	    if ( n == parent [n] ) return n;
	    return parent [n] = parentOf (parent [n]);
	}
	 
	int main ()
	{
	    while ( scanf ("%d %d", &vertex, &edges) ) {
	        if ( vertex == 0 && edges == 0 ) break;
	 
	        map < string, int > cityIndex;
	        reset();
	 
	        for ( int i = 0; i < vertex; i++ ) {
	            string s;
	            cin >> s;
	            cityIndex [s] = i + 1;
	       }
	 
	        int length_of_a = 0;
	 
        for ( int i = 0; i < edges; i++ ) {
	            string s, t;
	            int c;
	            cin >> s >> t >> c;
	            a [length_of_a].start = cityIndex [s];
	            a [length_of_a].end = cityIndex [t];
	            a [length_of_a].distance = c;
	            length_of_a++;
	        }
	 
        string source;
	        cin >> source;
 
	        sort (a, a + length_of_a, cmp);
 
        int outputCost = 0;
	        int selectedEdges = vertex - 1;
 
	        for ( int i = 0; i < length_of_a && selectedEdges; i++ ) {
            int p = parentOf (a [i].start);
            int q = parentOf (a [i].end);
			if(p!=q)
			{    
				parent [p] = q;
	                selectedEdges--;
	                outputCost += a [i].distance;
            }
	        }
	 
        if ( selectedEdges ) printf ("Impossible\n");
	        else printf ("%d\n", outputCost);
	    }
 
		}
	 