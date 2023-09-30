@echo off
cd %~dp0

echo Deleting all .exe files in the current directory and its subdirectories...

for /r %%i in (*.exe) do (
    del "%%i"
)

echo All .exe files have been deleted.
pause
