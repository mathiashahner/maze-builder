#include <modInclude.h>
#include <TCommonRoutines.h>
#include <TTemperature.h>

float CelciusToKelvin( float temperature )
{
float result;

   result = temperature + 273.15;

   return result;
}
