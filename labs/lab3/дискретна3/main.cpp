#include <iostream>
#include <string>
#include <locale.h>
#include <math.h>
using namespace std;
bool IsMatrixReflexive(int **matrix);
bool  IsMatrixAntiReflexive(int **matrix);
bool IsMatrixSymetric(int **matrix);
bool IsMatrixAntiSymetric(int **matrix);
bool IsMatrixTransactive(int **matrix);
bool IsMatrixAntiTransactive(int **matrix);
void BuildMatrix(int*, int*, int**);
int main()
{
setlocale(LC_ALL, "Ukrainian");
 int array1[5] = {};
 int array2[5] = {};
 int ** matrix = new int *[5];
 for (int i = 0; i < 5; i++)
 {
  matrix[i] = new int[5];
 }

  cout << "¬ведiть 5 елементiв масиву1:" << "\n";

  for (int i = 0; i < 5; i++)

  {

    cin >>array1[i];

  }

  cout << "¬ведiть 5 елементiв масиву2:" << "\n";

  for (int j = 0; j < 5; j++)

  {

    cin >>array2[j];

  }
 BuildMatrix(array1, array2, matrix);
}
void BuildMatrix(int *array1, int *array2, int **matrix)
{
 for (int i = 0; i < 5; i++)
 {
  for (int j = 0; j < 5; j++)
  {
   if ((array2[i] + array1[j]) > 2)
   {
    matrix[i][j] = 1;
    cout << "1\t";
   }
   else
   {
    matrix[i][j] = 0;
    cout << "0\t";
   }
  }
  cout << "\n";
 }

 bool isMatrixReflexive = IsMatrixReflexive(matrix);
 bool isMatrixAntiReflexive = IsMatrixAntiReflexive(matrix);
 string reflectionResult = "";
 if (isMatrixReflexive)
 {
  reflectionResult = "рефлексивна";
 }
 else if (IsMatrixAntiReflexive)
 {
  reflectionResult = "антирефлексивна";
 }


 bool isMatrixSymetric = IsMatrixSymetric(matrix);
 bool isMatrixAntiSymetric = IsMatrixAntiSymetric(matrix);
 string symetricResult = "";
 if (isMatrixSymetric)
 {
  symetricResult = "симетрична";
 }
 else if (IsMatrixAntiSymetric)
 {
  symetricResult = "антисиметрична";
 }


 bool isMatrixTransactive = IsMatrixTransactive(matrix);
 bool isMatrixAntiTransactive = IsMatrixAntiTransactive(matrix);
 string transactiveResult = "";
 if (isMatrixTransactive)
 {
  transactiveResult = "транзактивна";
 }
 else if (isMatrixAntiTransactive)
 {
  transactiveResult = "антитранзактивна";
 }


 cout <<"÷€ матриц€ Ї:" <<"\n";
 cout << reflectionResult << "\n";
 cout << symetricResult << "\n";
 cout << transactiveResult << endl;
}

bool IsMatrixReflexive(int **matrix)
{
 for (int i = 0; i < 5; i++)
 {
  if (matrix[i][i] != 1)
  {
   return false;
  }
 }
 return true;
}

bool  IsMatrixAntiReflexive(int **matrix)
{
 for (int i = 0; i < 5; i++)
 {
  if (matrix[i][i] != 0)
  {
   return false;
  }
 }
 return true;
}

bool IsMatrixSymetric(int **matrix)
{
 for (int i = 0; i < 5; i++)
 {
  for (int j = 0; j < 5; j++)
  {
   if (matrix[i][j] != matrix[j][i])
   {
    return false;
   }
  }
 }
 return true;
}

bool IsMatrixAntiSymetric(int **matrix)
{
 for (int i = 0; i < 5; i++)
 {
  for (int j = 0; j < 5; j++)
  {
   if (matrix[i][j] == matrix[j][i])
   {
    return false;
   }
  }
 }
 return true;

}

bool IsMatrixTransactive(int **matrix)
{
 for (int i = 0; i < 5; i++)
 {

  for (int k = 0; k < 5; k++)
  {
   if (matrix[i][k] == 1 && i != k)
   {
    for (int j = 0; j < 5; j++)
    {
     if (matrix[k][j] == 1 && matrix[i][j] != 1)
     {
      return false;
     }
    }
   }
  }
 }
 return true;
}

bool IsMatrixAntiTransactive(int **matrix)
{
 for (int i = 0; i < 5; i++)
 {

  for (int k = 0; k < 5; k++)
  {
   if (matrix[i][k] == 1 && i != k)
   {
    for (int j = 0; j < 5; j++)
    {

     if (matrix[k][j] == 1 && matrix[i][j] != 0)
     {

      return false;
     }
    }
   }
  }
 }
 return true;
}
