// An example of tail recursive function

void print(int n)
{
	if (n < 0)
		return;
	printf("%d ", n);

	// The last executed statement is recursive call
	print(n - 1);
}
