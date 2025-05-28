<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Event Management System README</title>
    <style>
        body {
            font-family: -apple-system, BlinkMacSystemFont, "Segoe UI", Helvetica, Arial, sans-serif, "Apple Color Emoji", "Segoe UI Emoji";
            line-height: 1.6;
            color: #24292e;
            margin: 0;
            padding: 20px;
            background-color: #fff;
        }
        .container {
            max-width: 800px;
            margin: 0 auto;
            padding: 20px;
            border: 1px solid #e1e4e8;
            border-radius: 6px;
            background-color: #f6f8fa;
        }
        h1, h2, h3, h4, h5, h6 {
            margin-top: 24px;
            margin-bottom: 16px;
            font-weight: 600;
            line-height: 1.25;
        }
        h1 { font-size: 2em; border-bottom: 1px solid #eaecef; padding-bottom: .3em; }
        h2 { font-size: 1.5em; border-bottom: 1px solid #eaecef; padding-bottom: .3em; }
        h3 { font-size: 1.25em; }
        p { margin-top: 0; margin-bottom: 16px; }
        ul, ol { margin-top: 0; margin-bottom: 16px; padding-left: 2em; }
        li { margin-bottom: 0.25em; }
        code {
            padding: .2em .4em;
            margin: 0;
            font-size: 85%;
            background-color: rgba(27,31,35,.05);
            border-radius: 3px;
            font-family: "SFMono-Regular", Consolas, "Liberation Mono", Menlo, Courier, monospace;
        }
        pre {
            padding: 16px;
            overflow: auto;
            font-size: 85%;
            line-height: 1.45;
            background-color: #f6f8fa;
            border-radius: 3px;
            border: 1px solid #e1e4e8;
        }
        pre code {
            display: inline;
            padding: 0;
            margin: 0;
            overflow: visible;
            line-height: inherit;
            word-wrap: normal;
            background-color: transparent;
            border: 0;
        }
        strong { font-weight: 600; }
        a { color: #0366d6; text-decoration: none; }
        a:hover { text-decoration: underline; }
    </style>
</head>
<body>
    <div class="container">
        <h1>Event Management System</h1>

        <h2>🚀 Description</h2>
        <p>A simple command-line application built in C++ to manage event bookings. This system provides separate functionalities for <strong>administrators</strong> to view all booked events and for <strong>users</strong> to sign up, log in, book new events, and view their own booked events.</p>

        <h2>✨ Features</h2>
        <ul>
            <li><strong>Admin Panel:</strong>
                <ul>
                    <li>Secure admin login.</li>
                    <li>View details of all events booked through the system.</li>
                </ul>
            </li>
            <li><strong>User Panel:</strong>
                <ul>
                    <li>User registration (Sign Up).</li>
                    <li>User authentication (Login).</li>
                    <li>Book new events by providing details like organizer name, phone number, event name, type, date, time, budget, and number of attendees.</li>
                    <li>View a list of events booked by the logged-in user.</li>
                </ul>
            </li>
            <li><strong>Console-Based Interface:</strong> Easy-to-navigate menu-driven interface.</li>
        </ul>

        <h2>🛠️ How to Compile and Run</h2>

        <h3>Prerequisites</h3>
        <ul>
            <li>A C++ compiler that supports <strong>C++11 or later</strong> (e.g., g++, Clang, MSVC).</li>
        </ul>

        <h3>Compilation</h3>
        <ol>
            <li><strong>Open your terminal or command prompt.</strong></li>
            <li><strong>Navigate to the directory</strong> where you have saved <code>Event Management.cpp</code>.</li>
            <li><strong>Compile the code</strong> using your C++ compiler. For example, with g++:
                <pre><code>g++ "Event Management.cpp" -o event_management</code></pre>
                <em>(If your filename has spaces, <strong>ensure it's in quotes</strong> as shown.)</em>
            </li>
        </ol>

        <h3>Execution</h3>
        <ol>
            <li>After successful compilation, an executable file (e.g., <code>event_management</code> or <code>event_management.exe</code> on Windows) will be created.</li>
            <li><strong>Run the executable:</strong>
                <ul>
                    <li>On Linux/macOS:
                        <pre><code>./event_management</code></pre>
                    </li>
                    <li>On Windows:
                        <pre><code>.\\event_management.exe</code></pre>
                        or
                        <pre><code>event_management.exe</code></pre>
                    </li>
                </ul>
            </li>
            <li><strong>Follow the on-screen prompts</strong> to interact with the application.</li>
        </ol>

        <h2>📂 Project Structure (Optional)</h2>
        <ul>
            <li><code>Event Management.cpp</code>: Contains all the C++ source code for the application.</li>
            <li><code>README.md</code>: <strong>This file</strong> - provides information about the project.</li>
            <li><em>(You can add more files here as your project grows, e.g., ALGORITHM.md, LICENSE)</em></li>
        </ul>

        <h2>📝 Notes</h2>
        <ul>
            <li>The event data and user credentials are <strong>stored in memory</strong> (using static arrays) and will be <strong>lost when the program terminates</strong>. This is a simple implementation for demonstration purposes.</li>
            <li>Admin credentials are currently <strong>hardcoded</strong> in the <code>Admin</code> class.</li>
        </ul>

        <h2>🤝 Contributing (Optional)</h2>
        <p>Contributions, issues, and feature requests are welcome! Feel free to check issues page.</p>

        <h2>📜 License (Optional)</h2>
        <p>This project is <a href="LICENSE.md">UNLICENSED</a> / licensed under the <a href="LICENSE.md">MIT License</a> - see the <code>LICENSE.md</code> file for details. (<strong>Choose one</strong> or specify your license)</p>
    </div>
</body>
</html>
