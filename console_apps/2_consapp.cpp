#include<iostream>
using namespace std ;


void swap ( int& a , int& b )
{
int temp = a ;
a = b ;
b = temp ;
}

// sort array using other array

int main ()
{

int arr[5] = { 5 , 2 , 1 , 0 , 6 } ;
int x = 0 ;

for ( int i = 0 ; i < 5 ; i ++ )
{
for ( int x = i ; x < 5 ; x ++ )  // 
{
if ( arr[i] > arr[x] )  // nested loop one condition
swap ( arr[i] , arr[x] ) ;
}
}

for ( int k = 0 ; k < 5 ; k ++ )
cout << arr[k] << endl ;

return 0;
}