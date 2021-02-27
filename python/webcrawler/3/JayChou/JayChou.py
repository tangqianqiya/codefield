import requests
from bs4 import BeautifulSoup
headers = {'User-Agent': 'Mozilla/5.0 (Windows NT 10.0; WOW64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/71.0.3578.98 Safari/537.36'}
url = 'https://c.y.qq.com/soso/fcgi-bin/client_search_cp?ct=24&qqmusic_ver=1298&new_json=1&remoteplace=txt.yqq.song&searchid=60997426243444153&t=0&aggr=1&cr=1&catZhida=1&lossless=0&flag_qc=0&p=1&n=20&w=%E5%91%A8%E6%9D%B0%E4%BC%A6&g_tk=5381&loginUin=0&hostUin=0&format=json&inCharset=utf8&outCharset=utf-8&notice=0&platform=yqq.json&needNewCode=0'
r = requests.get(url,headers=headers)
js = r.json()
list_msc = js['data']['song']['list']
for tag_msc in list_msc:
    print(tag_msc['name'])
    print('所属专辑:'+tag_msc['album']['name'])
    print('播放时长:'+str(tag_msc['interval'])+'秒')
    print('播放链接:https://y.qq.com/n/yqq/song/%shtml' % tag_msc['interval'])
