#!/usr/bin/env python3
import os
import numpy as np

test_arrays = {
    "int8_1x2x3": np.arange(6, dtype=np.int8).reshape(1, 2, 3),
    "float32_4x4": np.arange(16, dtype=np.float32).reshape(4, 4),
    "bool_2x2": np.array([[True, False], [False, True]], dtype=bool),
    "int16_range": np.arange(100, dtype=np.int16),
    "complex64_3x3": np.arange(9, dtype=np.complex64).reshape(3, 3),
}

script_dir = os.path.dirname(os.path.abspath(__file__))
data_dir = os.path.join(script_dir, "data")
os.makedirs(data_dir, exist_ok=True)

print("using numpy version:", np.__version__)
print("saving test data into:", data_dir)

for name, arr in test_arrays.items():
    fname = os.path.join(data_dir, f"{name}.npy")
    np.save(fname, arr)
    print("saved:", fname, "shape:", arr.shape, "dtype:", arr.dtype)

with open(os.path.join(data_dir ,'numpy_version.txt'), 'w') as file:
    file.write(np.__version__)