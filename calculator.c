#include <stdio.h>
#include <math.h>
#include <string.h>

float SAforsphere(float radius)
  {
  float ans = radius * radius * 4 / 3 * M_PI;
  return ans;
  }
float SAforcylinder(float radius, float height, float ans, float area, float area2)
  {
  area = radius * radius * M_PI;
  area2 = height * 2 * M_PI * radius;
  float ans = area + area2;
  return ans;
  }
float Vforsphere(float radius)
  {
  float ans = 4 * M_PI * radius * radius * radius / 3;
  return ans;
  }
float Vforcylinder(float radius, float height)
  {
  float ans = height * M_PI * radius * radius;
  return ans;
  }

int main(int argc, char* argv[]) {
  int arg = 0;
  while (arg < argc) {
    printf("Bound %d is %s\n", arg, argv[arg]);
    arg++;
  }
  float radius, height;
  char answer[256];
  if (argc == 4) {
    sscanf(argv[1], "%f", &radius);
    sscanf(argv[2], "%f", &height);
  }
  printf("radius is %f, height is %f, shape is %s", radius, height, argv[3]);
}
