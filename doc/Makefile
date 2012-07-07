.PHONY: help clean html pdf

help:
	@echo "Use \`make <target>' such that <target> is one of the following:"
	@echo "- html: Generate documentation in HTML format."
	@echo "- pdf:  Generate documentation in PDF format."

clean:
	rm -rf build/*

html:
	sphinx-build -b html -d build/doctrees src
	@echo
	@echo "Build complete. The HTML document is located in build/html."

pdf:
	sphinx-build -b latex -d build/doctrees src
	make -C build/latex all-pdf
	@echo "Build complete. The PDF document is located in build/pdf."
