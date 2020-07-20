

#include <stdio.h>
#include<stdlib.h>
#include<time.h>


int N;

int main ()
{


printf("Donner la taille de la matrice \n");
scanf("%i",&N);
     float *mat1 = malloc(sizeof(float)*N*N);
  float *mat2 = malloc(sizeof(float)*N*N);
  float *res = malloc(sizeof(float)*N*N);


   matrixInput_f(mat1);

   matrixInput_f(mat2);

   /***********/

   for(int i=0 ; i<5 ;i++) {
   matrixMultIJK_f( mat1,mat2,res);
   printf("\n");
  }

   printf("\n");

      for(int i=0 ; i<5 ;i++) {
   matrixMultJIK_f( mat1,mat2,res);
   printf("\n");
   }

   printf("\n"); 


      for(int i=0 ; i<5 ;i++) {
   matrixMultIKJ_f( mat1,mat2,res);
    printf("\n");
   }

   printf("\n"); 




      for(int i=0 ; i<5 ;i++) {
   matrixMultJKI_f( mat1,mat2,res);
   printf("\n");}

   printf("\n"); 

      for(int i=0 ; i<5 ;i++) {
   matrixMultKIJ_f( mat1,mat2,res);
   printf("\n");}

   printf("\n"); 




      for(int i=0 ; i<5 ;i++) {
   matrixMultKJI_f( mat1,mat2,res);
   printf("\n");}

   printf("\n"); //IJK, JIK,IKJ, JKI, KIJ et KJI

   /*****************/











    double *mat1d = malloc(sizeof(double)*N*N);
  double *mat2d = malloc(sizeof(double)*N*N);
  double *resd = malloc(sizeof(double)*N*N);

   matrixInput_d(mat1d);

   matrixInput_d(mat2d);

/***********/
   for(int i=0 ; i<5 ;i++) {
   matrixMultIJK_d( mat1d,mat2d,resd);
   printf("\n");
  }

   printf("\n");

      for(int i=0 ; i<5 ;i++) {
   matrixMultJIK_d( mat1d,mat2d,resd);
   printf("\n");
   }

   printf("\n"); //IJK, JIK,IKJ, JKI, KIJ et KJI


      for(int i=0 ; i<5 ;i++) {
   matrixMultIKJ_d( mat1d,mat2d,resd);
    printf("\n");
   }

   printf("\n"); //IJK, JIK,IKJ, JKI, KIJ et KJI




      for(int i=0 ; i<5 ;i++) {
   matrixMultJKI_d( mat1d,mat2d,resd);
   printf("\n");}

   printf("\n"); //IJK, JIK,IKJ, JKI, KIJ et KJI

      for(int i=0 ; i<5 ;i++) {
   matrixMultKIJ_d( mat1d,mat2d,resd);
   printf("\n");}

   printf("\n"); //IJK, JIK,IKJ, JKI, KIJ et KJI




      for(int i=0 ; i<5 ;i++) {
   matrixMultKJI_d( mat1d,mat2d,resd);
   printf("\n");}

   printf("\n"); //IJK, JIK,IKJ, JKI, KIJ et KJI*/

   /*****************/

    return 0;
}

/**
 * Function to print elements in a two-dimensional array.
 *
 * @mat     Two-dimensional array to print.
 */

void matrixPrint(int mat[][N])
{
    int row, col;

    for (row = 0; row < N; row++)
    {
        for (col = 0; col < N; col++)
        {
            printf("%d ", *(*(mat + row) + col));
        }

        printf("\n");
    }
}
void matrixInput_f(float mat[][N])
{


    int i, j;


    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N; j++)
        {


        mat[i][j] = (float)rand()/(RAND_MAX);

        }

    }
}


/**
 * Function to multiply two matrices.
 *
 * @mat1    First matrix
 * @mat2    Second matrix
 * @res     Resultant matrix to store product of both matrices.
 */

void matrixMultIJK_f(float mat1[][N], float mat2[][N], float res[][N])
{
    clock_t debut = clock() ;
    int i, j,k;
    double temps;



    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N; j++)
        {

            for ( k =0 ;k < N; k++){

 // res[i,j]  = A[i][k] * B[k][j]  en pointeur c'est équivalent à :
           *(*(res + i) + j) += (*(*(mat1 + i) + k)) * (*(*(mat2 + k) + j));

            }
        }
    }

    clock_t fin = clock();

    temps = (double)(fin-debut) / (CLOCKS_PER_SEC);

    printf("%f",temps);

}



/**************Version JIK ****************/

void matrixMultJIK_f(float mat1[][N], float mat2[][N], float res[][N])
{
    clock_t debut = clock() ;
    int i, j,k;
    double temps;



    for (j = 0; j < N; j++)
    {
        for (i = 0; i < N; i++)
        {

            for ( k =0 ;k < N; k++){

 // res[i,j]  = A[i][k] * B[k][j]  en pointeur c'est équivalent à :
           *(*(res + i) + j) += (*(*(mat1 + i) + k)) * (*(*(mat2 + k) + j));

            }
        }
    }

    clock_t fin = clock();

    temps = (double)(fin-debut) / (CLOCKS_PER_SEC);

    printf("%f",temps);

}

/****IKJ***********/

void matrixMultIKJ_f(float mat1[][N], float mat2[][N], float res[][N])
{
    clock_t debut = clock() ;
    int i, j,k;
    double temps;



    for (i = 0; i < N; i++)
    {
        for (k = 0; k < N; k++)
        {

            for ( j =0 ;j < N; j++){

 // res[i,j]  = A[i][k] * B[k][j]  en pointeur c'est équivalent à :
           *(*(res + i) + j) += (*(*(mat1 + i) + k)) * (*(*(mat2 + k) + j));

            }
        }
    }

    clock_t fin = clock();

    temps = (double)(fin-debut) / (CLOCKS_PER_SEC);

    printf("%f",temps);

}

/********JKI************/

void matrixMultJKI_f(float mat1[][N], float mat2[][N], float res[][N])
{
    clock_t debut = clock() ;
    int i, j,k;
    double temps;



    for (j = 0; j < N; j++)
    {
        for (k = 0; k < N; k++)
        {

            for ( i =0 ;i < N; i++){

 // res[i,j]  = A[i][k] * B[k][j]  en pointeur c'est équivalent à :
           *(*(res + i) + j) += (*(*(mat1 + i) + k)) * (*(*(mat2 + k) + j));

            }
        }
    }

    clock_t fin = clock();

    temps = (double)(fin-debut) / (CLOCKS_PER_SEC);

    printf("%f",temps);

}



/************KIJ**********/

void matrixMultKIJ_f(float mat1[][N], float mat2[][N], float res[][N])
{
    clock_t debut = clock() ;
    int i, j,k;
    double temps;



    for (k = 0; k < N; k++)
    {
        for (i = 0; i < N; i++)
        {

            for ( j =0 ;j < N; j++){

 // res[i,j]  = A[i][k] * B[k][j]  en pointeur c'est équivalent à :
           *(*(res + i) + j) += (*(*(mat1 + i) + k)) * (*(*(mat2 + k) + j));

            }
        }
    }

    clock_t fin = clock();

    temps = (double)(fin-debut) / (CLOCKS_PER_SEC);

    printf("%f",temps);

}

/**********KJI*********/

void matrixMultKJI_f(float mat1[][N], float mat2[][N], float res[][N])
{
    clock_t debut = clock() ;
    int i, j,k;
    double temps;



    for (k = 0; k < N; k++)
    {
        for (j = 0; j < N; j++)
        {

            for ( i =0 ;i < N; i++){

 // res[i,j]  = A[i][k] * B[k][j]  en pointeur c'est équivalent à :
           *(*(res + i) + j) += (*(*(mat1 + i) + k)) * (*(*(mat2 + k) + j));

            }
        }
    }

    clock_t fin = clock();

    temps = (double)(fin-debut) / (CLOCKS_PER_SEC);

    printf("%f",temps);

}
