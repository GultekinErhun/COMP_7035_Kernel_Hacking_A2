#ifndef __THREAD_FIXED_POINT_H
#define __THREAD_FIXED_POINT_H

//typedef int fixed_point;
//#define FRACTION 15
// Convert x to integer (rounding toward zero):	x / f
// convert x to integer rounding to nearest!
// (x + f / 2) / f if x >= 0,
// (x - f / 2) / f if x <= 0.
// Add x and y:	x + y
// Subtract y from x:	x - y
// Add x and n:	x + n * f
// Subtract n from x:	x - n * f
// Multiply x by y:	((int64_t) x) * y / f
// Multiply x by n:	x * n
// Divide x by y:	((int64_t) x) * f / y
// Divide x by n:	x / n


//#define CONVERT_TO_FIXED_POINT(x) ((fixed_point)(x << FRACTION))  
//#define CONVERT_TO_INT_TOWARD_ZERO(x) (x >> FRACTION)
//#define CONVERT_TO_INT_NEAREST(x) (x >= 0 ? ((x + (1 << (FRACTION - 1))) >> FRACTION) : ((x - (1 << (FRACTION - 1))) >> FRACTION))
//#define ADD_FIXED_POINT(x,y) (x + y)
//#define ADD_INTEGER(x,n) (x + (n << FRACTION))
//#define SUB_FIXED_POINT(x,y) (x - y)
//#define SUB_INTEGER(x,n) (x - (n << FRACTION))
//#define MULTIPLY_FIXED_POINT(x,y) (x * y)
//#define MULTIPLY_INTEGER(x,n) ((fixed_point)(((int64_t) x) * n >> FRACTION))
//#define DIVIDE_FIXED_POINT(x,y) (x / y)
//#define DIVIDE_INTEGER(x,n) ((fixed_point)((((int64_t) x) << FRACTION) / n))


typedef int sabit_nokta;
#define KESIR 15

#define SABIT_NOKTAYA_DONUSTUR(x) ((sabit_nokta)(x << KESIR))
#define SIFIRA_YAKIN_TAMSAYIYA_DONUSTUR(x) (x >> KESIR)
#define EN_YAKIN_TAMSAYIYA_YUVARLA(x) (x >= 0 ? ((x + (1 << (KESIR - 1))) >> KESIR) : ((x - (1 << (KESIR - 1))) >> KESIR))
#define SABIT_NOKTA_TOPLA(x,y) (x + y)
#define TAM_SAYI_EKLE(x,n) (x + (n << KESIR))
#define SABIT_NOKTA_CIKAR(x,y) (x - y)
#define TAM_SAYI_CIKAR(x,n) (x - (n << KESIR))
#define SABIT_NOKTA_CARP(x,y) (x * y)
#define TAM_SAYIYLA_CARP(x,n) ((sabit_nokta)(((int64_t) x) * n >> KESIR))
#define SABIT_NOKTA_BOL(x,y) (x / y)
#define TAM_SAYIYLA_BOL(x,n) ((sabit_nokta)((((int64_t) x) << KESIR) / n))




#endif /* thread/fixed_point.h */
