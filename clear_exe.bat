@echo off
setlocal

set "targetFolder=%~dp0"

for /r "%targetFolder%" %%f in (*.exe) do (
    echo Deleting "%%f"
    del "%%f"
)

echo All .exe files deleted.

endlocal
