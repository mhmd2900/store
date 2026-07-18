
#include<iostream>
using namespace std ;


int main ()
{

int arr [5] = { 5 , 2 , 1 , 2 , 6 } ;
int arr2 [5] = {0} ;

for ( int i = 0 ; i < 5 ; i ++ )
{
int rep = 0 ;

for ( int x = 0 ; x < 5 ; x ++ )
{
if ( arr[i] > arr[x] ) // bigger take bigger index
rep ++ ;

if ( arr[i] == arr[x] && i > x )
rep ++ ; // duplicate number move to next index
}
arr2[rep] = arr[i] ;

}

for ( int u = 0 ; u < 5 ; u++ )
cout << arr2[u] << endl ;

return 0;
}