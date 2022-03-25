/**
Program 3.4
Date : Tuesday, July 07, 2020
*/

#include<bits/stdc++.h>

using namespace std;

int main()
{
    FILE *fp_in,*fp_out;
    char input_file[] = "in.txt";
    char output_file[] = "out.txt";
/**
    Can write like this
    char *input_file = "in.txt";
    char *output_file = "out.txt";
*/
    int num1, num2, sum;
    num1 = num2 = sum = 0;

    fp_in = fopen(input_file, "r");             //read the numbers from the input_file
    fp_out = fopen(output_file, "w");           //write the sum in output_file

    /** Taking input */
    fscanf(fp_in,"%d",&num1);
    fscanf(fp_in,"%d",&num2);

    sum = num1 + num2;

    printf("%d + %d = %d\n",num1,num2,sum);     //will show output in codeblocks

    fprintf(fp_out,"%d\n", sum);                //print the output in out.txt file

    fclose(fp_in);
    fclose(fp_out);

    return 0;
}

