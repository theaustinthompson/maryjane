:: This file was generated based on C:/Users/borde_000/AppData/Local/Fusetools/Packages/UnoCore/1.7.1/Targets/Android/build.bat.
:: WARNING: Changes might be lost if you edit this file directly.
@echo off
pushd "%~dp0"

:: #if #(JDK.Directory:IsSet)
set JAVA_HOME=C:\Program Files\Java\jdk1.8.0_91
:: #endif

call gradlew assembleDebug %* || goto ERROR
copy /Y app\build\outputs\apk\app-debug.apk maryjane.apk || goto ERROR
popd && exit /b 0

:ERROR
popd && exit /b 1
