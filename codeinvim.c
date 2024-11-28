#include <stdio.h>

int main(void)
{
	int x[101], c[101], a[101] = {0},
	var, min, N, i, j, p_min, m = 0, p = 0, k = 0, ok;
	scanf("%d", &N);
	for (i = 0; i < N; i++)
		scanf("%d", &x[i]);
	for (i = 0; i < N; i++)
		scanf("%d", &c[i]);
	scanf("%d", &p_min);
	for (i = 0; i < N; i++)
		p = p + x[i] * c[i];
		//Calculez punctajul obținut
	for (i = 0; i < N; i++) {
		if (x[i] != 10) {
			a[k] = c[i] * (10 - x[i]);
			k++;
		}
	}
	//Memorez punctajele pe care le mai poate obține
	ok = p_min - p;
	if (ok <= 0) {
		printf("0\n");
		//Înseamnă că a adunat deja punctele necesare
	} else {
		for (i = 0; i < k; i++) {
			for (j = i + 1; j <= k; j++) {
				if (a[j] < a[i]) {
					var = a[i];
					a[i] = a[j];
					a[j] = var;
				}
			}
		}
		//Ordonez crescător termenii vectorului
		for (i = k; i >= 0; i--) {
			ok -= a[i];
			m++;
			if (ok <= 0) {
				printf("%d\n", m);
				//Numărul minim de materii la care trebuie să ia 10
				return 0;
			}
		}
		printf("-1\n");
		//Nu poate fi bursier indiferent de măriri
	}
	return 0;
}
