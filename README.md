For Windows:

- Compile txt2mol.sln in VC9+
- Test the output binary:
    txt2mol.exe TEST.TXT

For Linux:

- Download and install the Visual C++ 9.0 redistributable http://www.microsoft.com/download/en/details.aspx?id=29

    wget http://download.microsoft.com/download/1/1/1/1116b75a-9ec3-481a-a3c8-1777b5381140/vcredist_x86.exe -O /tmp/vcredist_x86.exe
    wine /tmp/vcredist_x86.exe

- Test the pre-built binary:

    cd sample
    ./txt2mol TEST.TXT

