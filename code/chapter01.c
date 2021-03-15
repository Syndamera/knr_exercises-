void Exercise1_3()
{
    printf("Exercise 1-3: Modify the temperature conversion program to print a heading above the table.\n");
    
    float fahr, celsius;
    int lower, upper, step;
    lower = 0;
    upper = 300;
    step = 20;
    
    printf("Cels  fahr\n");
    printf("==========\n");
    
    fahr = lower;
    while(fahr <= upper)
    {
        celsius = (5.0f/9.0f) * (fahr - 32.0f);
        printf("%3.0f %6.1f\n", fahr, celsius);
        fahr = fahr + step;
    }
}

void Exercise1_4()
{
    
}