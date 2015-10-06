pdflatex -shell-escape --aux-directory=.\_aux %~n0.tex
bibtex8 -B -c utf8cyrillic.csf .\_aux\%~n0
pdflatex -shell-escape --aux-directory=.\_aux %~n0.tex
pdflatex -shell-escape --aux-directory=.\_aux %~n0.tex
