import requests
from bs4 import BeautifulSoup
url = 'http://books.toscrape.com/'
res = requests.get(url)
if res.status_code != 200:
    print('error')
else:
    bs = BeautifulSoup(res.text,'html.parser')
    list_type = bs.find('ul',class_ = "nav").find('li').find('ul').find_all('li')
    for tag_type in list_type:
        tag_name = tag_type.find('a')
        with open('booktypes.txt','a') as f:
            f.writelines(tag_name.text.strip())
            f.write('\n')

