sentence = "way a is there will a is there where"

def reverse_sentence(sentence):
    sentence_split = sentence.split() 
    length = len(sentence_split)
    sentence_reversed = []

    for i in range(length):
        sentence_reversed.insert(i,sentence_split[length-i-1])

    return ' '.join(sentence_reversed)

print(reverse_sentence(sentence))

