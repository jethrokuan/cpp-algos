testcases = int(input())
books = []

for i in range(testcases):
    books.append(int(input()))

sorted_books = sorted(books, reverse=True)
price = 0
for idx, p in enumerate(sorted_books):
    if idx % 3 != 2:
        price += p
print(price)
