import socket

HOST = "10.0.0.92"
PORT = 54321

with socket.socket(socket.AF_INET, socket.SOCK_STREAM) as mySocket:
    mySocket.bind((HOST, PORT))
    mySocket.listen()
    connection, address = mySocket.accept()
    print("connected?!")
    with connection:
        print("zuck is watching")
        while True:
            data = connection.recv(1024)
            if not data:
                print(data)
                break
            print(address)
            print("data:", str(data).split("\\r\\n"))
            connection.sendall(data)
                
