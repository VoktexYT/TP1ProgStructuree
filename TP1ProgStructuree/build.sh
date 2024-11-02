cd build
cmake ..
cmake --build .

read
clear

./test

exit_code=$?

if [ $exit_code -eq 0 ]; then
	./out
else
	echo "Error in unit test. Close the program..."
fi

