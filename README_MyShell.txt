# MyShell - A Custom Shell in C
A lightweight, minimalistic shell (`MyShell`) written in C, supporting **process control, command execution, built-in commands (`cd`, `exit`)**, and more. 🚀  

---

## 📌 Features
✅ **Execute System Commands** (`ls`, `echo`, `mkdir`, etc.)  
✅ **Built-in Commands** (`cd`, `exit`)  
✅ **Process Handling** (`fork()`, `execvp()`, `waitpid()`)  
✅ **Interactive Prompt** with **Error Handling**  
✅ **Memory Management** (`malloc()`, `free()`)  
✅ **Simple Command Parser**  

---

## 📂 Project Structure
```
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
```

---

## 📜 How MyShell Works
1. **Reads user input** from the terminal.  
2. **Parses** the input into commands and arguments.  
3. **Handles built-in commands** (`cd`, `exit`).  
4. **Creates a child process (`fork()`)** for external commands.  
5. **Executes commands** using `execvp()`.  
6. **Waits for process completion (`waitpid()`)** before showing a new prompt.  

---

## 🛠️ Installation & Usage
### 📌 Build MyShell
```sh
git clone https://github.com/pragadeesh0720/MyShell-.git
cd MyShell-
make
```
### 📌 Run MyShell
```sh
./my_shell
```

---

## 📌 Supported Commands
| Command     | Description |
|------------|-------------|
| `ls -l`    | Lists files in the current directory |
| `mkdir test` | Creates a new directory |
| `cd /path` | Changes directory |
| `echo "Hello"` | Prints text |
| `exit` | Exits the shell |

---

## 📜 Example Usage
```
$ ./my_shell
MyShell> ls -l
MyShell> cd /home/user
MyShell> echo "Hello, Shell!"
MyShell> exit
```

---

## 📌 Key C Concepts Used
✔ **System Calls** (`fork()`, `execvp()`, `waitpid()`, `chdir()`)  
✔ **Memory Allocation** (`malloc()`, `free()`)  
✔ **String Manipulation** (`strtok()`, `strcmp()`)  
✔ **Process Management** (Parent-child processes)  

---


