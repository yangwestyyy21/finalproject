#include <stdio.h>
#include <math.h>

float SAforsphere(float radius, float ans)
  {
  ans = radius * radius * 4 / 3 * M_PI;
  }
float SAforcylinder(float radius, float height, float ans, float area, float area2)
  {
  area = radius * radius * M_PI;
  area2 = height * 2 * M_PI * radius;
  ans = area + area2;
  }
float Vforsphere(float radius, float ans)
  {
  ans = 4 * M_PI * radius * radius * radius / 3;
  }
float Vforcylinder(float radius, float height, float ans)
  {
  ans = height * M_PI * radius * radius;
  }

int main()
  {
  float radius;
  float height;
  )
    
  }
