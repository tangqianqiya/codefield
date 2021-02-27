#!/usr/bin/env python # coding=utf-8 import requests
# coding=utf-8
import requests
url = 'https://res.pandateacher.com/2019-01-12-15-29-33.png'
res = requests.get(url)
if res.status_code != 200:
    print('Error')
else:
    with open ('photo.jpg','wb') as f:
        f.write(res.content)
