/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    // float base, base1, base2, height, side_length, radius;
    // float rec, squ, tri, par, tra, cir;
    
    // printf("Calculator\n");
    // printf("==========\n");

    // printf("Enter base : ");
    // scanf("%f", &base);
    // printf("Enter base1 : ");
    // scanf("%f", &base1);
    // printf("Enter base2 : ");
    // scanf("%f", &base2);
    // printf("Enter height : ");
    // scanf("%f", &height);
    // printf("Enter side length : ");
    // scanf("%f", &side_length);
    // printf("Enter radius : ");
    // scanf("%f", &radius);
    
    // rec = base*height;
    // squ = side_length*side_length;
    // tri = base*height/2;
    // par = base*height;
    // tra = base1+base2/2*height;
    // cir = 3.14*radius*radius;
    
    // printf("Area of a Rectangle     : %f\n", rec);
    // printf("Area of a Square        : %f\n", squ);
    // printf("Area of a Triangle      : %f\n", tri);
    // printf("Area of a Parallelogram : %f\n", par);
    // printf("Area of a Trapezoid     : %f\n", tra);
    // printf("Area of a Circle        : %f\n", cir);
    
    
    float height, weight, reg, ideal, status;
    int gender;
    
    printf("BMI\n");
    printf("===\n");
    
    printf("Enter your gender (0 for female, 1 for male) : ");
    scanf("%i", &gender);
    printf("Enter body height : ");
    scanf("%f", &height);
    printf("Enter body weight : ");
    scanf("%f", &weight);
    
    if(gender == 1) {
        reg = 2.3+(weight/30*2.5);
        ideal = 50.0 + reg;
        status = ideal/weight;
        
        printf("you are a male\n");
        printf("Your ideal weight : %.2f\n", ideal);
        printf("Your BMI : %.2f\n", status);
        
    }
    else if(gender == 0){
        reg = 2.3+(weight/30*2.5);
        ideal = 45.5 + reg;
        status = ideal/weight;
        
        printf("you are a female");
        printf("Your ideal weight : %.2f\n", ideal);
        printf("Your BMI : %.2f\n", status);
    }
    else {
        printf("Data invalid");
    }
    
    if (status == 1) {
        printf("you are ideal\n");
    }
    else if (status < 1 && status >= 0.5) {
        printf("you are overweight\n");
    }
    else if (status > 1 && status <= 2) {
        printf("you are obese\n");
    }
    else if (status > 2) {
        printf("you are underweight\n");
    }
    else if (status < 0.5) {
        printf("you are anorexic\n");
    }
    else {
    printf("Data invalid");
    }
    return 0;
}
