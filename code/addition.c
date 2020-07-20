

#include <stdio.h>
#include<stdlib.h>
#include<time.h>


int N;




int main()
{
    printf("Donner la taille de matrice \n");
    scanf("%i",&N);
    
/**allocation pour les matrices : floattas simple **/
  float *mat1 = malloc(sizeof(float)*N*N);
  float *mat2 = malloc(sizeof(float)*N*N);
  float *res = malloc(sizeof(float)*N*N);

  /**allocation pour les matrices : floattas double **/

   double *mat1d = malloc(sizeof(double)*N*N);
  double *mat2d = malloc(sizeof(double)*N*N);
  double *resd = malloc(sizeof(double)*N*N);

    matrixInput_f(mat1);

    matrixInput_f(mat2);

    matrixInput_d(mat1d);

    matrixInput_d(mat2d);

   for(int i=0;i<5;i++)
    {matrixAddIJ_f(mat1, mat2, res);
    printf("\n ");}
    printf("\n");
    for(int i=0;i<5;i++)
   {matrixAddJI_f(mat1, mat2, res);
    printf("\n");}

    printf("\n");
/******Double*************/

   for(int i=0;i<5;i++)
   matrixAddIJ_d(mat1d, mat2d, resd);

   printf("\n");
    for(int i=0;i<5;i++)
    matrixAddJI_d(mat1d, mat2d, resd);



    return 0;
}



void matrixInput_f(float mat[][N])
{


    int i, j;


    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N; j++)
        {


        mat[i][j] = (float)rand()/RAND_MAX;

        }

    }
}





void matrixAddIJ_f(float mat1[][N], float mat2[][N], float res[][N])
{
    clock_t debut = clock() ;
    int i, j;
    double temps;



    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N; j++)
        {
            // res[i][j] = mat1[i][j] + mat2[i][j]
            *(*(res + i) + j) = *(*(mat1 + i) + j) + *(*(mat2 + i) + j);
        }
    }

    clock_t fin = clock();

    temps = (double)(fin-debut) / (CLOCKS_PER_SEC);

    printf("%f",temps);

}

void matrixAddJI_f(float mat1[][N], float mat2[][N], float res[][N])
{
    clock_t debut = clock() ;
    int i, j;
    double temps;


    
    for (j = 0; j < N; j++)
    {
        for (i = 0; i < N; i++)
        {
            // res[i][j] = mat1[i][j] + mat2[i][j]
            *(*(res + i) + j) = *(*(mat1 + i) + j) + *(*(mat2 + i) + j);
        }
    }
    clock_t fin = clock();
    temps = (double)(fin-debut) / (CLOCKS_PER_SEC);

    printf("%f",temps);
}

/************************Addition double **********************/


void matrixInput_d(double mat[][N])
{
    int i, j;


    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N; j++)
        {


        mat[i][j] = (double)rand()/RAND_MAX;

        }

    }
}









void matrixAddIJ_d(double mat1d[][N], double mat2d[][N], double resd[][N])
{
    clock_t debut = clock() ;
    int i, j;
    double temps;



    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N; j++)
        {
            // res[i][j] = mat1[i][j] + mat2[i][j]
            *(*(resd + i) + j) = *(*(mat1d + i) + j) + *(*(mat2d + i) + j);
        }
    }

    clock_t fin = clock();

    temps = (double)(fin-debut) / (CLOCKS_PER_SEC);

    printf("%f",temps);

}

void matrixAddJI_d(double mat1d[][N], double mat2d[][N], double resd[][N])
{
    clock_t debut = clock() ;
    int i, j;
    double temps;


   
    for (j = 0; j < N; j++)
    {
        for (i = 0; i < N; i++)
        {
            // res[i][j] = mat1[i][j] + mat2[i][j]
            *(*(resd + i) + j) = *(*(mat1d + i) + j) + *(*(mat2d + i) + j);
        }
    }
    clock_t fin = clock();
    temps = (double)(fin-debut) / (CLOCKS_PER_SEC);

    printf("%f",temps);
}




