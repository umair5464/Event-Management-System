# Event Management System

## 🚀 Description

A simple command-line application built in C++ to manage event bookings. This system provides separate functionalities for **administrators** to view all booked events and for **users** to sign up, log in, book new events, and view their own booked events.

## ✨ Features

* **Admin Panel:**
    * Secure admin login.
    * View details of all events booked through the system.
* **User Panel:**
    * User registration (Sign Up).
    * User authentication (Login).
    * Book new events by providing details like organizer name, phone number, event name, type, date, time, budget, and number of attendees.
    * View a list of events booked by the logged-in user.
* **Console-Based Interface:** Easy-to-navigate menu-driven interface.

## 🛠️ How to Compile and Run

### Prerequisites

* A C++ compiler that supports **C++11 or later** (e.g., g++, Clang, MSVC).

### Compilation

1.  **Open your terminal or command prompt.**
2.  **Navigate to the directory** where you have saved `Event Management.cpp`.
3.  **Compile the code** using your C++ compiler. For example, with g++:
    ```bash
    g++ "Event Management.cpp" -o event_management
    ```
    *(If your filename has spaces, **ensure it's in quotes** as shown.)*

### Execution

1.  After successful compilation, an executable file (e.g., `event_management` or `event_management.exe` on Windows) will be created.
2.  **Run the executable:**
    * On Linux/macOS:
        ```bash
        ./event_management
        ```
    * On Windows:
        ```bash
        .\event_management.exe
        ```
        or
        ```bash
        event_management.exe
        ```
3.  **Follow the on-screen prompts** to interact with the application.

## 📂 Project Structure (Optional)

* `Event Management.cpp`: Contains all the C++ source code for the application.
* `README.md`: **This file** - provides information about the project.
    *(You can add more files here as your project grows, e.g., ALGORITHM.md, LICENSE)*

## 📝 Notes

* The event data and user credentials are **stored in memory** (using static arrays) and will be **lost when the program terminates**. This is a simple implementation for demonstration purposes.
* Admin credentials are currently **hardcoded** in the `Admin` class.

## 🤝 Contributing (Optional)

Contributions, issues, and feature requests are welcome! Feel free to check issues page. This project is in group of 5.

## 📜 License (Optional)

This project is [UNLICENSED](LICENSE.md) / licensed under the [MIT License](LICENSE.md) - see the `LICENSE.md` file for details. *(**Choose one** or specify your license)*
