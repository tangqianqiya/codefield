import requests
from bs4 import BeautifulSoup
url = 'https://www.xiachufang.com/explore/'
headers = {'User-Agent': 'Mozilla/5.0 (Windows NT 10.0; WOW64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/71.0.3578.98 Safari/537.36'}
res = requests.get(url,headers=headers)
bs = BeautifulSoup(res.text,'html.parser')
list_name = bs.find('div',class_='normal-recipe-list').find_all('li')
for tag_name in list_name:
    ds = tag_name.find('p',class_='name').find('a')
    ing = tag_name.find('p',class_='ing')
    with open('dishes.txt','a') as f:
        f.writelines(ds.text.strip())
        f.write(':')
        f.write('https://www.xiachufang.com')
        f.writelines(ds['href'])
        f.write('\n')
        f.write('原材料:')
        f.writelines(ing.text.strip())
        f.write('\n')
