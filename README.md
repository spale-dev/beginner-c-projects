# 🛠️ Beginner C Projects

A curated list of 5 C programming projects designed to gradually improve your understanding of the language. Each project includes a list of implementation steps, from easy to intermediate-difficult level.

---

## 1. 🧮 Command-Line Calculator (Easy)

**Goal:** Build a calculator that performs basic arithmetic via terminal input.

### Steps:
1. Prompt the user for two numbers and an operator.
2. Read input from the terminal.
3. Validate that the input is in the correct format.
4. Use control structures (`if` or `switch`) to determine which operation to perform.
5. Handle edge cases like division by zero.
6. Output the result of the operation.
7. (Optional) Add a loop for continuous calculation until the user exits.

---

## 2. 🎮 Text-Based Tic-Tac-Toe (Beginner-Intermediate)

**Goal:** Create a simple 2-player terminal game.

### Steps:
1. Design the game board using a 2D or 1D array.
2. Create a function to print the current state of the board.
3. Alternate turns between two players.
4. Accept and validate player moves.
5. Update the game board with the current move.
6. Check for win conditions after every move.
7. Check for a draw (board full without a winner).
8. Loop until there is a win or draw.
9. (Optional) Add an option to play again.

---

## 3. 📦 File Compression Tool (Run-Length Encoding) (Intermediate)

**Goal:** Compress a text file by encoding repeating characters.

### Steps:
1. Open and read an input `.txt` file using file I/O.
2. Load contents into memory or process it line-by-line.
3. Implement Run-Length Encoding (RLE) logic:
   - Track repeated characters.
   - Count them.
4. Build a compressed string based on the encoding.
5. Write the compressed result to a new output file.
6. Handle special characters like newlines or unique characters.
7. (Optional) Accept input/output file paths as command-line arguments.

---

## 4. 💻 Simple Shell (Intermediate)

**Goal:** Build a minimal shell that can execute user commands.

### Steps:
1. Display a custom shell prompt (e.g., `$`).
2. Read a line of input from the user.
3. Tokenize the input to separate the command and its arguments.
4. Create a child process using `fork()`.
5. Use `execvp()` (or similar) to execute the command in the child.
6. Use `wait()` in the parent to wait for the child to finish.
7. Handle built-in commands like `exit` or `cd`.
8. Keep the shell running in a loop until the user exits.

---

## 5. 🧠 Memory Allocator (Custom `malloc`/`free`) (Moderate-Difficult)

**Goal:** Simulate your own version of memory allocation and deallocation.

### Steps:
1. Design a fixed-size memory pool using a static array or system call like `sbrk()`.
2. Define a metadata structure to track each block (size, free/used).
3. Initialize the memory pool as one large free block.
4. Implement `my_malloc()`:
   - Find a suitable free block.
   - Split the block if it’s larger than needed.
   - Mark it as used.
5. Implement `my_free()`:
   - Mark the block as free.
   - Optionally merge adjacent free blocks (coalescing).
6. Maintain and update metadata for all blocks.
7. (Optional) Add debugging output to visualize memory usage.

---
