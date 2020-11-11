/*
Student Name: S M Ragib Shahriar Islam
Student Number: 22913711
Medical Imaging and Applications (MAIA)

***Problem-1: Write a program which allows to compute the Area and circumference of a circle.
Input: Radius of the circle.
Output: The Area, The Circumference.

***Problem-2: Write a function which allows to find the max and the min of a table.
This code has been done for the following table
 City            Population
 ------          ----------
 Marseille        -861635
 Lyon             -513275
 Lille            -232741
 Toulouse         -471941
 Paris            -2148271
 Nice             -341522
 Nantes           -303382
 Montpellier      -277639
 Bordeaux         -249712
 Strasbourg       -277270
 Output: This code finds the maximum number of population and the minimum number of population.

 ***Problem-3: Write a function which allows to compute the Fibonacci sequence.
 Input: The rank of the Fibonacci series.
 Output: The Fibonacci series of inputted rank.

 ***Problem-4: Write a function which allows to display in the terminal any multiplication table.
 Input: The number which multiplication table need to be generated.
 Output: The multiplication table of the inputted number.

 ***Problem-5: Write a function which allows to compute the truth table of the following operators : 1. and  2. or
 Output: This code generates the truth table for three inputs A, B, C.
 */

#include <iostream>

//Functions created to solve Problem-1
double area(double);
double circumference(double);

//Functions created to solve Problem-2
int maximum(int a[], int s);
int minimum(int a[], int s);

//Function created to solve Problem-3
int series_generator(int a);

//Function created to solve Problem-4
int show_mult_table(int);

//Function created to solve Problem-5
int truth_table_AND_OR(int a[], int s);

//The main function
int main()
{
    //Part-1: To solve problem-1
    std::cout<<"***Problem-1***"<<std::endl;
    double rad;
    double ar;
    double cir;
    std::cout << "Please Enter the radius of the circle = ";
    std::cin >> rad;
    ar = area(rad);
    cir = circumference(rad);
    std::cout << "The Area of the Circle is " << ar << std::endl;
    std::cout << "The Circumference of the Circle is " << cir << std::endl;


    //Part-2: To solve problem-2
    std::cout<<std::endl;
    std::cout<<"***Problem-2***"<<std::endl;
    int p[10]={861635, 513275, 232741, 471941, 2148271, 341522, 303382, 277639, 249712, 277270};
    int max_p = maximum(p,5);
    int min_p = minimum(p,5);
    std::cout<<"The maximum population is "<<max_p<<std::endl;
    std::cout<<"The minimum population is "<<min_p<<std::endl;


    //Part-3: To solve problem-3
    std::cout<<std::endl;
    std::cout<<"***Problem-3***"<<std::endl;
    int rnk;
    std::cout<<"This program computes the Fibonacci Series."<<std::endl;
    std::cout<<"Please enter the rank of the Fibonacci Series = "<<std::endl;
    std::cin>>rnk;
    std::cout<<"The Fibonacci series of rank-"<<rnk<<" is: ";
    series_generator(rnk);


    //Part-4: To solve problem-4
    std::cout<<std::endl;
    std::cout<<std::endl;
    std::cout<<"***Problem-4***"<<std::endl;
    int num;
    std::cout << "For Multiplication table, Please enter the number:";
    std::cin >> num;
    show_mult_table(num);


    //Part-5: To solve problem-5
    std::cout<<std::endl;
    std::cout<<"***Problem-5***"<<std::endl;
    int input[3];
    truth_table_AND_OR(input, 3);

    return 0;
}


//Functions created to solve Problem-1
double area(double a)
{
    double area = 3.1416 * a * a;
    return area;
}
double circumference(double b)
{
    double circumference = 2 * 3.1416 * b;
    return circumference;
}


//Functions created to solve Problem-2
int maximum(int a[], int s)
{
    int max_value = a[0];
    for(int i=0;i<10;i++)
    {
        if(a[i]>max_value)
            {
                max_value = a[i];
            }
        else
        {

        }

    }
    return max_value;
}

int minimum(int a[], int s)
{
    int min_value = a[0];
    for(int i =0;i<10;i++)
    {
        if (a[i]<min_value)
        {
            min_value = a[i];
        }
        else
        {

        }
    }
    return min_value;
}


//Function created to solve Problem-3
int series_generator(int a)
{
    int num_1 = 0;
    int num_2 = 1;
    int i = 0;
    int num_3 = 0;
    do
    {
        std::cout<<num_1<<" ";
        num_3 = num_1+num_2;
        num_1 = num_2;
        num_2 = num_3;
        i++;
    }while(i<a);

    return 0;
}

//Function created to solve Problem-4
int show_mult_table(int a)
{
    std::cout<<"The Multiplication table for "<<a<<" is "<<std::endl;
    for(int i=1;i<11;i++)
    {
        int result = a * i;
        std::cout<<a<<" * "<<i<<" = "<<result<<std::endl;
    }
    return 0;
}

//Function created to solve Problem-5
int truth_table_AND_OR(int a[], int s)
{
    std::cout<<"The Truth Table for AND gate using 3 inputs"<<std::endl;
    for(a[0]=0;a[0]<2;a[0]++)
    {
        for(a[1]=0;a[1]<2;a[1]++)
        {
            for(a[2]=0;a[2]<2;a[2]++)
            {
                int result_AND = a[0] * a[1] * a[2];
                std::cout<<"Input A = "<<a[0]<<"   Input B = "<<a[1]<<"   Input C = "<<a[2]<<"   Output = "<<result_AND<<std::endl;
            }
        }
    }
    std::cout<< std::endl;
    std::cout<<"The Truth Table for OR gate using 3 inputs"<<std::endl;
    for(a[0]=0;a[0]<2;a[0]++)
    {
        for(a[1]=0;a[1]<2;a[1]++)
        {
            for(a[2]=0;a[2]<2;a[2]++)
            {
                int result_OR;
                int result = a[0] + a[1] + a[2];
                if(result==0)
                {
                    result_OR = 0;
                }
                else
                {
                    result_OR = 1;
                }
                std::cout<<"Input A = "<<a[0]<<"   Input B = "<<a[1]<<"   Input C = "<<a[2]<<"   Output = "<<result_OR<<std::endl;
            }
        }
    }
    return 0;
}
