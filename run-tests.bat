ECHO off
ECHO.
ECHO.	
ECHO       --------- EX1 Tests -----------
ECHO.
ECHO Compiling files...
gcc -Wextra -Wall -Wvla -std=c99 ..\encrypt.c -o encrypt
gcc -Wextra -Wall -Wvla -std=c99 ..\my_sin.c -o my_sin
gcc -Wextra -Wall -Wvla -std=c99 ..\my_cos.c -o my_cos
ECHO.
ECHO Stating tests...
java -jar SimpleTest.jar "%cd%"
ECHO.
pause