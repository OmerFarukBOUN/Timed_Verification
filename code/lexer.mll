{
open Lexing
open Parser

exception SyntaxError of string

let next_line lexbuf =
  let pos = lexbuf.lex_curr_p in
  lexbuf.lex_curr_p <-
    { pos with pos_bol = lexbuf.lex_curr_pos;
               pos_lnum = pos.pos_lnum + 1
    }
}

(* part 1 *)
let int =  '-'? ['0'-'9'] ['0'-'9']*

(* part 2 *)
let digit = ['0'-'9']
let frac = '.' digit*
let exp = ['e' 'E'] ['-' '+']? digit+
let float = digit* frac? exp?

(* part 3 *)
let white = [' ' '\t']+
let newline = '\n' | '\r' | "\r\n" 
let id = ['a'-'v' 'x'-'z'] ['a'-'z' 'A'-'Z' '0'-'9' '_']*


rule token = parse
| white    { token lexbuf }
| newline  { next_line lexbuf; token lexbuf }
| "ε" { EMPTY }
| "int" {INTT} 
| "bool" {BOOLT}
| "void" {VOIDT}
| "event" {EVENTKEY}
| "timeout" {TimeoutKEY} 
| "deadline" {DeadlineKEY}
| "delay" {DelayKEY}
| "assert" {ASSERTKEY}
| "interrupt" {InterruptKEY}
(*| "return" {RETURN}*)
| "|-" {ENTIL}
| "TRUE" { TRUE }
| "FALSE" { FALSE }
| "if" {IF}
| "else" {ELSE}
| "req:" {REQUIRE}
| "ens:" {ENSURE}
| "include" {INCLUDE}
| int      { INTE (int_of_string (Lexing.lexeme lexbuf)) }
| "true" { TRUEE (bool_of_string (Lexing.lexeme lexbuf))}
| "false" { FALSEE (bool_of_string (Lexing.lexeme lexbuf))}
| '"'      { read_string (Buffer.create 17) lexbuf }
| ['A'-'Z'] ['a'-'z' 'A'-'Z' '0'-'9' '_']* as str { EVENT str }
| id as str { VAR str }
| "≥" {GTEQ}
| "≤" {LTEQ}
| '>' {GT}
| '<' {LT}
| '=' {EQ}

| '^' { POWER }
| '+' { CHOICE }
| '.' { CONCAT }
| ':' {COLON}
| '"' { read_string (Buffer.create 17) lexbuf }
| '(' { LPAR }
| ')' { RPAR }
| '[' { LBrackets }
| ']' { RBrackets }
| '{' { LBRACK  }
| '}' { RBRACK }
| ',' { COMMA }
| ';' { SIMI }
| '-' { MINUS }
| '#' { SHARP }
| '_' {UNDERLINE}
| '?' {GUARD}
| '*' {KLEENE}
| '~' {NEGATION}
| "/*" {LSPEC}
| "*/" {RSPEC}
| "∨" {DISJ}
| "∧" {CONJ}
| "==" {EQEQ}
| "≥" {GTEQ}
| "≤" {LTEQ}
| "||" {LILOR}
| "//" { read_single_line_comment lexbuf }
| _ { raise (SyntaxError ("Unexpected char: " ^ Lexing.lexeme lexbuf)) }
| eof { EOF }

and read_single_line_comment = parse
  | newline { next_line lexbuf; token lexbuf } 
  | eof { EOF }
  | _ { read_single_line_comment lexbuf } 

(* part 5 *)
and read_string buf =
  parse
  | '"'       { STRING (Buffer.contents buf) }
  | '\\' '/'  { Buffer.add_char buf '/'; read_string buf lexbuf }
  | '\\' '\\' { Buffer.add_char buf '\\'; read_string buf lexbuf }
  | '\\' 'b'  { Buffer.add_char buf '\b'; read_string buf lexbuf }
  | '\\' 'f'  { Buffer.add_char buf '\012'; read_string buf lexbuf }
  | '\\' 'n'  { Buffer.add_char buf '\n'; read_string buf lexbuf }
  | '\\' 'r'  { Buffer.add_char buf '\r'; read_string buf lexbuf }
  | '\\' 't'  { Buffer.add_char buf '\t'; read_string buf lexbuf }
  | [^ '"' '\\']+
    { Buffer.add_string buf (Lexing.lexeme lexbuf);
      read_string buf lexbuf
    }
  | _ { raise (SyntaxError ("Illegal string character: " ^ Lexing.lexeme lexbuf)) }
  | eof { raise (SyntaxError ("String is not terminated")) }
