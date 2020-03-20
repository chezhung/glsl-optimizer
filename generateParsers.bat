@ECHO OFF

SET FLEX_PATH=win_flex_bison\win_flex.exe
SET BISON_PATH=win_flex_bison\win_bison.exe

%FLEX_PATH% --nounistd -osrc/glsl/glcpp/glcpp-lex.c src/glsl/glcpp/glcpp-lex.l
%FLEX_PATH% --nounistd -osrc/glsl/glsl_lexer.cpp src/glsl/glsl_lexer.ll
%BISON_PATH% -v -o "src/glsl/glcpp/glcpp-parse.c" -p "glcpp_parser_" --defines=src/glsl/glcpp/glcpp-parse.h src/glsl/glcpp/glcpp-parse.y
%BISON_PATH% -v -o "src/glsl/glsl_parser.cpp" -p "_mesa_glsl_" --defines=src/glsl/glsl_parser.h src/glsl/glsl_parser.yy

pause