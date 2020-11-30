from PyQt5 import QtWidgets
from PyQt5.QtWidgets import QApplication, QMainWindow
import sys


class MyWindow(QMainWindow):
    def __init__(self):
        super(MyWindow, self).__init__()
        self.setGeometry(650, 200, 700, 500)
        self.setWindowTitle("Zeph GUI")
        self.initUI()

    def initUI(self):
        self.label = QtWidgets.QLabel(self)
        self.label.setText("Zephyrus no GUI")
        self.label.move(300, 50)

        self.btn1 = QtWidgets.QPushButton(self)
        self.btn1.setText("Spank me!")
        self.btn1.clicked.connect(self.clicked)

    def clicked(self):
        self.label.setText("aaah...harder...HARDER DADDY!!")
        self.update()

    def update(self):
        self.label.adjustSize()


# def clicked():
#     print("clicked")

def window():
    app = QApplication(sys.argv)
    win = MyWindow()
    # win.setGeometry(650, 200, 700, 500)
    # win.setWindowTitle("Zeph GUI")

    # label = QtWidgets.QLabel(win)
    # label.setText("Zephyrus no GUI")
    # label.move(300, 50)
    #
    # btn1 = QtWidgets.QPushButton(win)
    # btn1.setText("Spank me!")
    # btn1.clicked.connect(clicked)

    win.show()
    sys.exit(app.exec_())

window()