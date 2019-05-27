@REM This script allows a 3rd party IDE to use cyelftool.exe to perform
@REM the pre processing that is necessary to extract the bootloader
@REM data from the *.elf file for use when building the bootloadable
@REM application.
@REM NOTE: This script is auto generated. Do not modify.
@REM This is the elf path used by creator, elf path might change depending on IDE.
@REM NOTE: this variable may need to be modified if bootloader project is exported.
@REM NOTE: This script is auto generated. Do not modify.
set ELF_FILE_PATH=".\bootloader.cydsn\CortexM0p\ARM_GCC_541\Debug\bootloader.elf"
.\Export\cyelftool.exe -E %ELF_FILE_PATH% --flash_row_size 256 --flash_size 131072 --flash_offset 0x00000000 --flash_array_size 131072 
@IF %errorlevel% NEQ 0 EXIT /b %errorlevel%
move /y cybootloader.c Generated_Source\PSoC4\cybootloader.c
@IF %errorlevel% NEQ 0 EXIT /b %errorlevel%
move /y cybootloader.icf Generated_Source\PSoC4\cybootloader.icf
@IF %errorlevel% NEQ 0 EXIT /b %errorlevel%
