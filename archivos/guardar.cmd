@echo off
title Cambiar Programas de inicio
ping localhost -n 2 >nul
Echo Bienvenido %name%
Echo .
Echo Procesando.....
Echo .
ping localhost -n 2 >nul

Echo .
Echo Espere por favor......
ping localhost -n 2 >nul

start shutdown.exe -R -F -T 07 -C "Reiniciando en 7 segundos"

pause