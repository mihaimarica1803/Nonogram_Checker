#include <stdio.h>

long ordcresc(long n)
{
	int i, v[10] = {0}, x = 0, m;
	m = n;
	while (m != 0) {
		v[m % 10]++;
		m = m / 10;
	}
	for (i = 0; i < 10; i++) {
		while (v[i] != 0) {
			x = x * 10 + i;
			v[i]--;
		}
	}
	return x;
} //Ordonez crescător cifrele unui număr

long orddescresc(long n)
{
	int i, v[10] = {0}, x = 0, m;
	m = n;
	while (m != 0) {
		v[m % 10]++;
		m = m / 10;
	}
	for (i = 9; i >= 0; i--) {
		while (v[i] != 0) {
			x = x * 10 + i;
			v[i]--;
		}
	}
	return x;
} //Ordonez descrescător cifrele unui număr

int main(void)
{
	long v[102] = {0};
	int ok = 0, i, j, k;
	long N, n_descrescator, n_crescator;
	scanf("%ld", &N);
	while (ok < 100) {
		n_descrescator = orddescresc(N);
		n_crescator = ordcresc(N);
		N = n_descrescator - n_crescator;
		v[ok] = N;
		ok++;
	}
	//Memorez in "v" diferențele dintre orddescresc și ordcresc al numerelor
	for (i = 0; i <= 98; i++) {
		for (j = 1; j <= 99; j++) {
			if (v[i] == v[j] && i != j) {
				printf("%d\n", i);
				/* i este numărul de diferențe realizate până la
				întâlnirea primului număr din secvența periodică */
				for (k = i; k < j; k++)
					printf("%ld ", v[k]);
					//Afișez secvența
				printf("\n");
				return 0;
			}
		}
	}
}
