#include "Re_number.h"

/*Theory derive from the paper "MP-PIC simulation of CFB riser with EMMS-based drag model" */
/*Egrun and wen yu*/
real COF_B_P(real g_den, real g_void, real g_vel, real g_vis, real s_void, real p_vel,real p_diam,real p_drag_cof)
{
	if (g_void<0.8)
	{
		return (150 * g_vis*s_void / (g_void*p_diam*p_diam) + 1.75*g_den*fabs(g_vel - p_vel) / p_diam);
	}
	else
	{
		return (0.75*g_den*g_void*fabs(g_vel - p_vel) / p_diam*pow(g_void, -2.7)*p_drag_cof);
	}
}

real P_DRAG_COFF(real REP_NUMBER)
{
  if (REP_NUMBER<1000.0)
	{
		return (24 * (1 + 0.15*pow(REN_NUMBER, 0.687)) / REN_NUMBER);
	}
	else if (REP_NUMBER>=1000.0)
	{
		return (0.44);
	}
}
