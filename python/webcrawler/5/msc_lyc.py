import re,requests
headers = {
    'User-Agent': 'Mozilla/5.0 (Windows NT 10.0; WOW64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/71.0.3578.98 Safari/537.36',
    'origin': 'https://y.qq.com',
    'referer': 'https://y.qq.com/'
}
url = 'https://c.y.qq.com/lyric/fcgi-bin/fcg_query_lyric_yqq.fcg'
params = {
    'nobase64':'1',
    'musicid': '5105986',
    '-': 'jsonp1',
    'g_tk_new_20200303': '5381',
    'g_tk': '5381',
    'loginUin': '0',
    'hostUin': '0',
    'format': 'json',
    'inCharset': 'utf8',
    'outCharset': 'utf-8',
    'notice': '0',
    'platform': 'yqq.json',
    'needNewCodeo': '0'
}
r = requests.get(url,headers=headers,params=params)
js = r.json()
msc_tag = js['lyric']
for i in msc_tag.split('&#10'):
    lyric = re.sub("[A-Za-z0-9\\!\\%\\[\\]\\,\\。\\&\\#\\;]","",i)
    if lyric.strip():
        print(lyric)
