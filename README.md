# minitalk

A communication program in the form of a client and a server.

• The server must be started first. After its launch, it prints its PID.

• The client takes two parameters:
◦ The server PID.
◦ The string to send.
  
• The client sends the string passed as a parameter to the server.
Once the string has been received, the server prints it.

• The server displays the string pretty quickly.

• Your server receives strings from several clients in a row without
needing to restart.

• The communication between the client and the server is done only using
UNIX signals.

• Only uses these two signals: SIGUSR1 and SIGUSR2.
