parse_args is responsible for parsing/interpreting the command line arguments passed to the application, and shall return a std::pair with what to print, and how many times to print it.

parse_args shall handle all input errors by returning -1 as the second value of the returned std::pair, as well as printing a suitable error message on stderr.

hello is responsible for printing the hello world-string on stdout with the following semantics;

If the value zero is passed as the second parameter, nothing shall be printed.

If a value greater than zero is passed as the second argument (count), "Hello, " shall be printed followed by count space-delimited occurrences of the first argument.

The output shall end with an exclamation mark, followed by a new-line.

Note: hello ("KTH", 3) shall print Hello, KTH KTH KTH! (see sample invocations of an example program below) -

Correct output from your program shall be printed through std::cout, whereas potential error diagnostics (detected by parse_args) shall be printed through std::cerr.

