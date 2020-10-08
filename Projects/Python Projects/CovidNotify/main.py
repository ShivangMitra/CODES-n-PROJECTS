from plyer import notification

def notifyMe(title, message):
    notification.notify(
        title = title,
        message = message,
        app_icon = "icon.ico",
        timeout = 15
    )

if __name__ == '__main__':
    notifyMe("Zephyrus", "Our first Notification")