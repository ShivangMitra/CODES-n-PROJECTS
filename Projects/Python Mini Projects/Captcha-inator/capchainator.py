from captcha.image import ImageCaptcha
from captcha.audio import AudioCaptcha

image = ImageCaptcha()
data_image = image.generate("1234")
image.write("1234", "captcha.png")

audio = AudioCaptcha()
data_audio = audio.generate("1234")
audio.write("1234", "captcha.wav")