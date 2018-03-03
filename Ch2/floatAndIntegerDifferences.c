/*
 * floatAndIntegerDifferences.c
 *
 *  Created on: Mar 3, 2018
 *      Author: Devan
 */

#include <stdio.h>

int main() {

	/* Output differences between Ints and Floats */

	int i;
	float x;

	i = 10 / 4;       /* Will equal 2 */
	x = 10.0 / 4.0;   /* Will equal 2.5 */

	printf("%d\n", i);
	printf("%.1f\n", x);

	return 0;
}
