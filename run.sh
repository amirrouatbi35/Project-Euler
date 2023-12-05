#!/bin/bash

# Prompt the user for the problem number
read -p "Enter the problem number: " problem_number

# Set the source file and output file names
source_file="C:/Users/Newt573/OneDrive/Bureau/PE/Problem${problem_number}/Problem${problem_number}.cpp"
output_file="C:/Users/Newt573/OneDrive/Bureau/PE/Problem${problem_number}/Problem${problem_number}.o"

# Check if the source file exists
if [ ! -e "$source_file" ]; then
    echo "Error: Source file $source_file not found."
    exit 1
fi

# Compile the source file
g++ "$source_file" -o "$output_file"

# Check if compilation was successful
if [ $? -eq 0 ]; then
    # Execute the compiled program
    "$output_file"
else
    echo "Compilation failed."
fi

read -p "Enter the problem number: " problem_number
