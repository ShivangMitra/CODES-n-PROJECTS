import datetime
import os

def time_log():
    return datetime.datetime.now()

def handle_log(data, person, choice):
    if data == 1:
        if choice == 1:
            print("Type what you ate")
            food = input()
            pfile = person+"-food.txt"
            with open(pfile, "a") as f:
                f.write(f"[{str(time_log())}] : {food}\n")
            print("Successfully written")
        else:
            print("Type what exercise you did")
            exer = input()
            pfile = person+"-exer.txt"
            with open(pfile, "a") as f:
                f.write(f"[{str(time_log())}] : {exer}\n")
            print("Successfully written")

    else:
        if choice == 1:
            pfile = person + "-food.txt"
            if os.path.exists(f"C:\CODE_n_PROJECTS\Codes\PythonCodes\\{pfile}"):
                with open(pfile) as f:
                    for line in f:
                        print(line,end="")
            else:
                print("The file log does not exist, create a file log first")
        else:
            pfile = person + "-exer.txt"
            if os.path.exists(f"C:\CODE_n_PROJECTS\Codes\PythonCodes\\{pfile}"):
                with open(pfile) as f:
                    for line in f:
                        print(line, end="")
            else:
                print("The file log does not exist, create a file log first")


if __name__ == '__main__':
    print("WELCOME TO HEALTH MANAGEMENT SYSTEM")
    print("Enter choice to log or retrieve data(1/0): ")
    data = int(input())
    print("Enter name of person: ")
    person = input()
    print("Enter choice for food or exercise(1/0): ")
    choice = int(input())
    handle_log(data, person, choice)