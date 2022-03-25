/**
Work after program 3.4 and 3.5
*/


#include<bits/stdc++.h>

using namespace std;

int main()
{
    FILE *fp_in,*fp_out;
    char *input_file = "Math_in.txt";
    char *output_file = "Math_out.txt";

    int num1,num2,num3,num4,num5,num6,num7,num8,num9,num10,sum;
    int numx1[20],numx2[20],i;
    sum = 0;

    fp_in = fopen(input_file,"r");
    fp_out = fopen(output_file,"w");

    for(i=0; i<10; i++)
    {
        fscanf(fp_in,"%d",&numx1[i]);
//        fprintf(fp_out,"%d \n",numx1[i]);
    }

//    for(i=0; i<=10; i=i+2)
//    {
//        sum = sum + numx1[i];
////        fprintf(fp_out,"%d \n",sum);
//    }

    for(i=1; i<10; i=i+2)
    {
        cout<<numx1[i]<<endl;
        sum = sum + numx1[i];
    }


//    sum = num2 + num4 + num6 +num8 +num10;
    printf("%d \n",sum);

    fprintf(fp_out,"%d \n",sum);

    fclose(fp_in);
    fclose(fp_out);

    return 0;

}
