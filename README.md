# Advanced User Registration and Authentication System

## Overview
This project is an advanced user registration and authentication system built in C++. It provides functionality for user registration, secure login with two-factor authentication (2FA) via email, and password management, including secure password storage and password change features. The project also includes a Bash script for sending One-Time Passwords (OTPs) using an SMTP server, and Git for version control.

## Table of Contents
- [Overview](#overview)
- [Features](#features)
- [Project Structure](#project-structure)
- [Tools and Technologies](#tools-and-technologies)
- [Installation](#installation)
- [Usage](#usage)
- [Security Considerations](#security-considerations)
- [Version Control](#version-control)
- [Contributing](#contributing)
- [License](#license)

## Features
### User Registration:
- Captures first name, last name, email, and password.
- Ensures password confirmation to prevent mistyped passwords.
- Stores user information securely in a file.

### User Login:
- Password-based authentication.
- Two-factor authentication (2FA) using an OTP sent to the registered email.
- Secure password comparison to prevent unauthorized access.

### Password Management:
- Allows users to change their password.
- Ensures the new password is different from the old one.
- Stores the new password securely.

### Bash Script Integration:
- A Bash script (email.sh) is used to send OTPs via email using an SMTP server.

## Project Structure
- **main.cpp**:
  - Contains the core logic for user registration, login, and password management.
  - Implements classes such as `registerid`, `loginhere`, and `changepassword`.
  
- **email.sh**:
  - A Bash script that handles sending OTPs to the user's email.
  - Prompts the user to set up their SMTP credentials.

- **system.txt**:
  - A file used to store user information securely (first name, last name, email, and hashed password).

- **database.sh**:
  - A Bash script that can be extended to manage database interactions or other system-level operations.

## Tools and Technologies
- **Programming Language**: C++
  - Standard C++ libraries such as `<iostream>`, `<cstdlib>`, `<fstream>`, and `<cstring>` are utilized.
  
- **Shell Scripting**: Bash
  - Used for handling email sending and potential future automation tasks.
  
- **Version Control**: Git
  - Tracks changes in the codebase, allowing for collaborative development and version tracking.

## Installation
### Prerequisites
- **C++ Compiler**: Ensure you have a C++ compiler installed (e.g., g++).
- **Bash**: Available by default on Linux and macOS, or via Git Bash on Windows.
- **SMTP Server**: Set up an SMTP server or use an existing one to send OTP emails.

### Compilation
To compile the C++ code, execute the following command in your terminal:
```bash
g++ -o user_auth_system main.cpp
```

### SMTP Configuration
Ensure that your SMTP server details are correctly set up in the email.sh script.  
The script will prompt for your email and send the OTP when executed.

## Usage
### Registration
1. Run the compiled program:
   ```bash
   ./user_auth_system
   ```
2. Select the option to register.
3. Enter your first name, last name, email, and password. Confirm the password to complete registration.

### Login
1. Select the option to log in.
2. Enter your password.
3. Check your email for the OTP sent by the system.
4. Enter the OTP to complete the login process.

### Change Password
1. Select the option to change your password.
2. Enter the new password and confirm it.
3. Ensure the new password is not the same as the old one.

## Security Considerations
- **Password Storage**:
  - Although the current implementation stores passwords in plaintext, consider using a hashing algorithm (e.g., SHA-256) to securely store passwords.

- **OTP Security**:
  - Ensure that the OTP sent via email is only valid for a short period and for a single use to enhance security.

- **Input Validation**:
  - Implement additional input validation to prevent injection attacks and other vulnerabilities.

## Version Control
### Git Workflow
1. **Initialize Git**:
   ```bash
   git init
   ```
2. **Stage Changes**:
   ```bash
   git add .
   ```
3. **Commit Changes**:
   ```bash
   git commit -m "Initial commit"
   ```
4. **Create Branches**:
   Follow the Git flow model by creating feature branches:
   ```bash
   git checkout -b feature/new-feature
   ```
5. **Push to Repository**:
   ```bash
   git push origin main
   ```

## Contributing
Contributions are welcome! Please follow these steps:
1. Fork the repository.
2. Create a feature branch (`git checkout -b feature/YourFeature`).
3. Commit your changes (`git commit -m 'Add YourFeature'`).
4. Push to the branch (`git push origin feature/YourFeature`).
5. Open a pull request.

## License
This project is licensed under the MIT License. See the LICENSE file for details.
