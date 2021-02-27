import requests
from bs4 import BeautifulSoup
url = 'http://books.toscrape.com/catalogue/category/books/travel_2/index.html'
res = requests.get(url)
if res.status_code != 200:
    print('error')
else:
    bs = BeautifulSoup(res.text,'html.parser')
    list_book = bs.find_all('article',class_='product_pod')
    for tag_book in list_book:
        tag_rate = tag_book.find('p')
        tag_name = tag_book.find('h3').find('a')
        with open('bookname_rank.txt','a') as f:
            f.writelines(tag_name['title'].strip())
            f.write(' Star-rating:')
            f.writelines(tag_rate['class'][1])
            f.write('\n')

