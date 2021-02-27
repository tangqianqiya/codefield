#!/usr/bin/env python
# coding=utf-8
import requests
url = 'https://localprod.pandateacher.com/python-manuscript/crawler-html/exercise/HTTP%E5%93%8D%E5%BA%94%E7%8A%B6%E6%80%81%E7%A0%81.md'
res = requests.get(url)
if res.status_code != 200:
    print('Error')
else:
    with open ('text.txt','w') as f:
        f.write(res.text)
