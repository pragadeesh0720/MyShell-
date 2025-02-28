# MyShell>
This is a lightweight and minimalist shell built in C, designed to understand and execute basic Linux/Unix commands. It mimics the behavior of a traditional shell by providing a simple interface to interact with the system.

📌 Features

✅ Execute System Commands (ls, echo, mkdir, etc.)
✅ Built-in Commands (cd, exit)
✅ Process Handling (fork(), execvp(), waitpid())
✅ Interactive Prompt with Error Handling
✅ Memory Management (malloc(), free())
✅ Simple Command Parser
📂 Project Structure

MyShell/
│── src/
│   ├── main.c         # Entry point of the shell
│   ├── executor.c     # Handles command execution
│   ├── parser.c       # Parses user input
│   ├── builtins.c     # Handles built-in commands (cd, exit)
│── include/
│   ├── executor.h
│   ├── parser.h
│   ├── builtins.h
│── Makefile           # Build automation
│── README.md          # Documentation

📜 How MyShell Works

    Reads user input from the terminal.
    Parses the input into commands and arguments.
    Handles built-in commands (cd, exit).
    Creates a child process (fork()) for external commands.
    Executes commands using execvp().
    Waits for process completion (waitpid()) before showing a new prompt.

🛠️ Installation & Usage
📌 Build MyShell

git clone https://github.com/your-username/MyShell.git
cd MyShell
make

📌 Run MyShell

./my_shell

📌 Supported Commands
Command	Description
ls -l	Lists files in the current directory
mkdir test	Creates a new directory
cd /path	Changes directory
echo "Hello"	Prints text
exit	Exits the shell
📜 Example Usage

$ ./my_shell
MyShell> ls -l
MyShell> cd /home/user
MyShell> echo "Hello, Shell!"
MyShell> exit

📌 Key C Concepts Used

✔ System Calls (fork(), execvp(), waitpid(), chdir())
✔ Memory Allocation (malloc(), free())
✔ String Manipulation (strtok(), strcmp())
✔ Process Management (Parent-child processes)

