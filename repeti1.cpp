#include<iostream>
using namespace std;
int main()
{
    int old[20] = {0};
    int new1[20] = {0};

    int i = 0 , j = 0 , count= 0 , x = 0 , n = 10;

    for(i = 0 ; i< n ; ++i)
    {
        cout<< i+1<<" = ";
        cin>>old[i] ;
    }

    for(i = 0 ; i< n ; ++i)
     {
        count = 1;
        for(j = 0; j <= i ;++j)
        {
            if(old[i] == new1[j])
            {
                count++;
                break;
            }


        }

        if(count == 1)
        {
           new1[x++] = old[i] ;
        }
    }


    for(i = 0 ; i <x; ++i)
    {
        cout<<new1[i]<<" ";
    }

    return( 0 );
}
