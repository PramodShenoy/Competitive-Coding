 #include <bits/stdc++.h>
#define ll long long
    using namespace std;
// Function to check if all subsets are filled or not
bool checkSum(ll sumLeft[], ll k)
{
	ll r = true;
	for (ll i = 0; i < k; i++)
	{
		if (sumLeft[i] != 0)
			r = false;
	}

	return r;
}

// Helper function for solving k partition problem
// It return true if there exists k subsets with given sum
bool subsetSum(ll S[], ll n, ll sumLeft[], ll A[], ll k)
{
	// return true if subset is found
	if (checkSum(sumLeft, k))
		return true;

	// base case: no items left
	if (n < 0)
		return false;

	bool res = false;

	// consider current item S[n] and explore all possibilities
	// using backtracking
	for (ll i = 0; i < k; i++)
	{
		if (!res && (sumLeft[i] - S[n]) >= 0)
		{
			// mark current element subset
			A[n] = i + 1;

			// add current item to i'th subset
			sumLeft[i] = sumLeft[i] - S[n];
			
			// recurse for remaining items
			res = subsetSum(S, n - 1, sumLeft, A, k);
			
			// backtrack - remove current item from i'th subset
			sumLeft[i] = sumLeft[i] + S[n];
		}
	}

	// return true if we get solution
	return res;
}

// Function for solving k-partition problem. It prlls the subsets if
// set S[0..n-1] can be divided llo k subsets with equal sum
void partition(ll S[], ll n, ll k,ll skip)
{
	// base case
	if (n < k)
	{
		std::cout << "impossible\n";
		return;
	}

	// get sum of all elements in the set
	ll sum = std::accumulate(S, S + n, 0);
	sum-=skip
 	ll A[10000009];
 	ll sumLeft[2];
 
 	// create an array of size k for each subset and initialize it 
 	// by their expected sum i.e. sum/k
	for (ll i = 1; i <=k; i++)
		sumLeft[i] = sum/k;
	
	// return true if sum is divisible by k and the set S can
	// be divided llo k subsets with equal sum
	bool res = !(sum % k) && subsetSum(S, n - 1, sumLeft, A, k);

	if (!res)
	{
		std::cout <<"impossible\n";
		return;
	}

	// prll all k-partitions
	for (ll i = 0; i < k; i++)
	{
		//std::cout << "Partition " << i << " is: ";
	   	for (ll j = 1; j <=n; j++)
	 		{
	 			if (A[j] == i + 1)
	 				std::cout <<i;
	 			if(A[j]==skip)
	 				cout<<2;
	 		}
	 	std::cout << std::endl;
	}
}

// main function for k-partition problem
int main()
{
	ll t;
    	cin>>t;
    	while(t--)
    	{
    		ll skip,n,i;
    		cin>>skip>>n;
    		ll arr[1000009];
    		for(i=1;i<=n;i++)
    			{
    				arr[i]=i;
    			}
    		arr[skip]=-1;
			partition(arr, n+1, 2,skip);		
    	}


	return 0;
}