unsigned long int seed = 1;
int rand0(void)
{
	seed = seed * 1103515245 + 12345;
	return (unsigned int) (seed/65536) % 32768;
}
