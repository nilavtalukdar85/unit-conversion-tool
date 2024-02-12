#include <stdio.h>
double inches_feet(double n)
{
    return 0.083 * n;
}
double feet_inches(double n)
{
    return 12 * n;
}
double cm_inch(double n)
{
    return 0.394 * n;
}
double inch_cm(double n)
{
    return 2.54 * n;
}
double pound_kg(double n)
{
    return 0.45359 * n;
}
double kg_pound(double n)
{
    return 2.20 * n;
}
double km_miles(double n)
{
    return 0.621 * n;
}
double miles_km(double n)
{
    return 1.609 * n;
}
double inches_meter(double n)
{
    return 0.0254 * n;
}
double meter_inches(double n)
{
    return 39.38 * n;
}

int main()

{

    printf("a) Inches and foot.\n");
    printf("b) Centimeters and inches.\n");
    printf("c) Pound and kgs.\n");
    printf("d) Kilometers and miles.\n");
    printf("e) Inches and meters.\n");
    char x;
    printf("Choose the type of conversion you want.");
    scanf("%c", &x);

    switch (x)
    {
    case 'a':
        printf("Inches and foot.\n");
        printf("Enter your desired type of conversion.\n");
        printf("1)Inches to foot.\n");
        printf("2)Foot to inches.\n");
        int n;
        printf("Choose 1 or 2.\n");
        scanf("%d", &n);
        switch (n)
        {
        case 1:
            printf("Inches to foot.\n");
            double num_1;
            printf("Enter the number.");
            scanf("%lf", &num_1);
            double q = inches_feet(num_1);
            printf("%lf Inch = %lf Foot.\n", num_1, q);
            break;
        case 2:
            printf("Foot to inches.\n");
            double num_2;
            printf("Enter the number.");
            scanf("%lf", &num_2);
            double w = feet_inches(num_2);
            printf("%lf Foot = %lf Inches.\n", num_2, w);
            break;
        default:
            printf("error.");
            break;
        }
        break;
    case 'b':
        printf("Centimeters and inches.\n");
        printf("Choose your desired type of conversion.\n");
        printf("1)Centimeters to inches.\n");
        printf("2)Inches to centimeters.\n");
        int m;
        printf("Choose 1 or 2.");
        scanf("%d", &m);
        switch (m)
        {
        case 1:
            printf("Centimeters to inches.\n");
            double num_1;
            printf("Enter the number.");
            scanf("%lf", &num_1);
            double e = cm_inch(num_1);
            printf("%lf Cm = %lf Inch.\n", num_1, e);
            break;

        case 2:
            printf("Inches to centimeters.\n");
            double num_2;
            printf("Enter the number.");
            scanf("%lf", &num_2);
            double r = inch_cm(num_2);
            printf("%lf Inch = %lf Cm.\n", num_2, r);
            break;
        }

        break;
    case 'c':
        printf("Pound and kgs.\n");
        printf("Choose your desired type of conversion.\n");
        printf("1)Pound to kg.\n");
        printf("2)Kg to pound.\n");
        int g;
        printf("Choose 1 or 2.");
        scanf("%d", &g);

        switch (g)
        {
        case 1:
            printf("Pound to kg.\n");
            double num_1;
            printf("Enter number.");
            scanf("%lf", &num_1);
            double t = pound_kg(num_1);
            printf("%lf Pound = %lf Kg.\n", num_1, t);
            break;

        case 2:
            printf("Kg to pound.\n");
            double num_2;
            printf("Enter number.");
            scanf("%lf", &num_2);
            double y = kg_pound(num_2);
            printf("%lf Kg = %lf Pound.\n", num_2, y);

            break;
        }
        break;
    case 'd':
        printf("Kilometers and miles.\n");
        printf("Choose your desired type of conversion.\n");
        printf("1)Kilometers to miles.\n");
        printf("2)Miles to kilometers.\n");
        int d;
        printf("Choose 1 or 2.");
        scanf("%d", &d);
        switch (d)
        {
        case 1:
            printf("Kilometers to miles.\n");
            double num_1;
            printf("Enter number.");
            scanf("%lf", &num_1);
            double Q = km_miles(num_1);
            printf("%lf Kms = %lf Miles.\n", num_1, Q);
            break;

        case 2:
            printf("Miles to kilometers.\n");
            double num_2;
            printf("Enter number.");
            scanf("%lf", &num_2);
            double W = miles_km(num_2);
            printf("%lf Miles = %lf Kms\n", num_2, W);
            break;

        default:
            printf("error");
            break;
        }
        break;
    case 'e':
        printf("Inches and meters.\n");
        printf("Choose your desired type of conversion.\n");
        printf("1)Inches to meters.\n");
        printf("2)Meters to inches.\n");
        int s;
        printf("Choose 1 or 2.");
        scanf("%d", &s);
        switch (s)
        {
        case 1:
            printf("Inches to meters.\n");
            double num_1;
            printf("Enter the number.\n");
            scanf("%lf", &num_1);
            double E = inches_meter(num_1);
            printf("%lf Inch = %lf Meter.\n", num_1, E);

            break;

        case 2:
            printf("Meters to inches.\n");
            double num_2;
            printf("Enter the number");
            scanf("%lf", &num_2);
            double R = meter_inches(num_2);
            printf("%lf Meter = %lf Inches.\n", num_2, R);

            break;

        default:
            printf("error");
            break;
        }
        break;

    default:
        printf("error.");
    }

    return 0;
}