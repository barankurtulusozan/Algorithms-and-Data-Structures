#PY_List_Tuple_Dictionary
#Lists
alphabet = ['a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k']
#This will create a list made by characters
print(alphabet[0:6])
#will print characters till g



#Lets create a list of names
names = ["John","Erica","Stephen"]
#If we want to append names to this list
names += ["Joseph","Aysha"]

#Dictionary
country_capitals = {"Denmark":"Copenhagen","Spain":"Madrid"}
#Add Item to dictionary
country_capitals["Turkey"] = "Ankara"
#Delete Item
del country_capitals["Denmark"]
print(country_capitals)
#Prints whole list
print(country_capitals["Spain"])
#Prints capital of Spain
print(country_capitals.values())
#will print all the values of the dictionary
print("Turkey" in country_capitals.keys())
#will print if Turkey is in the dictionary

fruits = ["apple","banana","pear"]
fruits_dictionary = {"apple":1,"banana":2,"pear":3}
print(fruits) #will print list of fruits
print(fruits_dictionary.keys()) 
#will print dictionary of fruit dictionary
print("pear" in fruits_dictionary.keys())
print(3 in fruits_dictionary.values())
#will print true if dictionary has a value of 3

#keys and values are differ from eachother significantly, beware

