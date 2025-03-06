# 📌 Queue Implementation in C  

🚀 **This project is a complete implementation of the Queue data structure in C, built from scratch without using any built-in libraries.**  
It provides a **menu-driven program** that allows users to perform various queue operations easily.  

---

## 🔹 Features  
- ✔️ **Enqueue & Dequeue operations** – Insert and remove elements from the queue.  
- ✔️ **Get Queue Size** – Retrieve the number of elements currently stored.  
- ✔️ **Retrieve Front & Rear Elements** – Get the first (Front) and last (Rear) elements in the queue.  
- ✔️ **Copy Queue** – Create an exact duplicate of the current queue without modifying it.  
- ✔️ **Destroy Queue** – Clear all stored elements.  
- ✔️ **Print Queue** – Display the current elements in the queue at any time.  

---

## 🔹 How to Run  
### 1️⃣ Run the program on your system  
1. **Ensure you have a C Compiler like `GCC` installed.**  
2. **Download or clone the repository from GitHub:**  
   ```bash
   git clone <repository_link>
   cd <repository_folder>
   ```
3. **Compile the program using `gcc`:**  
   ```bash
   gcc main.c queue.c -o queue_program
   ```
4. **Run the program:**  
   ```bash
   ./queue_program
   ```

---

## 🔹 Menu Options Explained  
📜 Once you run the program, you will see the following menu:  
```plaintext
===== Queue Menu =====
1. Read and Enqueue
2. Dequeue
3. Queue Size
4. First Element (Front)
5. Last Element (Rear)
6. Copy Queue
7. Destroy Queue
8. Print Queue
9. Print Copy Queue
10. Exit
Enter your choice:
```
Simply enter a number to perform the corresponding queue operation.

### 📌 Example Usage  
- 🔹 **Enqueue an element to the queue**  
  If you select **(1 - Read and Enqueue)** and enter `10`, the value `10` will be added to the queue.  

- 🔹 **Dequeue an element from the queue**  
  If you select **(2 - Dequeue)**, the front element will be removed and displayed.  

- 🔹 **Copy the queue**  
  If you select **(6 - Copy Queue)**, a new queue identical to the original one will be created.  

- 🔹 **Print the queue contents**  
  If you select **(8 - Print Queue)**, all currently stored elements will be displayed.  

---

## 🔹 Project Files  
📂 **main.c** – Contains the menu and user interaction logic.  
📂 **queue.h** – Defines function prototypes and the queue structure.  
📂 **queue.c** – Implements all queue operations such as `enqueue`, `dequeue`, `copy_queue`, etc.  

---

## 🎯 Project Purpose  
This project aims to provide a **practical implementation of the Queue data structure** in C. It is ideal **for students and beginners** who want to understand how to implement data structures from scratch.

💡 **You are welcome to contribute and improve this project on GitHub!** 😊  

---
