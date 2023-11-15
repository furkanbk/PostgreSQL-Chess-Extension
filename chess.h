/*
 * chess.h
 */

/******************************STRUCTURES***************************************/


typedef struct
{

  SCL_Board board;
  char* fen;

} ChessBoard;

typedef struct
{

  SCL_Record record;
  char* pgn;

} ChessGame;


/* fmgr macros chessboard type */

  #define ChessBoardPGetDatum(X)  PointerGetDatum(X)
  
  #define PG_RETURN_CHESSBOARD_P(x) return ChessBoardPGetDatum(x)


  #define DatumGetChessBoardP(X)  ((ChessBoard *) DatumGetPointer(X))
 
  #define PG_GETARG_CHESSBOARD_P(n) DatumGetChessBoardP(PG_GETARG_DATUM(n))
/*****************************************************************************/


/* fmgr macros chessboard type */

  #define ChessGamePGetDatum(X)  PointerGetDatum(X)
  
  #define PG_RETURN_CHESSGAME_P(x) return ChessGamePGetDatum(x)


  #define DatumGetChessGameP(X)  ((ChessGame *) DatumGetPointer(X))
 
  #define PG_GETARG_CHESSGAME DatumGetChessGameP(PG_GETARG_DATUM(n))
/*****************************************************************************/

