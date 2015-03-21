//C04_a_Shortest_Path
//http://www.dailyfreecode.com/code/find-shortest-path-2861.aspx
#include <stdio.h>
#include <conio.h>

#define INF 9999

void main( )
{
    int arr[4][4] ;
    int cost[4][4] = {
                        7, 5, 0, 0,
                        7, 0, 0, 2,
                        0, 3, 0, 0,
                        4, 0, 1, 0
                    } ;
    int i, j, k, n = 4 ;

    clrscr( ) ;

    for ( i = 0 ; i < n ; i++ )
    {
        for ( j = 0; j < n ; j++ )
        {
            if ( cost[i][j] == 0 )
                arr[i][j] = INF ;
            else
                arr[i][j] = cost[i][j] ;
        }
    }

    printf ( "Adjacency matrix of cost of edges:\n" ) ;
    for ( i = 0 ; i < n ; i++ )
    {
        for ( j = 0; j < n ; j++ )
            printf ( "%d\t", arr[i][j] ) ;
        printf ( "\n" ) ;
    }

    for ( k = 0 ; k < n ; k++ )
    {
        for ( i = 0 ; i < n ; i++ )
        {
            for ( j = 0 ; j < n ; j++ )
            {
                if ( arr[i][j] > arr[i][k] + arr[k][j] )
                    arr[i][j] = arr[i][k] + arr[k][j];
            }
        }
    }

    printf ( "\nAdjacency matrix of lowest cost between the vertices:\n" ) ;
    for ( i = 0 ; i < n ; i++ )
    {
        for ( j = 0; j < n ; j++ )
            printf ( "%d\t", arr[i][j] ) ;
        printf ( "\n" ) ;
    }

    getch( ) ;
}