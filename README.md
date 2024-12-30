# Unexpected Behavior with std::vector<bool>

This repository demonstrates a common, yet subtle, issue encountered when using `std::vector<bool>` in C++.  `std::vector<bool>` is specialized to optimize memory usage by packing boolean values. However, this specialization sacrifices some of the standard vector interface, leading to potential problems if you're not aware of how it's implemented.

**The Problem:**
Direct access to individual elements of a `std::vector<bool>` doesn't always return a `bool` value directly. Instead, it involves bit manipulation, which can lead to unexpected behavior or errors if you assume the usual behavior of a standard vector.

**The Solution:**
The recommended approach is to avoid using `std::vector<bool>` if direct access to individual elements is needed. Instead, use `std::vector<char>` or other types as a more intuitive alternative. 