
#include<bits/stdc++.h>
using namespace std;

/** program 3.1  */
/** fp is a file type pointer or known as file handle */


//int main()
//{
//    FILE *fp;
//    char filename[] = "my_file.txt";
//
//    fp = fopen(filename,"w");
//
//    fprintf(fp,"This is a file created by my program! \n");
//    fprintf(fp,"I am so happy");
//
//    fclose(fp);
//
//    return 0;
//}

/** program 3.2 */

int main()
{
    FILE *fp;

    char filename[] = "my_file.txt";

    fp = fopen(filename,"w");

    fprintf(fp, "This is a file created by my program! \n");
    fprintf(fp, "I am so happy. \n");

    fclose(fp);

//    fp = fopen(filename,"a");

    fprintf(fp,"Second line \n");

    return 0;
}




/** program 3.3 */
//
//int main()
//{
//    FILE *fp;
//
//    char filename[] = "my_file.txt";
//
//    fp = fopen(filename,"w");
//
//    fprintf(fp, "This is a file created by my program! \n");
//    fprintf(fp, "I am so happy. \n");
//
//    fclose(fp);
//
//    fp = fopen(filename,"a");
//
//    fprintf(fp,"Second line \n");
//
//    return 0;
//}







