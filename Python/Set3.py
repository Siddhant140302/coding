#Q1
'''name=input("Enter your name:")
print("good afternoon," +name)'''

#Q2
'''letter="Dear <|NAME|>,
You are selected!

Date: <|DATE|>"

name = input("Enter your name\n")
date = input("Enter Date\n")
letter = letter.replace("<|NAME|>", name)
letter = letter.replace("<|DATE|>", date)
print(letter)'''

#Q3 To detect double spaces
'''st="This ia a string with double  spaces"
doubleSpaces=st.find("  ")
print(doubleSpaces)'''

#Q4 replace 3 with single space
'''st="This ia a string with double  spaces"
st=st.replace("  ", " ")
print(st)'''

#Q5 Program to format a following letter
letter="Dear Harry this python course is Nice! Thanks!"
print(letter)
formatted_letter="Dear Harry,\n\tThis Python course is nice!\n Thnaks!"
print(formatted_letter)