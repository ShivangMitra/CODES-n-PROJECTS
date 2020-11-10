from moviepy.editor import *

clip = VideoFileClip(".mp4")
clip.write_gif(".gif")