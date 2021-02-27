#!/usr/bin/env python
# coding=utf-8
import requests
from bs4 import BeautifulSoup
url = 'https://wordpress-edu-3autumn.localprod.oc.forchange.cn/'
res = requests.get(url)
bs = BeautifulSoup(res.text,'html.parser')
art_list = bs.find_all('article')
for art_tag in art_list:
    ti = art_tag.find('time',class_='updated')
    href = art_tag.find('h2').find('a')
    with open('articles.txt','a') as f:
        f.writelines(ti.text)
        f.write('\n')
        f.writelines(href.text)
        f.write('\n')
        f.writelines(href['href'])
        f.write('\n')
