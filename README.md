# C++ Debugging Environment Setup on Ubuntu

This README provides instructions for setting up a C++ debugging environment on Ubuntu using Visual Studio Code.

## Prerequisites

Ensure you have the following installed on your Ubuntu system:

- Visual Studio Code
- Git (optional, but recommended)

## Installation Steps

1. **Update Package List**
   
   Open a terminal and run:
   ```
   sudo apt update
   ```

2. **Install Build Essential**
   
   This package includes GCC, G++, and Make:
   ```
   sudo apt install build-essential
   ```

3. **Install GDB (GNU Debugger)**
   ```
   sudo apt install gdb
   ```

4. **Install Visual Studio Code Extensions**
   
   Open VS Code and install the following extensions:
   - C/C++ (by Microsoft)
   - C/C++ Extension Pack (optional, but recommended)

## Configuration

1. **Create a New Project Directory**
   ```
   mkdir cpp_project
   cd cpp_project
   ```

2. **Create a Sample C++ File**
   ```
   echo "#include <iostream>
   
   int main() {
       std::cout << \"Hello, World!\" << std::endl;
       return 0;
   }" > main.cpp
   ```

3. **Open the Project in VS Code**
   ```
   code .
   ```

4. **Create launch.json**
   
   - Press `Ctrl+Shift+P`, type "C/C++", and select "Edit Configurations (JSON)"
   - This will create a `.vscode/launch.json` file. Ensure it contains the following:

   ```json
   {
       "version": "0.2.0",
       "configurations": [
           {
               "name": "g++ - Build and debug active file",
               "type": "cppdbg",
               "request": "launch",
               "program": "${fileDirname}/${fileBasenameNoExtension}",
               "args": [],
               "stopAtEntry": false,
               "cwd": "${fileDirname}",
               "environment": [],
               "externalConsole": false,
               "MIMode": "gdb",
               "setupCommands": [
                   {
                       "description": "Enable pretty-printing for gdb",
                       "text": "-enable-pretty-printing",
                       "ignoreFailures": true
                   }
               ],
               "preLaunchTask": "C/C++: g++ build active file",
               "miDebuggerPath": "/usr/bin/gdb"
           }
       ]
   }
   ```

5. **Create tasks.json**
   
   - In the `.vscode` folder, create a `tasks.json` file with the following content:

   ```json
   {
       "version": "2.0.0",
       "tasks": [
           {
               "type": "shell",
               "label": "C/C++: g++ build active file",
               "command": "/usr/bin/g++",
               "args": [
                   "-g",
                   "${file}",
                   "-o",
                   "${fileDirname}/${fileBasenameNoExtension}"
               ],
               "options": {
                   "cwd": "${workspaceFolder}"
               },
               "problemMatcher": [
                   "$gcc"
               ],
               "group": {
                   "kind": "build",
                   "isDefault": true
               }
           }
       ]
   }
   ```

## Debugging

1. Open your C++ file in VS Code.
2. Set a breakpoint by clicking on the left side of the line numbers.
3. Press F5 or go to Run > Start Debugging.

Your program should now build and stop at the breakpoint you set.

## Troubleshooting

If you encounter any issues:
1. Ensure all required software is correctly installed.
2. Check that the paths in `launch.json` and `tasks.json` are correct.
3. Restart VS Code after making configuration changes.

For further assistance, consult the VS Code documentation or seek help in the VS Code GitHub issues.