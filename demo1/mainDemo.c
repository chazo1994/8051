#include <REGX52.H>
sbit port1 = P0^0 ;
sbit port2 = P0^1 ;
sbit port3 = P0^2 ;
sbit port4 = P0^3 ;
sbit port5 = P0^4 ;
sbit port6 = P0^5 ;
sbit port7 = P0^6 ;
sbit port8 = P0^7 ;
void delay_ms(int count)
{
	int i,j;
	for(i=0;i<count;i++)
	{
		for(j=0;j<123;j++); // delay 1 ms
	}
}
void main()
{
	int i = 0;
	port1 = 0;
	port2 = 0;
	port3 = 0;
	port4 = 0;
	port5 = 0;
	port6 = 0;
	port7 = 0;
	port8 = 0;

	while(1)
	{	  switch(i)
			{
				case 0:
					port1 = !port1;
					break;
				case 1:
					port2 = !port2;
					break;
				case 2:
					port3= !port3;
					break;
				case 3:
					port4 = !port4;
					break;
				case 4:
					port5 = !port5;
					break;
				case 5:
					port6 = !port6;
					break;
				case 6:
					port7 = !port7;
					break;
				case 7:
					port8 = !port8;
					break;
			}
		delay_ms(500);
		i++;
		if(i==8)
			i = 0;
	}
}