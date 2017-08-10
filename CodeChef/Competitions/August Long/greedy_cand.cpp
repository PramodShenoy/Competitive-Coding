#include <iostream>
#include <string.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int t;
	cin>>t;
	for(int test=0;test<t;test++)
	{
		int i,j;
		long n,m;
		cin>>n>>m;
		long long min_sal[n];
		for(i=0;i<n;i++)
			cin>>min_sal[i];
		long long off_sal_job_off[m][2];
		long long jobs[m];
		for(i=0;i<m;i++)
		{
			for(j=0;j<2;j++)
				cin>>off_sal_job_off[i][j];
			jobs[i] = off_sal_job_off[i][1];
		}

		char qual2[n][m];
		int qual[n][m];
		for(i=0;i<n;i++)
			{
				cin>>qual2[i];
				for(j=0;j<m;j++)
				{
					qual[i][j] = qual2[i][j]-'0';
				}
			}
		long long cand_no=0;
		long long amt=0;
		long long zero_comp=0;

		for(i=0;i<n;i++)
		{
			long long max = 0;
			int pos=-1;
			for(j=0;j<m;j++)
			{
				if(qual[i][j]==1 && (off_sal_job_off[j][0]>min_sal[i]) && (off_sal_job_off[j][1]!=0))
				{
					if(off_sal_job_off[j][0]>max)
						{
							max = off_sal_job_off[j][0];
							pos = j;
						}
				}
			}
			if(pos!=-1)
			{
				cand_no++;
				amt+=off_sal_job_off[pos][0];
				off_sal_job_off[pos][1]--;
			}
		}
		for(i=0;i<m;i++)
			if(jobs[i]-off_sal_job_off[i][1]==0)
				zero_comp++;

		cout<<cand_no<<" "<<amt<<" "<<zero_comp<<endl;


	}
	return 0;
}