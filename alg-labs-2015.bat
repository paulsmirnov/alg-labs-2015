pdflatex -shell-escape --aux-directory=.\_aux %~n0.tex
if errorlevel 1 goto end
bibtex8 -B -c utf8cyrillic.csf .\_aux\%~n0
if errorlevel 1 goto end
pdflatex -shell-escape --aux-directory=.\_aux %~n0.tex
if errorlevel 1 goto end
pdflatex -shell-escape --aux-directory=.\_aux %~n0.tex
if errorlevel 1 goto end
start alg-labs-2015.pdf

:end
