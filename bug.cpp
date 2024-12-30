std::vector<bool> vec(1000); // Creates a specialized vector of bool
for (int i = 0; i < 1000; ++i) {
  vec[i] = true; // Accessing elements like a regular vector
}
// ...later in the code...
bool b = vec[500]; // Accessing an element