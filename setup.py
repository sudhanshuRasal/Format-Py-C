from distutils.core import setup, Extension
setup(name= 'format', version='1.0', \
      ext_modules = [Extension('format', ['format.py.c'])]
)
