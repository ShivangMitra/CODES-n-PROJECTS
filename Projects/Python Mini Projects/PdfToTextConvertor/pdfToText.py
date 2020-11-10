import PyPDF2

pdfFile = open("convert.pdf", "rb")

pdfReader = PyPDF2.PdfFileReader(pdfFile)
num_page = pdfReader.numPages
pageObj = pdfReader.getPage(num_page-1)
text = pageObj.extractText()

with open(r"C:\CODE_n_PROJECTS\Projects\Python Mini Projects\PdfToTextConvertor\converted.txt", "a") as f :
    f.writelines(text)