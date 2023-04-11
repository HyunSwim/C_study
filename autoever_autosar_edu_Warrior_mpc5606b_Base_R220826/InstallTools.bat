@echo OFF
set STARTTIME=%TIME%

set REMOTE_BASE_PATH=%1
set LOCAL_BASE_PATH=D:\ts_mirr

set TOOLS[0]=python\Portable_Python_2.7.6.1
set TOOLS[1]=scons\scons-local-2.3.4
set TOOLS[2]=gh\PPC.V614.14p
set TOOLS[3]=xml\eb-tresos-MPC560XB_MCAL4.0_RTM_1.0.0_HF11
set TOOLS[4]=t32\T32_mpc_130108




for /F "tokens=2 delims==" %%s in ('set TOOLS[') do (
  echo ===== Copy "%%s" =====
  xcopy "%REMOTE_BASE_PATH%\%%s" "%LOCAL_BASE_PATH%\%%s\" /EYD
)



set ENDTIME=%TIME%
set ENDTIMESTAMP=%ENDTIME%
if %STARTTIME:~0,2% leq 9 (
  set STARTHOUR=0%STARTTIME:~1,1%
) else (
  set STARTHOUR=%STARTTIME:~0,2%
)
if %ENDTIME:~0,2% leq 9 (
  set ENDHOUR=0%ENDTIME:~1,1%
) else (
  set ENDHOUR=%ENDTIME:~0,2%
)

set /A STARTTIME=(1%STARTHOUR%-100)*360000 + (1%STARTTIME:~3,2%-100)*6000 + (1%STARTTIME:~6,2%-100)*100 + (1%STARTTIME:~9,2%-100)
set /A ENDTIME=(1%ENDHOUR%-100)*360000 + (1%ENDTIME:~3,2%-100)*6000 + (1%ENDTIME:~6,2%-100)*100 + (1%ENDTIME:~9,2%-100)
set /A DURATION=%ENDTIME%-%STARTTIME%
set /A DURATIONH=%DURATION% / 360000
set /A DURATIONM=(%DURATION% - %DURATIONH%*360000) / 6000
set /A DURATIONS=(%DURATION% - %DURATIONH%*360000 - %DURATIONM%*6000) / 100
set /A DURATIONHS=(%DURATION% - %DURATIONH%*360000 - %DURATIONM%*6000 - %DURATIONS%*100)
rem some formatting
if %DURATIONH% LSS 10 set DURATIONH=0%DURATIONH%
if %DURATIONM% LSS 10 set DURATIONM=0%DURATIONM%
if %DURATIONS% LSS 10 set DURATIONS=0%DURATIONS%
if %DURATIONHS% LSS 10 set DURATIONHS=0%DURATIONHS%

echo Done(%ENDTIMESTAMP%, %DURATIONH%:%DURATIONM%:%DURATIONS%,%DURATIONHS%)
if [%1]==[] pause