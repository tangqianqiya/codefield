import requests
headers = {'User-Agent': 'Mozilla/5.0 (Windows NT 10.0; WOW64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/71.0.3578.98 Safari/537.36'}
url = 'https://c.y.qq.com/base/fcgi-bin/fcg_global_comment_h5.fcg'
params = {
    'g_tk_new_20200303':'5381',
    'g_tk':'5381',
    'loginUin':'0', 
    'hostUin':'0',
    'format':'json',
    'inCharset':'utf8',
    'outCharset':'GB2312',
    'notice':'0',
    'platform':'yqq.json',
    'needNewCode':'0',
    'cid':'205360772',
    'reqtype':'2',
    'biztype':'1',
    'topid':'102065756',
    'cmd':'6',
    'needmusiccrit':'0',
    'pagenum':'1',
    'pagesize':'75',
    'lasthotcommentid':'song_102065756_3202544866_44059185',
    'domain':'qq.com',
    'ct':'24',
    'cv':'10101010' 
}
r = requests.get(url,headers=headers,params=params)
js = r.json()
msc_list = js['comment']['commentlist']
for msc_tag in msc_list:
    print(msc_tag['rootcommentcontent'])
    print('')
