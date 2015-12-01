.SUFFIXES: .tex .pdf .html

PRODUCTS=instructions.pdf instructions.dvi instructions.html instructions.md

%.pdf:%.tex
	pdflatex $^

%.dvi:%.tex
	latex $^

%.html:%.tex
	pandoc -o $@ $^

%.md:%.tex
	pandoc -o $@ $^


all: $(PRODUCTS)

clean:
	rm -f *~
	rm -f $^
	rm -f $(PRODUCTS)
	rm -f texput.log instructions.aux instructions.log
