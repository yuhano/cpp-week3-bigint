﻿# Set the target directory
$targetDirectory = "C:\devCode\c++\w3\bigint"

# Change to the target directory
Set-Location -Path $targetDirectory -ErrorAction Stop

# Compile .cpp files to .o object files
Get-ChildItem -Filter *.cpp | ForEach-Object {
    g++ -Werror -c $_.Name
    if ($LASTEXITCODE -ne 0) { exit $LASTEXITCODE }
}

# Link .o files to create main.exe
$oFiles = Get-ChildItem -Filter *.o | ForEach-Object { $_.Name }
g++ -o main.exe $oFiles
if ($LASTEXITCODE -ne 0) { exit $LASTEXITCODE }

# Optionally, run the executable
./main.exe

