from PyQt5 import QtWidgets
from PyQt5.QtWidgets import QApplication, QMainWindow
import sys

def window():
    app = QApplication(sys.argv)
    win = QMainWindow()
    win.setGeometry(650, 200, 700, 500)
    win.setWindowTitle("Zeph GUI")

    label = QtWidgets.QLabel(win)
    label.setText("Zephyrus no GUI")
    label.move(300, 50)

    win.show()
    sys.exit(app.exec_())

window()