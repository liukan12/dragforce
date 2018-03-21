#include "Re_number.h"

real P_PG_ACC(real g_PG, real p_PG, real p_den, real p_void)
{
  return (-(g_PG/p_den+p_PG/(p_void*p_den)));
}


/*p_PG_star and Alfa are modelparameters, p_void_max is s the solid volume fraction at close pack.*/
real P_PRESSURE(real Alfa, real p_PG_star, real p_void_max, real p_void)
{
  return (p_PG_star*pow(p_void,Alfa)/(p_void_max-p_void));
}
