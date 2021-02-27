#!/usr/bin/env python
# coding=utf-8
import requests
from bs4 import BeautifulSoup
for i in range(1,6):
    url='https://wordpress-edu-3autumn.localprod.oc.forchange.cn/all-about-the-future_04/comment-page-%d/#comments' % i
    res = requests.get(url)
    if res.status_code != 200:
        print('Error!')
    else:
        soup = BeautifulSoup(res.text,'html.parser')
        comments = soup.find_all('div',class_ = 'comment-content')
        with open('50comments.txt','a') as f:
            for comment in comments:
                f.writelines(comment.text.strip())
                f.write('\n')
