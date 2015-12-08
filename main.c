#include <stdio.h>
#include <stdlib.h>
#include "displaynumbers.h"

int fdegrau (int entrada);
int y (int x[], int *w, int size, int (*fdegrau)(int));
void printDisplay (int x[], int rows, int cols);
int* percepone (int ages, int n, int x[][31], 
		int *d, int input_size);
int** perceptwo (int ages, int n, int x[][31], 
		 int d[][2], int input_size);
int** percepthree (int ages, int n, int x[][31], 
		   int d[][6], int input_size);

int main () {
  int i, j, ages = 100;
  int d[2] = {0,1};
  int d2[2][2] = {{1,0},{0,1}};
  int d3[6][6] = {{1,0,0,0,0,0},{0,1,0,0,0,0},{0,0,1,0,0,0},
		  {0,0,0,1,0,0},{0,0,0,0,1,0},{0,0,0,0,0,1}};
  int learning_rate = 1;
  int *w;
  int **w2;

  /* for (i = 0; i < 2; ++i) { */
  /*   printf ("\nX%d:\n", i); */
  /*   printDisplay (x[i], 6, 5); */
  /* } */
  /* getchar(); */
  /* // 1. */
  /* // a) b) */
  /* w = percepone (ages, learning_rate, x, d, 2); */

  /* //verification */
  /* for (i = 0; i < 2; ++i) */
  /*   printf ("%d\n", y (x[i], w, 31, fdegrau)); */
  

  /* // c) */
  /* for (i = 0; i < 10; ++i) { */
  /*   for (j = 0; j < 2; ++j) { */
  /*     printf ("\nDistorcido %d %d :",i + 1, j); */
  /*     printDisplay (dist[i][j], 6, 5); */
  /*     printf (" Resultado %d", y (dist[i][j], w, 31, fdegrau)); */
  /*   } */
  /*   getchar(); */
  /*   putchar ('\n'); */
  /* } */

  /* // d) */
  /* for (j = 2; j < 6; ++j) { */
  /*   printf ("\nBem diferente %d:",j); */
  /*   printDisplay (x[j], 6, 5); */
  /*   printf (" Resultado %d", y (x[j], w, 31, fdegrau)); */
  /*   putchar ('\n'); */
  /*   getchar(); */
  /* } */
  

  // 2.
  printf ("\nExercicio 2\n");
  for (i = 0; i < 2; ++i) {
    printf ("\nX%d:\n", i);
    printDisplay (x[i], 6, 5);
  }
  getchar();
  // a) b)
  w2 = perceptwo (ages, learning_rate, x, d2, 2);
  getchar();

  //verification
  for (i = 0; i < 2; ++i) {
    printf ("\nPara X%d:\n", i);
    printf ("y1 = %d\n", y (x[i], w2[0], 31, fdegrau));
    printf ("y2 = %d\n", y (x[i], w2[1], 31, fdegrau));
    getchar();
  }
  
  // c)
  for (i = 0; i < 10; ++i) {
    for (j = 0; j < 2; ++j) {
      printf ("\nDistorcido %d %d :",i + 1, j);
      printDisplay (dist[i][j], 6, 5);
      printf (" y1 = %d\n", y (dist[i][j], w2[0], 31, fdegrau));
      printf (" y2 = %d\n", y (dist[i][j], w2[1], 31, fdegrau));
    }
    getchar();
    putchar ('\n');
  }

  // d)
  for (j = 2; j < 6; ++j) {
    printf ("\nBem diferente %d:",j);
    printDisplay (x[j], 6, 5);
    printf (" y1 = %d\n", y (x[j], w2[0], 31, fdegrau));
    printf (" y2 = %d\n", y (x[j], w2[1], 31, fdegrau));
    getchar();
  }

  /* // 3. */
  /* printf ("\nExercicio 3\n"); */
  /* for (i = 0; i < 6; ++i) { */
  /*   printf ("\nX%d:\n", i); */
  /*   printDisplay (x[i], 6, 5); */
  /* } */
  /* getchar(); */
  /* // a) b) */
  /* w2 = percepthree (ages, learning_rate, x, d3, 6); */

  /* //verification */
  /* for (i = 0; i < 6; ++i) { */
  /*   printf ("\nPara X%d:\n", i); */
  /*   printf ("y1 = %d\n", y (x[i], w2[0], 31, fdegrau)); */
  /*   printf ("y2 = %d\n", y (x[i], w2[1], 31, fdegrau)); */
  /*   printf ("y3 = %d\n", y (x[i], w2[2], 31, fdegrau)); */
  /*   printf ("y4 = %d\n", y (x[i], w2[3], 31, fdegrau)); */
  /*   printf ("y5 = %d\n", y (x[i], w2[4], 31, fdegrau)); */
  /*   printf ("y6 = %d\n", y (x[i], w2[5], 31, fdegrau)); */
  /*   getchar(); */
  /* } */
  
  /* // c) */
  /* for (i = 0; i < 2; ++i) { */
  /*   for (j = 0; j < 6; ++j) { */
  /*     printf ("\nDistorcido %d %d :",i + 1, j); */
  /*     printDisplay (dist[i][j], 6, 5); */
  /*     printf ("y1 = %d\n", y (dist[i][j], w2[0], 31, fdegrau)); */
  /*     printf ("y2 = %d\n", y (dist[i][j], w2[1], 31, fdegrau)); */
  /*     printf ("y3 = %d\n", y (dist[i][j], w2[2], 31, fdegrau)); */
  /*     printf ("y4 = %d\n", y (dist[i][j], w2[3], 31, fdegrau)); */
  /*     printf ("y5 = %d\n", y (dist[i][j], w2[4], 31, fdegrau)); */
  /*     printf ("y6 = %d\n", y (dist[i][j], w2[5], 31, fdegrau)); */
  /*   } */
  /*   getchar(); */
  /*   putchar ('\n'); */
  /* } */

  /* // d) */
  /* for (j = 0; j < 6; ++j) { */
  /*   printf ("\nBem diferente %d:",j); */
  /*   printDisplay (letter[j], 6, 5); */
  /*   printf ("y1 = %d\n", y (letter[j], w2[0], 31, fdegrau)); */
  /*   printf ("y2 = %d\n", y (letter[j], w2[1], 31, fdegrau)); */
  /*   printf ("y3 = %d\n", y (letter[j], w2[2], 31, fdegrau)); */
  /*   printf ("y4 = %d\n", y (letter[j], w2[3], 31, fdegrau)); */
  /*   printf ("y5 = %d\n", y (letter[j], w2[4], 31, fdegrau)); */
  /*   printf ("y6 = %d\n", y (letter[j], w2[5], 31, fdegrau)); */
  /*   getchar(); */
  /* } */
  
  return 0;
}

int* percepone (int ages, int n, int x[][31], 
		       int *d, int input_size) {
/* void percepone (int ages, int tolerance, int n, 
   int x[][6][5], int *d, int input_size) { */

  int t, err, E;
  int i, j;
  int *w;

  if (!x || !d || ages <= 0) {
    printf ("\nError\n");
    getchar ();
    return NULL;
  }
  
  w = (int*) malloc (31 * sizeof(int));
  for (i = 0; i < 31; ++i) {
    w[i] = 0;
  }  

  t = 0;
  do {
    E = 0;

    for (i = 0; i < input_size; ++i) {

      if (err = d[i] - y (x[i], w, 31,fdegrau)) {
	for (j = 0; j < 31; ++j) {
	  w[j] += n * err * x[i][j];
	}
      }

      E += err;
    }

    ++t;

  } while (t < ages && E > 0);


  //print new W
  printf ("\nW :\n");
  for (j = 0; j < 31; ++j) {
    if ( !(j%5 - 1)) 
      putchar('\n');
    printf (" %2d",w[j]);
  }

  printf ("\n\n%d epoca(s)\n\n", t);

  return w;
}

int y (int x[], int *w, int size, int (*fdegrau)(int)) {
  int i, u;
  for (i = 0, u = 0; i < size; ++i) {
    u += x[i] * w[i];
  }
  return (*fdegrau) (u);
}

/* int fdegrau (const void * entrada) { */
int fdegrau (int entrada) {
  return (entrada > 0) ? 1 : 0;
}

void printDisplay (int x[], int rows, int cols) {
  int i,j;
  for (i = 0; i < rows * cols; ++i) {
    if (!(i % cols))
      putchar('\n');
    printf ("%2d", x[i+1]);
  }
  putchar('\n');
}


int** perceptwo (int ages, int n, int x[][31], 
		       int d[][2], int input_size) {
/* void percepone (int ages, int tolerance, int n, 
   int x[][6][5], int *d, int input_size) { */

  int t, err, E;
  int i, j, neur;
  int **w;

  if (!x || !d || ages <= 0) {
    printf ("\nError\n");
    getchar ();
    return NULL;
  }
  
  
  w = (int**) malloc (2 * sizeof(int*));
  for (j = 0; j < 2; ++j) {
    w[j] = (int*) malloc (31 * sizeof(int));
    for (i = 0; i < 31; ++i) {
      w[j][i] = 0;
    }
  }  

  t = 0;
  do {
    E = 0;

    for (i = 0; i < input_size; ++i) {

      for (neur = 0; neur < 2; ++neur) {

	if (err = d[i][neur] - y (x[i], w[neur], 31, fdegrau)) {
	  for (j = 0; j < 31; ++j) {
	    w[neur][j] += n * err * x[i][j];
	  }
	  E = 1;
	}
	
      }//for neur

    }

    ++t;

  } while (E > 0);


  //print new W
  for (i = 0; i < 2; ++i) {
    printf ("\nW%d :\n", i);
    for (j = 0; j < 31; ++j) {
      if ( !(j%5 - 1)) 
	putchar('\n');
      printf (" %2d",w[i][j]);
    }
  }

  printf ("\n\n%d epoca(s)\n\n", t);

  return w;
}

int** percepthree (int ages, int n, int x[][31], 
		       int d[][6], int input_size) {
  int t, err, E;
  int i, j, neur;
  int **w;

  if (!x || !d || ages <= 0) {
    printf ("\nError\n");
    getchar ();
    return NULL;
  }
  
  w = (int**) malloc (6 * sizeof(int*));
  for (j = 0; j < 6; ++j) {
    w[j] = (int*) malloc (31 * sizeof(int));
    for (i = 0; i < 31; ++i) {
      w[j][i] = 0;
    }
  }  

  t = 0;
  do {
    E = 0;

    for (i = 0; i < input_size; ++i) {

      for (neur = 0; neur < 6; ++neur) {

	if (err = d[i][neur] - y (x[i], w[neur], 31, fdegrau)) {
	  for (j = 0; j < 31; ++j) {
	    w[neur][j] += n * err * x[i][j];
	  }
	  E = 1;
	}

      }//for neur

    }

    ++t;

  } while (E > 0);


  //print new W
  for (neur = 0; neur < 6; ++neur) {
    printf ("\nW%d :\n", neur);
    for (j = 0; j < 31; ++j) {
      if ( !(j%5 - 1)) 
	putchar('\n');
      printf (" %2d",w[neur][j]);
    }
  }

  printf ("\n\n%d epoca(s)\n\n", t);

  return w;
}
