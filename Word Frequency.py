import PyPDF2

pdfFileObj = open('book.pdf','rb')

pdfReader = PyPDF2.PdfReader(pdfFileObj)

numPages = len(pdfReader.pages)

String = input("Enter String: ")
#pageObj = pdfReader.pages[1]

for i in range(0, 20):
    pageObj = pdfReader.pages[i]
    lines = pageObj.extract_text().split("\n")
    wordsList = []

    for line in lines:
        wordsList.append(line.split(" "))

    word = []
    for words in wordsList:
        for w in words:
            word.append(w)

count = 0
for wd in word:
    if String in word:
        count = count+1

if count==0:
    print("Word not found")
else:
    print(count)