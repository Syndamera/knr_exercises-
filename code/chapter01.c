void Exercise1_3()
{
    printf("Exercise 1-3: Modify the temperature conversion program to print a heading above the table.\n");
    
    float fahr, celsius;
    int lower, upper, step;
    lower = 0;
    upper = 300;
    step = 20;
    
    printf("fahr  cels\n");
    printf("==========\n");
    
    fahr = lower;
    while(fahr <= upper)
    {
        celsius = (5.0f/9.0f) * (fahr - 32.0f);
        printf("%3.0f %6.1f\n", fahr, celsius);
        fahr = fahr + step;
    }
    printf("==========\n");
    printf("\n");
}

void Exercise1_4()
{
    printf("Exercise 1-4: Write a program to print the corresponding Celsius to Fahrenheit table.\n");
    
    float celsius = 0;
    float fahr = 0;
    int upper = 300;
    int step = 20;
    
    printf("cels  fahr\n");
    printf("==========\n");
    
    while(celsius <= upper)
    {
        fahr = celsius * 1.8f + 32.0f;
        printf("%3.0f %6.1f\n", celsius, fahr);
        celsius = celsius + step;
    }
    printf("==========\n");
    printf("\n");
}

void Exercise1_5()
{
    printf("Exercise 1-5: Modify the temperature conversion program to print the table in reverse order.\n");
    
    float celsius = 300;
    float fahr = 0;
    int upper = 0;
    int step = 20;
    
    printf("cels  fahr\n");
    printf("==========\n");
    
    while(celsius >= 0)
    {
        fahr = celsius * 1.8f + 32.0f;
        printf("%3.0f %6.1f\n", celsius, fahr);
        celsius = celsius - step;
    }
    printf("==========\n");
    printf("\n");
}