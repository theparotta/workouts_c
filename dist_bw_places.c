/*
 * Input: 
 *    place_1 is (latitude, longitude)
 *    place_2 is (latitude, longitude)
 * 
 * Output:
 *    Distance b/w places in kilometers
 * 
 * Formula:
 *    Using haversine formula
 *    d = 2r . arcsin( (sin^2(lat2 - lat1 / 2) + cos lat1 . cos lat2 . sin^2(lon2-lon1 / 2) )^1/2 )
 * 
 *    r - radius of earth (6371 km)
 */
 
#include <stdio.h>
#include <math.h>
 
void to_radians(double point[]) {
  /* Convert Degree measure to Radian */
  double conversion_factor = M_PI / 180;
  
  point[0] *= conversion_factor;
  point[1] *= conversion_factor;
}
 

int main() {
  /* index_0 - latitude, index_1 - longitude */
  double p1[2], p2[2]; 
  
  puts("Enter latitude & longitude in degree for point-1: ");
  scanf("%lf %lf", p1, p1+1);
  
  puts("Enter latitude & longitude in degree for point-2: ");
  scanf("%lf %lf", p2, p2+1);
  
  // converting the degree measure to radians
  to_radians(p1);
  to_radians(p2);
  puts("Converted degree to radians");
  printf("Point-1: (%lf, %lf), Point-2: (%lf, %lf)\n", p1[0], p1[1], p2[0], p2[1]);
  
  double lat_diff = p2[0] - p1[0];
  double lon_diff = p2[1] - p1[1]; 
  
  double dist = pow(sin(lat_diff / 2), 2) + cos(p1[0]) * cos(p2[0]) * pow(sin(lon_diff / 2), 2);
  
  dist = 2 * 6371 * asin( sqrt(dist) );
  
  printf("Distance b/w two points: %lf Kilometers\n", dist);
  return 0;   
}
 
