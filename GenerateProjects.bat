@echo off
call vendor\bin\premake\premake5.exe vs2017
call vendor\bin\premake\premake5.exe vs2017
PAUSE
IF %ERRORLEVEL% NEQ 0 (
  PAUSE
)