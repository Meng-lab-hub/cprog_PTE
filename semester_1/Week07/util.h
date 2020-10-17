#ifndef UTIL_H_INCLUDED
#define UTIL_H_INCLUDED

#define PTR

#define FIRST 42
#define SECOND 43

#ifdef PTR
void inc(int *a, int *b);

void swap(int *a, int *b);

#else

void inc(int a, int b);

void swap(int a, int b);

#endif // PTR

#endif // UTIL_H_INCLUDED
