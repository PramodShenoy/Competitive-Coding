// C++ program to count walks from u to v with exactly k edges
#include <iostream>
using namespace std;

// Number of vertices in the graph
#define V 4
#define ull unsigned long long

// A Dynamic programming based function to count walks from u
// to v with k edges
ull countwalks(ull graph[][V], ull u, ull v, ull k)
{
	// Table to be filled up using DP. The value count[i][j][e] will
	// store count of possible walks from i to j with exactly k edges
	ull count[V][V][k+1];

	// Loop for number of edges from 0 to k
	for (ull e = 0; e <= k; e++)
	{
		for (ull i = 0; i < V; i++) // for source
		{
			for (ull j = 0; j < V; j++) // for destination
			{
				// initialize value
				count[i][j][e] = 0;

				// from base cases
				if (e == 0 && i == j)
					count[i][j][e] = 1;
				if (e == 1 && graph[i][j])
					count[i][j][e] = 1;

				// go to adjacent only when number of edges is more than 1
				if (e > 1)
				{
					for (ull a = 0; a < V; a++) // adjacent of source i
						if (graph[i][a])
							count[i][j][e] += count[a][j][e-1];
				}
		}
		}
	}
	return count[u][v][k];
}

// driver program to test above function
int main()
{
	/* Let us create the graph shown in above diagram*/
	ull graph[V][V] = { {0, 1, 1, 1},
						{1, 0, 1, 1},
						{1, 1, 0, 1},
						{1, 1, 1, 0}
					};
	ull u = 0, v = 0, k ;
	cin>>k;
	cout << countwalks(graph, u, v, k);
	return 0;
}
