#include <stdio.h>

int main(void)
{
	int T, N, M, i, j, x, y, m[102][102], copie,
	a[102] = {0}, b[102][102] = {0}, ok1 = 1, ok2 = 1, k1 = 0, k2 = 0, buna;
	scanf("%d", &T);
	while (T > 0) {
		scanf("%d%d", &N, &M);
		for (i = 0; i < N; i++) {
			scanf("%d", &x);
			a[i] = x; // Memorez numărul de grupuri de pe fiecare linie
			for (j = 0; j < x; j++) {
				scanf("%d", &y);
				b[i][j] = y; // Memorez dimensiunile grupurilor
			}
		}
		for (i = 0; i < M; i++) {
			scanf("%d", &x);
			for (j = 0; j < x; j++)
				scanf("%d", &y);
		}
		for (i = 0; i < N; i++) {
			for (j = 0; j < M; j++)
				scanf("%d", &m[i][j]);
		}
		for (i = 0; i < N; i++) {
			k1 = 0;
			for (j = 0; j < M; j++) {
				if (j == 0 && m[i][j] == 1)
					k1++;
				if (j != 0 && m[i][j] == 1 && m[i][j - 1] == 0)
					k1++;
			}
			//Aflu numărul de grupuri de pe fiecare linie a matricei
			if (k1 != a[i])
				ok1 = 0;
		}
		for (i = 0; i < N; i++) {
			buna = 0;
			for (j = 0; j < M; j++) {
				k2 = 0;
				if (j == 0 && m[i][j] == 1) {
					copie = j;
					while (copie < M && m[i][copie] == 1) {
						copie++;
						k2++;
					}
					if (k2 != b[i][buna])
						ok2 = 0;
					buna++;
				}
				if (j != 0 && m[i][j] == 1 && m[i][j - 1] == 0) {
					copie = j;
					while (copie < M && m[i][copie] == 1) {
						copie++;
						k2++;
					}
					//Aflu dimensiunile fiecărui grup
					if (k2 != b[i][buna])
						ok2 = 0;
					buna++;
				}
			}
		}
		if (ok1 == 1 && ok2 == 1)
			printf("Corect\n");
		else
			printf("Eroare\n");
		ok1 = 1;
		ok2 = 1;
		//Readuc contorii la valorile inițiale
		T--;
		//Analizez pe rând fiecare puzzle
	}
	return 0;
}
