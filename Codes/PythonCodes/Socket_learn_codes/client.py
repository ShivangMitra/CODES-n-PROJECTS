import socket

HEADER = 64
PORT = 5050
FORMAT = 'utf-8'
DISCONNECT_MESSAGE = "!DISCONNECT"
SERVER = socket.gethostbyname(socket.gethostname())
ADDR = (SERVER, PORT)

client = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
client.connect(ADDR)

def send(msg):
    message = msg.encode(FORMAT)
    msg_length = len(message)
    send_length = str(msg_length).encode(FORMAT)
    send_length += b' ' * (HEADER - len(send_length))
    client.send(send_length)
    client.send(message)
    #Ideally we'll use the same protocol as the client to manage the length on ther server side but, as I am lazy, I just chose a large number XD
    print(client.recv(2048).decode(FORMAT))

send("Hello World!")
input()
send("Hello Everyone")
input()
send("Hello Chintu Prasad")
input()
send(DISCONNECT_MESSAGE)