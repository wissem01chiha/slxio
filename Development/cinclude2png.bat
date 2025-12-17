@echo off
set "CUR_DIR=%~dp0"
set "CUR_DIR=%CUR_DIR:~0,-1%"
for %%i in ("%CUR_DIR%") do set "BASE_DIR=%%~dpi"

cd /d "%BASE_DIR%"

echo Current Directory: %CUR_DIR%
echo Base Directory: %BASE_DIR%

cd %BASE_DIR%include\slxio

perl "%CUR_DIR%\cinclude2dot.pl" ^
  --quotetypes quote ^
  --exclude StateflowTarget.h ^
  --exclude SLXIO.h ^
  --exclude TargetLinkUtils.h ^
  --exclude StateflowTransition.h ^
  --exclude StateflowTransition.h ^
  --exclude StateflowNodeBase.h ^
  --exclude StateflowState.h ^
  --exclude StateflowMachine.h ^
  --exclude StateflowDeclBase.h ^
  --exclude StateflowChart.h ^
  --exclude TargetLinkUtils.h ^
  --exclude TargetLinkUtils.h ^
  --exclude TargetLinkUtils.h ^
  --exclude Conf.h.in ^
  --exclude vector ^
  --exclude string ^
  Point.h ^
  Platform.h ^
  > cinclude2png.dot

REM Move the ouput file from srcto current dev-kit directory
Move  "%BASE_DIR%include\slxio\cinclude2png.dot" "%CUR_DIR%\"

cd %CUR_DIR%
if exist "cinclude2png.png" (
    del "cinclude2png.png"

)

dot -Tpng -Gsize="120,50" -Gfontsize=45  -Nfontsize=45 -Nstyle=filled ^
  -Nfillcolor=lightgray  -Nfontname="Helvetica" ^
  -Efontname="Helvetica" -Epenwidth=2 -Gdpi=150 ^
  -Gfontname="Helvetica" ^ ./cinclude2png.dot -o cinclude2png.png