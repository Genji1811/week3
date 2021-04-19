#include <stdio.h>
#include <math.h>

int main()
{
		int t,ot;
		printf( "Enter the hour worked: " );
		scanf( "%d", &t );
		ot=t-40;
		if(ot>0){
		printf( "Total wages:%d ",t*25000+ot*40000 );
		}
		else{
		printf( "Total wages:%d ",t*25000 );
		};		
		return 0;
}
