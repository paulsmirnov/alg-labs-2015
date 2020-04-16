pdflatex -shell-escape --aux-directory=.\_aux %~n0-cover.tex
if errorlevel 1 goto end

pdflatex -shell-escape --aux-directory=.\_aux %~n0.tex
if errorlevel 1 goto end
bibtex8 -B -c utf8cyrillic.csf .\_aux\%~n0
if errorlevel 1 goto end
pdflatex -shell-escape --aux-directory=.\_aux %~n0.tex
if errorlevel 1 goto end
pdflatex -shell-escape --aux-directory=.\_aux %~n0.tex
if errorlevel 1 goto end
rem pdftk.exe A=alg-labs-2015-cover.pdf B=alg-labs-2015.pdf cat A1-2 B A3 output alg-labs-2015-full.pdf
if errorlevel 1 goto end
start alg-labs-2015.pdf

:end
