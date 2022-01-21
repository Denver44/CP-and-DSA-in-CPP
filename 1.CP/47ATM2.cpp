#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n; // no of people
        cin >> n;
        long int k; // total money
        cin >> k;
        long int w; // withdraw amount

        for (int i = 0; i < n; i++)
        {
            cin >> w;
            if (w <= k)
            {
                k = k - w;
                cout << "1";
            }
            else
            {
                cout << "0";
            }
        }
        cout << endl;
    }

    return 0;
}
// #include <stdio.h>

// int main(void) {
// 	int t,n,k,m;
// 	scanf("%d",&t);
// 	while(t--)
// 	{
// 	    scanf("%d%d",&n,&k);
// 	    while(n--)
// 	    {
// 	        scanf("%d",&m);
// 	        if(m<=k)
// 	        {
// 	            k=k-m;
// 	            printf("1");
// 	        }
// 	        else
// 	        printf("0");
// 	    }
// 	    printf("\n");
// 	}
// 	return 0;
// }