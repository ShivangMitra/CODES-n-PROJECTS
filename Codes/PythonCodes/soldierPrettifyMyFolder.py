import os

def soldier(folder_path, ignore_file, format_index):
    files = os.listdir(folder_path)
    number = 1
    for items in files:
        if not os.path.isdir(f"{folder_path}\\{items}"):
            with open(ignore_file, "r") as f:
                ignore = f.read()
                file_name = items.split(".")[0]
                file_extension = items.split(".")[1]
                if file_extension == format_index and file_name not in ignore:
                    os.rename(f"{folder_path}\\{items}", f"{folder_path}\\{number}.{format_index}")
                    number += 1
                elif file_name not in ignore:
                    file_name = file_name.capitalize()[0] + file_name[1:]
                    os.rename(f"{folder_path}\\{items}", f"{folder_path}\\{file_name}.{file_extension}")


if __name__ == '__main__':
    folder_path = input("Type the path of the folder you want to prettify\n")
    ignore_file = input("Please provide a file which contains info of the files you want unchanged\n")
    format_index = input("Provide the format which you want numbered\n")
    ignore_file = ignore_file + ".txt"
    soldier(folder_path, ignore_file, format_index)
    print("Changes Successfully Applied")
    # C:\Users\KIIT\Downloads\Prettification
    # C:\Users\KIIT\Downloads\Mai hi toh hu ignore
    # script_dir = os.path.dirname(__file__)
    # rel_path = ignore_file
    # abs_file_path = os.path.join(script_dir, rel_path)
    # print(abs_file_path)