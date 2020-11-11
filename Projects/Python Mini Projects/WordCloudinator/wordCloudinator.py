import numpy as np
from PIL import Image
import wikipedia
from wordcloud import WordCloud, STOPWORDS

import warnings
warnings.catch_warnings()
warnings.simplefilter("ignore")


back = np.array(Image.open("back.jpg"))
stopwords = set(STOPWORDS)

wc = WordCloud(background_color="white", max_words=200, mask=back, stopwords=stopwords)

wc.generate(wikipedia.page(wikipedia.search("Jarvis (name)")).content)

wc.to_file("word_cloud.jpg")