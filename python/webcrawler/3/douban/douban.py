import requests
from bs4 import BeautifulSoup
headers = {'User-Agent': 'Mozilla/5.0 (Windows NT 10.0; WOW64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/71.0.3578.98 Safari/537.36'}
for i in range(0,10):
    url = 'https://movie.douban.com/top250?start=%d&filter=' % (i*25)
    res = requests.get(url,headers=headers)
    bs = BeautifulSoup(res.text,'html.parser')
    list_film = bs.find('ol',class_='grid_view').find_all('li')
    for tag_film in list_film:
        with open('doubantop250.txt','a') as f:
            f.write('序号:')
            f.writelines(tag_film.find('em').text)
            f.write('\n')
            f.write('电影名:')
            f.writelines(tag_film.find('span',class_='title').text)
            f.write('\n')
            f.write('评分:')
            f.writelines(tag_film.find('span',class_='rating_num').text)
            f.write('\n')
            f.write('链接:')
            f.writelines(tag_film.find('div',class_='hd').find('a')['href'])
            f.write('\n')
            f.write('推荐语:')
            try:
                f.writelines(tag_film.find('span',class_='inq').text)
            except AttributeError:
                f.write('无')
            f.write('\n')
