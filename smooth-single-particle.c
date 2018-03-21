#include "Re_number.h"

/*smooth sphere particles in the normal flow. \
theory form the paper " An investigation of particle trajectories in two-phase flow systems"*/
real PARTICLE_DRAG_COFI(real REN_NUMBER)
{
	real drag_coff = 0.;
	if (REN_NUMBER<0.1)
	{
		drag_coff = 24.0 / REN_NUMBER;
	}
	else if (REN_NUMBER>0.1&& REN_NUMBER<1.0)
	{
		drag_coff = 22.73 / REN_NUMBER + 0.0903 / (REN_NUMBER*REN_NUMBER) + 3.69;
	}
	else if (REN_NUMBER>1.0&& REN_NUMBER < 10.0)
	{
		drag_coff = 29.1667 / REN_NUMBER - 3.8889 / (REN_NUMBER*REN_NUMBER) + 1.222;
	}
	else if (REN_NUMBER>10.0&& REN_NUMBER < 100.0)
	{
		drag_coff = 46.5 / REN_NUMBER - 116.67 / (REN_NUMBER*REN_NUMBER) + 0.6167;
	}
	else if (REN_NUMBER>100.0&& REN_NUMBER < 1000.0)
	{
		drag_coff = 98.33 / REN_NUMBER - 2778.0 / (REN_NUMBER*REN_NUMBER) + 0.3644;
	}
	else if (REN_NUMBER>1000.0&& REN_NUMBER <5000.0)
	{
		drag_coff = 148.62 / REN_NUMBER - 47500.0 / (REN_NUMBER*REN_NUMBER) + 0.357;
	}
	else if (REN_NUMBER>5000.0&& REN_NUMBER < 10000.0)
	{
		drag_coff = -490.546 / REN_NUMBER + 578700.0 / (REN_NUMBER*REN_NUMBER) + 0.46;
	}
	else if (REN_NUMBER>10000.0&& REN_NUMBER < 50000.0)
	{
		drag_coff = -1662.5 / REN_NUMBER + 5416700.0 / (REN_NUMBER*REN_NUMBER) + 0.5191;
	}

	return drag_coff;
}
