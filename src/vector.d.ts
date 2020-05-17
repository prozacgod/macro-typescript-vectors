export type Vector2 = { x: number; y: number; z: number };
export type Vector3 = { x: number; y: number; z: number };
export type Vector4 = { x: number; y: number; z: number; w: number };

export type AnyVector = Vector2 | Vector3;

export type Matrix3x3 = {
  x11: number;
  x12: number;
  x13: number;
  x21: number;
  x22: number;
  x23: number;
  x31: number;
  x32: number;
  x33: number;
};

declare global {
  function VECX(A: AnyVector): number;
  function VECY(A: AnyVector): number;
  function VECZ(A: AnyVector): number;
  function VECW(A: AnyVector): number;

  function VEC2(X: number, Y: number): Vector2;
  function VEC3(X: number, Y: number, Z: number): Vector3;
  function VEC4(X: number, Y: number, Z: number, W: number): Vector4;

  function SET2(X: number, Y: number, B: Vector2);
  function SET3(X: number, Y: number, Z: number, B: Vector2);
  function SET4(X: number, Y: number, Z: number, W: number, B: Vector2);

  function MOV2(A: Vector2, B: Vector2);
  function MOV3(A: Vector2, B: Vector2);
  function MOV4(A: Vector2, B: Vector2);

  function DOT2(A: Vector2, B: Vector2): number;
  function DOT3(A: Vector3, B: Vector3): number;
  function DOT4(A: Vector4, B: Vector4): number;

  function ADD2(A: Vector2, B: Vector2);
  function ADD3(A: Vector3, B: Vector3);
  function ADD4(A: Vector4, B: Vector4);

  function SUB2(A: Vector2, B: Vector2);
  function SUB3(A: Vector3, B: Vector3);
  function SUB4(A: Vector4, B: Vector4);

  function MAT33(
    a: number,
    b: number,
    c: number,
    d: number,
    e: number,
    f: number,
    g: number,
    h: number,
    i: number
  ): Matrix3x3;
}
