/*
 * inclass.c
 *
 *  Created on: 2019年2月14日
 *      Author: 111111
 */
#include <stdio.h>
int A,B;

int fun(){
	static int count = 0;
	count++;
	return count;
}
int Add()
{
	return A+B;
}
int main()
{

    int answer; // Local variable

    A = 5;

    B = 7;

    answer = Add();

    printf("%d\n",answer);

    printf("%d ", fun());

    printf("%d ", fun());

    return 0;

}
