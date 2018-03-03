
#include <stdio.h>

int main() {

	printf("%.1f\n", 5E3); /* Scientific notation for large numbers in C. */

	/* Int & Float differences */

	int i;
	float x;

	i = 10 / 4;       /* Will equal 2 */
	x = 10.0 / 4.0;   /* Will equal 2.5 */

	printf("%d\n", i);
	printf("%.1f\n", x);

	return 0;
}
