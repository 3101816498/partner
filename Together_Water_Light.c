<?rmy
//流水灯设计
#include<REGX52.H>
 
void Delay(unsigned int number)	//@12.000MHz
{
	unsigned char data i, j;
 
	while (number--)
	{
			i = 2;
		j = 239;
		do
		{
			while (--j);
		} while (--i);
	}
}
 
void main()
{
	while (1)
	{
		P2_0=0;
		Delay(500);
		P2_0=1;
		Delay(500);
	}
	
	
}
