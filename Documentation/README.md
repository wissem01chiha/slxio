<!-- omit in toc -->
# Slxio Documentation Kit 

- [1.0 Sphinx Documentation](#10-sphinx-documentation)

## 1.0 Sphinx Documentation
To generate documentation, you need at least **Python 3.12** and **pip** installed.  

From the project root directory, run:

On Windows:
```bash
./doc.bat -sphinx
```

On Unix/Linux:
```bash
./doc -sphinx
```

The script will check for Python, Sphinx, and potentially other system requirements needed to 
generate the documentation pages.

To change the output location,
```bash
./doc.bat -build /specific/path
```
