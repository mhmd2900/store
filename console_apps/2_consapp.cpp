#include<iostream>
using namespace std ;


void fun ( int& a , int& b )
{
int temp = a ;
a = b ;
b = temp ;
}


int main ()
{

int arr[5] = { 5 , 2 , 1 , 0 , 6 } ;
int x = 0 ;

for ( int i = 0 ; i < 5 ; i ++ )
{
for ( int x = i ; x < 5 ; x ++ )
{
if ( arr[i] > arr[x] )
fun ( arr[i] , arr[x] ) ;
}
}

for ( int k = 0 ; k < 5 ; k ++ )
cout << arr[k] << endl ;

return 0;
}