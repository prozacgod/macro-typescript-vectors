#define VECX(A) (A.x)
#define VECY(A) (A.y)
#define VECZ(A) (A.z)
#define VECW(A) (A.w)

#define VEC2(X, Y) { x: X , y: Y }
#define VEC3(X, Y, Z) { x: X , y : Y , z : Z }
#define VEC4(X, Y, Z, W) { x: X , y : Y , z : Z , w : W }

#define SET2(X, Y, B) { B.x = X ; B.y = Y ; }
#define SET3(X, Y, Z, B) { B.x = X ; B.y = Y ; B.z = Z ; }
#define SET4(X, Y, Z, W, B) { B.x = X ; B.y = Y ; B.z = Z ; B.w = W; }

#define MOV2(A, B) { B.x = A.x; B.y = A.y; }
#define MOV3(A, B) { B.x = A.x; B.y = A.y; B.z = A.z; }
#define MOV4(A, B) { B.x = A.x; B.y = A.y; B.z = A.z; B.w = A.w; }

#define DOT2(A, B) (A.x * B.x + A.y * B.y)
#define DOT3(A, B) (A.x * B.x + A.y * B.y + A.z * B.z)
#define DOT4(A, B) (A.x * B.x + A.y * B.y + A.z * B.z + A.w * B.w)

#define ADD2(A, B) { B.x += A.x; B.y += A.y; }
#define ADD3(A, B) { B.x += A.x; B.y += A.y; B.z += A.z; }
#define ADD4(A, B) { B.x += A.x; B.y += A.y; B.z += A.z; B.w += A.w; }

#define SUB2(A, B) { B.x -= A.x; B.y -= A.y; }
#define SUB3(A, B) { B.x -= A.x; B.y -= A.y; B.z -= A.z; }
#define SUB4(A, B) { B.x -= A.x; B.y -= A.y; B.z -= A.z; B.w -= A.w; }

#define MAT33(X11, X12, X13, X21, X22, X23, X31, X32, X33) \
    { x11: X11 , x12: X12 , x13: X13 , \
      x21: X21 , x22: X22 , x23: X32 , \
      x31: X31 , x32 : X32, x33: X33 }
