import requests
headers = {'User-Agent': 'Mozilla/5.0 (Windows NT 10.0; WOW64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/71.0.3578.98 Safari/537.36'}
url = 'https://c.y.qq.com/soso/fcgi-bin/client_search_cp'
for i in range(5):
    params = {
        'ct':'24',
        'qqmusic_ver': '1298',
        'new_json':'1',
        'remoteplace':'sizer.yqq.song_next',
        'searchid':'59091538798969282',
        't':'0',
        'aggr':'1',
        'cr':'1',
        'catZhida':'1',
        'lossless':'0',
        'flag_qc':'0',
        'p':str(i+1),
        'n':'20',
        'w':'周杰伦',
        'g_tk':'5381',
        'loginUin':'0',
        'hostUin':'0',
        'format':'json',
        'inCharset':'utf8',
        'outCharset':'utf-8',
        'notice':'0',
        'platform':'yqq.json',
        'needNewCode':'0'
    }
    r = requests.get(url,headers=headers,params=params)
    js = r.json()
    msc_list = js['data']['song']['list']
    for msc_tag in msc_list:
        print('专辑名:'+msc_tag['album']['name'])
        print('歌名:'+msc_tag['name'])
        print('链接:'+msc_tag['url'])
