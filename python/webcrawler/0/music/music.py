#!/usr/bin/env python
# coding=utf-8
import requests
url = 'https://static.pandateacher.com/Over%20The%20Rainbow.mp3'
res = requests.get(url)
if res.status_code != 200:
    print('Error')
else:
    with open ('Over The Rainbow.mp3','wb') as f:
        f.write(res.content)
