/*Date: 2023.06.02
  Purpose: Display the perimiter and area of a rectangle*/

#include <stdio.h>

int main() {
	//declaring 4 variables 
	double width;
	double height ;
	double perimeter;
	double area;

	//asking for width and height
	printf("Please input the width and height of the rectangle separated by a space! \n");
	scanf_s("%lf %lf", &width, &height); //scanf_s miatt kell %lf
	// calculating the perimiter
	perimeter = (width + height) * 2;
	area = width * height;
	// displaying the results
	printf("Perimiter of the rectangle: %f     Area: %f", perimeter, area);
	return 0;
}
