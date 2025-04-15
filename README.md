# How to compile this project?
- Step 1: Download zig at here: [Zig for Linux](https://ziglang.org/builds/zig-linux-x86_64-0.15.0-dev.345+ec2888858.tar.xz) or at here if you use Windows: [Zig for Windows](https://ziglang.org/builds/zig-windows-x86_64-0.15.0-dev.345+ec2888858.zip)
- Step 2: Extract the archive
- Step 3: Add Zig to PATH
- Step 4: Compile the main.cpp file (go to the directory that containes this main.cpp): `zig c++ -target x86_64-linux-gnu -I. main.cpp -o main` (for Linux) or `zig c++ -target x86_64-windows-gnu -I. main.cpp -o main.exe` (for Windows)
- Step 5: Run the file with `./main` on Linux or `.\main.exe` in Windows

Warning: This file can be destructing the computer (for the RAM and CPU)

# Linux distro to build this file
Ubuntu (24.04)
