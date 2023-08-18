#!/bin/bash

# Create the destination directory if it doesn't exist
mkdir -p ./0x18-dynamic_libraries

# Array of function names to search for
functions=(
"_putchar"
"_islower"
"_isalpha"
"_abs"
"_isupper"
"_isdigit"
"_strlen"
"_puts"
"_strcpy"
"_atoi"
"_strcat"
"_strncat"
"_strncpy"
"_strcmp"
"_memset"
"_memcpy"
"_strchr"
"_strspn"
"_strpbrk"
"_strstr"
)

# Search for the functions in the parent directory and its subdirectories
for function in "${functions[@]}"; do
    content=$(grep -r -h -s -oP "(?<=${function}\().*?(?=\))" .)
    if [ -n "$content" ]; then
        echo "$content" >> "./0x18-dynamic_libraries/${function}.c"
    fi
done

echo "Content copied successfully!"

