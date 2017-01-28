#include<iostream>
using namespace std;
int main()
{
	int m,n,r,i,j,**A,a=0,b=0,p,c,rot_val;	
	cout<<"\n Enter the number of Rows : ";
	cin>>m;
	cout<<"\n Enter the number of Columns : ";
	cin>>n;
	cout<<"\n How many times do you want to rotate: ";
	cin>>r;
	if((m>=2&&m<=300)&&(n>=2&&n<=300))
	{
		if(r>1&&r<109)
		{
			cout<<"\n Memory Allocation:\n";
			A=new int *[m];
			for(i=0;i<m;i++)
			{
				A[i]=new int[n];
			}
			cout<<"\n Enter the Matrix :\n";
			for(i=0;i<m;i++)
			{
				for(j=0;j<n;j++)
				{
					cin>>A[i][j];
				}
			}
			cout<<"\n The matrix is: \n";
			for(i=0;i<m;i++)
			{
				for(j=0;j<n;j++)
				{
					cout<<A[i][j]<<" ";
				}
				cout<<endl;
			}
			while(a<m&&b<n)
			{
				rot_val=r%(2*((m-a)+(n-b)));
				for(i=1;i<=rot_val;i++)
				{
					if(a+1==m||b+1==m)
						break;
					p=A[a+1][b];
					for(j=b;j<n;j++)
					{
						c=A[a][i];
						A[a][j]=p;
						p=c;
					}
					a++;
					for(j=b+1;j<=n;j++)
					{
						c=A[m][j];
						A[m][j]=p;
                		p=c;
					}
					b++;
					if(a<m)
        			{
            			for(j=m-1;j>=a;j--)
            			{
                			c=A[j][n];
                			A[j][n]=p;
                			p=c;
            			}
        			}
        			n--;
        			if(b< n)
        			{
            			for(j=n-1;j>=b;j--)
            			{
                			c=A[a-1][j];
                			A[a-1][j]=p;
                			p=c;
            			}
        			}
        			m--;
					A[a][b]=p;        
				}
				cout<<endl;				
				for(i=0;i<m;i++)
				{
					for(j=0;j<n;j++)
					{
						cout<<A[i][j]<<" ";
					}
					cout<<endl;
				}
			}
			delete []A;
		}
	}
	return 0;
}
