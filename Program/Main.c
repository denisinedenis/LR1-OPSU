
#include <bur/plctypes.h>

#ifdef _DEFAULT_INCLUDES
	#include <AsDefault.h>
#endif

void _INIT ProgramInit(void)
{
	iter=0;
}

void _CYCLIC ProgramCyclic(void)
{
	iter++;
	if (iter%2==0)
	{
		LEDout2=!LEDout2;
	}
	if (iter%3==0)
	{
		LEDout3=!LEDout3;
	}
	if (iter%4==0)
	{	
		LEDout4=!LEDout4;
	}
	if (iter%5==0)
	{	
		LEDout5=!LEDout5;
	}
}

void _EXIT ProgramExit(void)
{

}

