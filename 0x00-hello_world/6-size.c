/*
 * Print sizes in int main(void)
 */
int main(void)
{
	/*
	 * Print sizes of types by int main(void)
	 */
	printf("Size of char: %d byte(s)", sizeof(char));
	printf("Size of an int: %d byte(s)", sizeof(int));
	printf("Size of a long int: %d byte(s)", sizeof(long int));
	printf("Size of a long long int: %d byte(s)", sizeof(long long int));
	printf("Size of a float: %d byte(s)", sizeof(float));
	/*
	 * Return 0
	 */
	return (0);
}
