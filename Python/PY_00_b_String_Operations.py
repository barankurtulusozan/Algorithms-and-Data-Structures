#PY_00_b_String_Operations

#String Concatenation
a= "Hi"
b= "THERE"
ab = a +' '+ b
print(ab)
#Will print Hi THERE

#String Multiplication
a = "a"
five_times_a = a*5
print(five_times_a) #will print aaaaa

#String Index
language = "PYTHON"
print(language[0]) #will print P

#Reverse String Index
string = "Print the exclamation mark with negativ index!"
exclamation = string[-1]
print(exclamation)

#Slicing a String Expression
a = "This is a String"
b = a[0:3] 
c = a[:3]
print(b + ' '  + c)
# will print This This
d = a[9:]
print(str(d))
# will print String

#Does a stringcontainsa spesific string in it
name = "This is a long name"
print("name" in name)    
# This will print boolean result:True 
contains = "is" in name
print(contains)
# Will print True


#Length of a string 
sentence="one day a man walks into a bar"
length=len(sentence)

first_half = sentence[:int(len(sentence)/2)]
print(first_half)


#make a string lower or UPPER case
hi="Hello World"
print(hi.lower())
print(hi.upper())

#Placeholders 
#%s for strings, %d for numeric or decimal values
name="John Doe"
print("Hello %s"%name)
age=36
print("Age= %d"%age) 