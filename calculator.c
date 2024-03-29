#include <stdio.h>
#include <math.h>
#include <string.h>

float SAforsphere(float radius)
  {
  float ans = radius * radius * 4 * M_PI;
  return ans;
  }
float SAforcylinder(float radius, float height)
  {
  float area = radius * radius * M_PI * 2;
  float area2 = height * 2 * M_PI * radius;
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
float SAforcone(float radius, float height)
  {
  float a = radius + sqrtf(height*height + radius*radius);
  float ans = M_PI * radius * a;
  }
float Vforcone(float radius, float height)
  {
  float ans = M_PI * radius * radius * height / 3;
  return ans;
  }
int main(int argc, char* argv[]) {
  int arg = 1;
  while (arg < argc) {
    printf("Bound %d is %s\n", arg, argv[arg]);
    arg++;
  }
  float radius, height;
  if (argc == 5) {
    sscanf(argv[1], "%f", &radius);
    sscanf(argv[2], "%f", &height);
  }
  else {
    printf("please input the correct amount of parameters\n");
  }

  printf("radius is %f, height is %f, shape is %s, finding %s\n", radius, height, argv[3], argv[4]);

    for (int i = 1; i < 2; i++)
  {
  if ((strcmp(argv[3], "sphere") == 0) && ((strcmp(argv[4], "volume") == 0) || (strcmp(argv[4], "V") == 0))) {
    float ans = Vforsphere(radius);
    printf("the volume of the sphere is %f \n", ans);
  }
  if ((strcmp(argv[3], "sphere") == 0) && ((strcmp(argv[4], "surfacearea") == 0) || (strcmp(argv[4], "SA") == 0))) {
    float ans = SAforsphere(radius);
    printf("the surface area of the sphere is %f \n", ans);
  }  
  if ((strcmp(argv[3], "cylinder") == 0) && ((strcmp(argv[4], "surfacearea") == 0) || (strcmp(argv[4], "SA") == 0))) {
    float ans = SAforcylinder(radius, height);
    printf("the surface area of the cylinder is %f \n", ans);
  } 
  if ((strcmp(argv[3], "cylinder") == 0) && ((strcmp(argv[4], "volume") == 0) || (strcmp(argv[4], "V") == 0))) {
    float ans = Vforcylinder(radius, height);
    printf("the volume of the cylinder is %f \n", ans);
  }
  if ((strcmp(argv[3], "cone") == 0) && ((strcmp(argv[4], "volume") == 0) || (strcmp(argv[4], "V") == 0))) {
    float ans = Vforcone(radius, height);
    printf("the volume of the cone is %f \n", ans);
  }
  if ((strcmp(argv[3], "cone") == 0) && ((strcmp(argv[4], "surfacearea") == 0) || (strcmp(argv[4], "SA") == 0))) {
    float ans = SAforcone(radius, height);
    printf("the surface area of the cone is %f \n", ans);
  }
  }
}
