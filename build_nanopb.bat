@echo off

set /p proto_path=proto path can use TAB and drag:

REM: set nanopb_out_path = .\nanopb_out

REM: %proto_bin_exec% --nanopb_out=.\nanopb_out %proto_path%

nanopb-0.4.8-windows-x86\generator-bin\protoc.exe --nanopb_out=.\out --proto_path=./ %proto_path%
