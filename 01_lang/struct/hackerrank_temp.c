#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct triangle
{
	int a;
	int b;
	int c;
};

typedef struct triangle triangle;

int cal_area(triangle * tr) {
    int a = tr->a, b = tr->b, c = tr->c;
    int p = (a + b + c) / 2;
    int s = sqrt(p*(p-a)*(p-b)*(p-c));

    // printf("%lf\n", s);

    return s;
}

void sort_by_area(triangle* tr, int n) {
    int i, j;
    
    for (i = 0; i < n; i++) {
        for (j = i+1; j < n; j++) {
            if (cal_area(tr[i]) > cal_area(tr+j)) {
                triangle *temp2 = tr+i;
                tr+i = tr+j;
                tr+j = temp2;
            }
        }
        // printf("%p\n", tr+i);
    }

    // for (i = 0; i < n; i++) {
    //     for (j = 0; j < n; j++) {
    //         if (area[i] == copy[j]) {
    //             indx[i] = j;
    //             break;
    //         }
    //     }
	// 	printf("%d %d %d\n", tr[indx[i]].a, tr[indx[i]].b, tr[indx[i]].c);
    //     // printf("%d\n", indx[i]);
    // }
    
}

int main()
{
	int n;
	scanf("%d", &n);
	triangle *tr = malloc(n * sizeof(triangle));
	for (int i = 0; i < n; i++) {
		scanf("%d%d%d", &tr[i].a, &tr[i].b, &tr[i].c);
	}
	sort_by_area(tr, n);


	for (int i = 0; i < n; i++) {
		printf("%d %d %d\n", tr[i].a, tr[i].b, tr[i].c);
	}
	return 0;
}