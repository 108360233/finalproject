#include<stdio.h>
#include<stdlib.h>
#define point 3
void printArray(int a[][point]);
int scanfArray(int a[][point]);
int answerArray(int a[][point]);

int main(void)
{
	printf("�w��Ө�Cramer's rule�����p���\n");
	printf("\n");
	printf("       |a[0][0]  a[0][1]  a[0][2]|\n");
	printf("       |                         |\n");
	printf("       |a[1][0]  a[1][1]  a[1][2]| = answer\n");
	printf("       |                         |\n");
	printf("       |a[2][0]  a[2][1]  a[2][2]|\n");
	printf("\n");

	int array1[3][3] = {0};
	scanfArray(array1);
	printf("���� = \n");
	printArray(array1);
	printf("answer = %d", answerArray(array1));
	system("pause");
}
int scanfArray(int array1[3][3])
{
	int i; int j;
	for (i = 0; i <= 2; i++)
	{
		for (j = 0; j <= 2; j++)
		{	
				printf("�п�J�A�Q�n�ba[%d][%d]��J����:", i,j);
				scanf_s("\t%d", &array1[i][j]);			
		}
		printf("\n");
	}
	return array1[3][3];

}
void printArray(int array1[3][3])
{
	int i; int j;
	for (i = 0; i <= 2; i++)
	{
		for (j = 0; j <= 2; j++)
		{
			printf("%-3d", array1[i][j]);
		}
		printf("\n");
	}
}
int answerArray(int array1[3][3])
{
	int answer1, answer2,a;

	answer1 = array1[0][0] * array1[1][1] * array1[2][2] + array1[1][0] * array1[2][1] * array1[0][2] + array1[0][1] * array1[1][2] * array1[2][0];
	answer2 = array1[0][2] * array1[1][1] * array1[2][0] + array1[1][0] * array1[2][2] * array1[1][0] + array1[2][1] * array1[1][2] * array1[0][0];
	a = answer1 - answer2;
	return a;

}