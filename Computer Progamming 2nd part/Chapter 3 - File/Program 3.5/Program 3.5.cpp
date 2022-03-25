
/**
Program 3.5
Computer Programming 2nd part
By Tamim Shahriar Subeen
Date : Tuesday, July 07, 2020
*/

#include<bits/stdc++.h>

using namespace std;



int main()
{
    FILE *fp_in,*fp_out;
    char *input_file = "in.txt";
    char *output_file = "out.txt";

    char line[80];

    int num1,num2,sum;
    num1 = num2 = sum = 0;

    fp_in = fopen(input_file,"r");              //read the numbers from the input_file
    fp_out = fopen(output_file,"w");            //write the sum in output_file

    fgets(line,80,fp_in);                       //for taking input in string line
    printf("Line : %s \n",line);

    sscanf(line,"%d %d",&num1,&num2);           //for taking input from string line

    sum = num1 + num2;

    printf("%d + %d = %d",num1,num2,sum);

    fprintf(fp_out,"%d\n",sum);

    fclose(fp_in);
    fclose(fp_out);

    return 0;
}
