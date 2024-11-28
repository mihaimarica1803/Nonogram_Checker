#include <stdio.h>

int main(void)
{
	int xmax_impar = -1, xmin_par = 9999999, x, y, z, k = 0, ok = 0, N, i;
	long S = 0;
	double m_a;
	scanf("%d", &N);
	if (N < 3) {
		printf("0\n0.0000000\n0\n0");
		//Nu există copaci speciali dacă N < 3
	} else {
		scanf("%d%d", &x, &y);
		for (i = 2; i < N; i++) {
			scanf("%d", &z);
			//Analizez copacii câte 3
			if (y > x && y > z) {
				S += y;
				k++;
				if ((i - 1) % 2 != 0) {
					if (y > xmax_impar)
						xmax_impar = y;
				} else {
					if (y < xmin_par) {
						xmin_par = y;
						ok++;
					}
				}
			}
			x = y;
			y = z;
		}
		m_a = (double)S / k;
		if (ok == 0)
			xmin_par = -1;
			//Pentru cazul în care nu există copaci speciali pe poziții pare
		printf("%ld\n", S);
		printf("%0.7lf\n", m_a);
		printf("%d\n", xmax_impar);
		printf("%d\n", xmin_par);
	}
	return 0;
}

