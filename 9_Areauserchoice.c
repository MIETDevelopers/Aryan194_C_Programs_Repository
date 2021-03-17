#include<stdio.h>
 int main(){
    float radiusofcircle,sideofsquare,lengthofrectangle,widthofrectangle;
    
  scanf("%f %f %f %f", &radiusofcircle, &sideofsquare, &lengthofrectangle ,&widthofrectangle);

    printf("Area of circle: %f",((22*radiusofcircle*radiusofcircle)/7));
    printf("\nPerimeter of circle: %f",((2*22*radiusofcircle)/7));
    printf("\nArea of square: %f",(sideofsquare*sideofsquare));
    printf("\nPerimeter of square: %f",(4*sideofsquare));
    printf("\nArea of Rectangle: %f",(lengthofrectangle*widthofrectangle));
    printf("\nArea of circle: %f",(2*(lengthofrectangle+widthofrectangle)));
    return 0;
 }