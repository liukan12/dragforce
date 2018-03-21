#include "Re_number.h"


/*calculate for Re number based on pure FLUID*/
real RE_FLUID(real fluid_vis,real fluid_vel, real fluid_den，real  characteristic_length)
{
  return (fluid_vel*fluid_den*characteristic_length/fluid_vis);
}

/*calculate for Re number based on particle flow*/
real REN_PFLUID(real fluid_vis, real fluid_vel, real par_vel, real par_diam)
{
  return (fabs(fluid_vel-par_vel)*fluid_den*par_diam/fluid_vis);
}
