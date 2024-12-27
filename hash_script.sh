#!/bin/bash
 array=()
 
 for i in {0,8,2}; do
   array+=("$i")
 done


 for ((i = 0; i < 4; i++)); do
    random_index=$((RANDOM % ${#array[@]}))
    random_number+="${array[$random_index]}"
   done
echo "$random_number"

touch hash_output.txt

echo -n $random_number | shasum -a 256 >> hash_output.txt

