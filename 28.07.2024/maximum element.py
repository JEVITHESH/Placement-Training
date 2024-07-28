array=[3, 5, 7, 2, 14, -1, 4, 10, 12]
max=array[0]
for num in array:
    if num>max:
        max=num
print(f"The maximum element in the array is:{max}")
