#!/usr/bin/env python

import sys
from numpy import load
from scipy.io import savemat

def main():

   assert len(sys.argv) > 1

   files = sys.argv[1:]

   for f in files:
      data = load(f)
      fn = f.replace('.npy','')
      fn = fn.replace('.','_')
      savemat(fn,{fn : data})

if __name__ == "__main__":
   main()