#!/bin/bash

# Prompt for filename
read -p "Enter the C++ filename (without extension): " filename

# Add .cpp extension
file="${filename}.cpp"

# Check if file already exists
if [ -f "$file" ]; then
    echo "File '$file' already exists. Aborting to prevent overwrite."
    exit 1
fi

# Write boilerplate code
cat <<EOF > "$file"
#include <iostream>
using namespace std;

int main() {
    cout << "" << endl;
    return 0;
}
EOF

echo "Boilerplate C++ code created in '$file'. Exiting script."
exit 0
