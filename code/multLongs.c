
#include <stdio.h>
#include<stdlib.h>
#include<time.h>

int N;


void matrixInput_d(double mat[][N])
{


    int i, j;


    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N; j++)
        {


        mat[i][j] = (double)rand()/(RAND_MAX);

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

void matrixMultIJK_d(double mat1[][N], double mat2[][N], double res[][N])
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

void matrixMultJIK_d(double mat1[][N], double mat2[][N], double res[][N])
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

void matrixMultIKJ_d(double mat1[][N], double mat2[][N], double res[][N])
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

void matrixMultJKI_d(double mat1[][N], double mat2[][N], double res[][N])
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

void matrixMultKIJ_d(double mat1[][N], double mat2[][N], double res[][N])
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

void matrixMultKJI_d(double mat1[][N], double mat2[][N], double res[][N])
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
