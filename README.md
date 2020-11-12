# DOT503_Assessment2
Simple application to test Version Control System

Setting up an automated script with GitHub actions.
On every push to the repository, the CI/CD Pipeline GitHub actions will read the script and build the test.
If the test doesn't pass, the script needs to be reconfigured.

The process is composed of 3 steps:
1 - CMake creates a 'make' file (.yml)
2 - 'Make file' creates the executable
3 - The executable (.exe) is then run
