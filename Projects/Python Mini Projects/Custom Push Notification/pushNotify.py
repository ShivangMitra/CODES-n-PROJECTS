from win10toast import ToastNotifier

tnr = ToastNotifier()

tnr.show_toast("ALERT", "You are being hacked")
# tnr.show_toast("ALERT", "You are being hacked", icon_path = "", duration = 5, threaded = False)