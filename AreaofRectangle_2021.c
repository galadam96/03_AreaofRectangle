/*
Author: Ádám Gál
Date: 2021.07.11
Purpose: Displays the perimeter and the area of a rectangle
*/

#include <stdio.h>


int main()
{

    double width = 11.2 ;
    double height = 12.34567;
    double perimiter = 0; // declared and initialized
    double area; // declared
    //kiír
    printf("Ez egy teglalap kerulet es terulet szamito program. \n");
    printf ("Szelesseg: %f, hossz: %f \n", width, height);

    area =  width * height;
    perimiter = 2*(width + height);

    printf ("A teglalap terulete: %f\n", area);
    printf ("A teglalap kerulete: %f", perimiter);

	return 0;
}
