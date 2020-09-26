#harry ki exercise 1
dict = {
    'literally':'‘Literally’ means, “in a literal sense”, or “what I’m saying is not imagined, but truly happened as I’m saying it.” Therefore, popular uses like “I literally died laughing,” or “He was so embarrassed his cheeks literally burned up,” are not correct. \nOR YOU COULD ALSO READ THE ARTICLE IN THE GIVEN LINK BELOW \nhttps://en.wiktionary.org/wiki/literally',
    'ironic':'Irony can be categorized into different types, including verbal irony, dramatic irony, and situational irony. Verbal, dramatic, and situational irony are often used for emphasis in the assertion of a truth. The ironic form of simile, used in sarcasm, and some forms of litotes can emphasize one\'s meaning by the deliberate use of language which states the opposite of the truth, denies the contrary of the truth, or drastically and obviously understates a factual connection.\nOR YOU COULD ALSO READ THE ARTICLE IN THE GIVEN LINK BELOW \nhttps://en.wikipedia.org/wiki/Irony',
    'irregardless':'The word irregardless could therefore be expected to have the meaning "in regard to", therefore being an antonym, rather than a synonym, of regardless.\nOR YOU COULD ALSO READ THE ARTICLE IN THE GIVEN LINK BELOW \nhttps://en.wikipedia.org/wiki/Irregardless',
    'nonplussed':'Just check the link\nOR YOU COULD ALSO READ THE ARTICLE IN THE GIVEN LINK BELOW \nhttps://en.wiktionary.org/wiki/nonplussed#:~:text=(file)-,Adjective,%2C%20unaffected%2C%20or%20unimpressed.%20%5B',
    'enormity':'Just check the link\nOR YOU COULD ALSO READ THE ARTICLE IN THE GIVEN LINK BELOW \nhttps://en.wiktionary.org/wiki/enormity'
}
word = input("ENTER THE WORD YOU WANT TO SEARCH BELOW\n")
if word in dict:
    print(dict[word])
else:
    print("COULD NOT FIND YOUR WORD IN THE DICTIONARY")