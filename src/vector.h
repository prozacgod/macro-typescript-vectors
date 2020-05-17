#ifdef NAMED
#define VECX(A) (A.x)
#define VECY(A) (A.y)
#define VECZ(A) (A.z)
#define VECW(A) (A.w)

#define VEC2(X, Y) { x: X , y: Y }
#define VEC3(X, Y, Z) { x: X , y : Y , z : Z }
#define VEC4(X, Y, Z, W) { x: X , y : Y , z : Z , w : W }
#endif 

#ifdef INDEXED
#define VECX(A) A[0]
#define VECY(A) A[1]
#define VECZ(A) A[2]
#define VECW(A) A[3]

#define VEC2(X, Y) [X,Y]
#define VEC3(X, Y, Z) [X,Y,Z]
#define VEC4(X, Y, Z, W) [X,Y,Z,W]
#endif

#define SET2(X, Y, B) { VECX(B) = X; VECY(B) = Y; }
#define SET3(X, Y, Z, B)  { VECX(B) = X; VECY(B) = Y; VECZ(B) = Z }
#define SET4(X, Y, Z, W, B) { VECX(B) = X; VECY(B) = Y; VECZ(B) = Z; VECW(B) = Z }

#define MOV2(A, B) { VECX(B) = VECX(A); VECY(B) = VECY(A); }
#define MOV3(A, B) { VECX(B) = VECX(A); VECY(B) = VECY(A); VECZ(B) = VECZ(A);}
#define MOV4(A, B) { VECX(B) = VECX(A); VECY(B) = VECY(A); VECZ(B) = VECZ(A); VECW(B) = VECW(A);}

#define DOT2(A, B) ( VECX(A) * VECX(B) + VECY(A) * VECY(B) )
#define DOT3(A, B) ( VECX(A) * VECX(B) + VECY(A) * VECY(B) + VECZ(A) * VECZ(B))
#define DOT4(A, B) ( VECX(A) * VECX(B) + VECY(A) * VECY(B) + VECZ(A) * VECZ(B) + VECW(A) * VECW(B))

#define ADD2(A, B) { VECX(B) += VECX(A); VECY(B) += VECY(A); }
#define ADD3(A, B) { VECX(B) += VECX(A); VECY(B) += VECY(A); VECZ(B) += VECZ(A); }
#define ADD4(A, B) { VECX(B) += VECX(A); VECY(B) += VECY(A); VECZ(B) += VECZ(A); VECW(B) += VECW(A); }

#define SUB2(A, B) { VECX(B) -= VECX(A); VECY(B) -= VECY(A); }
#define SUB3(A, B) { VECX(B) -= VECX(A); VECY(B) -= VECY(A); VECZ(B) -= VECZ(A); }
#define SUB4(A, B) { VECX(B) -= VECX(A); VECY(B) -= VECY(A); VECZ(B) -= VECZ(A); VECW(B) -= VECW(A); }

#define MAT33(X11, X12, X13, X21, X22, X23, X31, X32, X33) \
    { x11: X11 , x12: X12 , x13: X13 , \
      x21: X21 , x22: X22 , x23: X32 , \
      x31: X31 , x32 : X32, x33: X33 }

